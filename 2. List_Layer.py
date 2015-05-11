# Date : 150511 Mon
# Author : Taesu Hyeon
# File name : List_Layer.py

list1 = ['a','b','c']
list2 = [1,2,3]
layerlist = [0 for var in range(list1_len+list2_len)] # list initialize to 0
list1_len = len(list1)
list2_len = len(list2)
layerlist_len = len(layerlist)

def listlayer():
	cnt = 0;
	for index in range(0, layerlist_len, 2):
		layerlist[index] = list1[cnt]
		layerlist[index+1] = list2[cnt]
		cnt += 1
	print(layerlist)

listlayer()