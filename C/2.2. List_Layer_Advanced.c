/*
*  Date : 150511 Mon
*  Author : Taesu Hyeon
*  File name : 2.2. List_Layer_Advanced.c
*/

#include <stdio.h>

int main(void)
{
	char list1[] = {'1','2','3','4'};
	char list2[] = {'a','b','c','d'};
	char list3[16] = "";
	int list1_len = sizeof(list1) / sizeof(list1[0]);
	int list2_len = sizeof(list2) / sizeof(list2[0]);
	int list3_len = list1_len + list2_len;
	int index = 0, cnt = 0, sum = 0;

	for(index = 0; index < list3_len; index += 2){
		list3[index] = list1[cnt];
		list3[index+1] = list2[cnt];
		cnt++;
	}
	printf("list : %s\n", list3);
	return 0;
}
