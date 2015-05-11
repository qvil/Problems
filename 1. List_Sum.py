# Date : 150511 Mon
# Author : Taesu Hyeon
# File name : 1. List_Sum.py

############ for
# List = [1,2,3,4,5]
# result = 0
# for i in List:
	# result += i
# print(result)

############ while
# List = [1,3,5,7,9]
# result = 0
# cnt = 0
# listlen = len(List)

# while cnt != listlen:
# 	result += List[cnt]
# 	cnt += 1
# print result

############ reculsive
# List = [1,3,5,7,9]
# result = 0
# listlen = len(List) - 1

# def listsum(cnt):
# 	global result  # point!! global!!
# 	result += List[cnt]
# 	if cnt == listlen:
# 		print("sum : %d" % result)
# 	else:
# 		listsum(cnt+1)

# listsum(0)

############ Advanced function using input
# Anyone try to resolve this problem