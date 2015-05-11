/*
*  Date : 150511 Mon
*  Author : Taesu Hyeon
*  File name : List_Sum.c
*/

#include <stdio.h>

char list[] = {1,2,3,4,5,6,7};
int list_len = (sizeof(list) / sizeof(list[0]));
int sum = 0;

void sum_for(void)
{
	char list[] = {1,2,3,4,5};
	int list_len = (sizeof(list) / sizeof(list[0]));
	int index, sum = 0;
	for(index = 0; index < list_len; index++){
		sum += list[index];
	}
	printf("sum : %d\n", sum);
}

void sum_while(void)
{
	char list[] = {1,2,3,4,5,6};
	int list_len = (sizeof(list) / sizeof(list[0]));
	int index = 0, sum = 0;
	while(index != list_len){
		sum += list[index];
		index++;
	}
	printf("sum : %d\n", sum);
}

void sum_recul(cnt)
{	
	if(cnt == list_len){
		printf("sum : %d\n", sum);
	}else{
		sum += list[cnt];
		sum_recul(cnt+1);
	}
}

int main(void)
{
	// sum_for();
	// sum_while();
	sum_recul(0);

	return 0;
}
