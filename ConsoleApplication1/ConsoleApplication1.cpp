// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "math.h"
#include <stdlib.h>

#define MaxSize 30

typedef struct {
	int data[MaxSize];
	int length;
	
}Sqlist;

//倒置一个顺序表
void reverse(Sqlist &L) {
	int i = 0; int temp;
	while (i<L.length/2) {
		temp = L.data[i];
		L.data[i] = L.data[L.length - i-1];
		L.data[L.length - i-1] = temp;
		i++;
	}
}

//循环左移实现
void reverse(int R[],int left,int right){
	int k = left;
	int j = right;
	int temp;
	while (k<j) {
		//交换R[k]与R[j]
		temp = R[k];
		R[k] = R[j];
		R[j] = temp;
		k++;
		j--;

	}

}

void loopLeftTran(int R[],int n,int p) {
	//逆置三次
	if (p>0&&p<n) {
		//reverse(R,0,n-1);//将全部数据逆置
		//reverse(R, 0 ,n - p - 1);//将前n-p个元素逆置
		//reverse(R, n - p,n-1);//将后p个元素逆置
		//循环右移
		reverse(R, 0, n - 1);//将全部数据逆置
		reverse(R, 0,p-1);//将前p个元素逆置
		reverse(R, p, n - 1);//后n-p个元素逆置
	}
}

//int location(int L[],int length) {
//	//将一个顺序表中的元素，小于0的放前面
//	int i = 0, j = 0;
//	int left = 0, right = length;
//	while (left<right)
//	{
//		for (int i = 0; i < length/2;i++) {
//		
//		if (L[left]>0) {
//			/*L[i]=*/
//		}
//
//		}
//		
//	}
//	
//}

//int move(Sqlist &L) {
//	int temp;
//	int i = 0; int j = L.length - 1;
//	while (i<j)
//	{
//
//	}
//}

int main2()
{
	//Sqlist L;
	//L.length = 11;
	//for (int i = 0; i < L.length; i++) {
	//	L.data[i] = i * 2;
	//	//int a = rand() % 10;    //产生0~9的随机数，注意10会被整除
	//	//int a = rand() % 51 + 13;    //产生13~63的随机数
	//}
	//

	//Sqlist L1;
	//L1.length = 11;
	//for (int i = 0; i < L1.length; i++) {
	//	L1.data[i] = i * 3;
	//}

	//printf("初始：");
	//for (int i = 0; i < L.length; i++) {
	//	printf("%d,", L.data[i]);
	//	
	//}

	////for (int i = 0; i < L.length; i++) {
	////	printf("%d,", L1.data[i]);

	////}
	//

	//Sqlist L3;
	///*L3.length = 10;
	//for (int i = 0; i <= L3.length; i++) {
	//	L3.data[i] = 0;
	//}*/
	//reverse(L);
	//printf("之后\n");
	//for (int i = 0; i < L.length; i++) {
	//	printf("%d,", L.data[i]);
	//}
	//printf("%d,", L.length);
	int a[5] = { 1, 2, 3, 4, 5 };
	/*int b[5] = { 1, 2, 3, 4, 5 };*/
	/*loopLeftTran(a,5,3);*/
	
	for (int i = 0; i < 5; i++) {
		printf("%d,",a[i]);
	}
	return 0;
}






