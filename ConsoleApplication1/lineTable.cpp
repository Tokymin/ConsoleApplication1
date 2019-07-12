/*将数组R[a1,a2,a3...an,b1,b2,b3]变换为R[b1,b2,b3..bn，a1,a2,a3...an,]
两种逆置方式*/

#include "stdafx.h"
#include "math.h"
#include <stdlib.h>

#define MaxSize 30

//typedef struct {
//	int data[MaxSize];
//	int length;
//
//}Sqlist;

void reverses(int R[], int left, int right) {
	//逆置
	int k = left;
	int j = right;
	int temp;
	//int mid = (left + right) / 2;
	while (k<j) {
		//交换R[k]与R[j]
		temp = R[k];
		R[k] = R[j];
		R[j] = temp;
		k++;
		j--;

	}
	for (int i = 0; i <= 10; i++) {
		printf("%d,", R[i]);
	}
}

void reverses2(int R[], int left, int right,int arraysize) {
	//逆置
	//int k = left;
	//int j = right;
	if (left>right||right>=arraysize) {
		return;
	}
	int temp;
	int mid = (left + right) / 2;
	int i = 0;
	while (i <=(mid - left)) {
		//交换R[k]与R[j]
		temp = R[left+i];
		R[left + i] = R[right-i];
		R[right - i] = temp;
		i++;
	}
	for (int i = 0; i <= 10-1; i++) {
		//输出时length-1
		printf("%d,", R[i]);
	}
	printf("\n");
}
void reverse3(int R[],int from,int to) {
	int i, temp;
	for (i = 0; i < (to - from + 1) / 2;i++) {
		temp = R[from + i]; R[from + i] = R[to - i];  R[to - i]=temp;
	}
}


void mainlinerTable() {
	//Sqlist L;
	//L.length = 10;
	//for (int i = 0; i <= L.length; i++) {
	//	L.data[i] = i * 2;
	//	int a = rand() % 10;    //产生0~9的随机数，注意10会被整除
	//	int a = rand() % 51 + 13;    //产生13~63的随机数
	//}
	int R[] = { 1,2,5,6,8,10,13,14,16,17 };
	int m = 4;
	int n = 6;
	reverses2(R, 0,m+n-1,10);
	reverses2(R, 0, n - 1,10);
	reverses2(R, n, m+n - 1,10);
	
}

