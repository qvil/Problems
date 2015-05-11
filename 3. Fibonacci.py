# Date : 150511 Mon
# Author : Taesu Hyeon
# File name : Fibonacci.py

def Fibonacci(num):
	fibolist = [0 for var in range(num)]
	cnt = 2
	fibolist[0] = 0
	fibolist[1] = 1
	while cnt != num:				
		fibolist[cnt] = fibolist[cnt-2] + fibolist[cnt-1]
		cnt += 1
	print(fibolist)

Fibonacci(100)

# Problem! overrange integer