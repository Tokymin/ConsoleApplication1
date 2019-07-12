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

void location(Sqlist &L) {
	//将一个顺序表中的元素，小于0的放前面,大于放后半部分
	//算法：分别从头和尾遍历列表，找到大于0的和小于   0的，交换位置。终止条件为i<j
	int i = 0, j = L.length-1;
	int temp;
	while (i<j)
	{
		while (i<j&&L.data[i]<0) {
			i++;//用i指针循环
		}
		while (i<j&&L.data[j]>=0) {
			j--;//用j指针循环
		}
		if (i<j) {
			temp = L.data[i];
			L.data[i] = L.data[j];
			L.data[j] = temp;
		}
	}
}
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

void delSame(Sqlist &L) {
	int i, j = 0, k;
	for (i = 1; i < L.length;i++) {
		k = 0;
		while (k <= j&&L.data[k]!=L.data[i]) {
			k++;//用j记录，或者说去寻找
		}
		if (k>j) {//表示L.data[i]与L.data[0..j]中的都不同
			j++;
			L.data[j] = L.data[i];//为什么要赋值？

		}
	}
	L.length = j + 1;

}

//求交集
void Intersection(Sqlist A,Sqlist B,Sqlist &C) {
	int i, j, k = 0;
	for (i = 0; i < A.length;i++) {
		j = 0;
		while (j < B.length&&B.data[j]!=A.data[i]) {
			j++;
		}
		if (j<B.length) {
			C.data[k++] = A.data[i];
		}
		C.length = k;
	}
}

//集合是有序表，求交集。利用有序表的归并运算
void Interscetion1(Sqlist A, Sqlist B, Sqlist &C) {
	int i = 0, j = 0, k = 0;
	while (i<A.length&&j<B.length) {
		if (A.data[i]==B.data[j]) {
			C.data[k] = A.data[i];
			i++;
			j++;
			k++;
		}
		else if(A.data[i] < B.data[j]){
			i++;
		}
		else {
			j++;
		}
		C.length = k;
	}
}

void Unio(Sqlist A, Sqlist B, Sqlist &C) {
	int i, j, k;
	for (i= 0; i < A.length; i++) {
		C.data[i] = A.data[i];
	}
	k=A.length;
	for (j = 0; j < B.length; j++) {
		j = 0;
		while (j < B.length) {
			if (B.data[j] != C.data[j])
				C.data[k++] = A.data[i];
			j++;
		}
	}
	 C.length=k;
}

int mainConse()
{
	Sqlist L;
	L.length =10;
	for (int i = 0; i < L.length; i++) {
		L.data[i] = i + 2;
		//int a = rand() % 10;    //产生0~9的随机数，注意10会被整除
		//int a = rand() % 51 + 13;    //产生13~63的随机数
		//L.data[i] = rand() % 3 +5;
	}
	

	Sqlist L1;
	L1.length = 11;
	for (int i = 0; i < L1.length; i++) {
		L1.data[i] = i +4;
	}
	Sqlist L2;
	
	printf("初始：");
	for (int i = 0; i < L.length; i++) {
		printf("%d,", L.data[i]);
		
	}
	printf("\n");
	printf("初始：");
	for (int i = 0; i < L1.length; i++) {
		printf("%d,", L1.data[i]);

	}
	////for (int i = 0; i < L.length; i++) {
	////	printf("%d,", L1.data[i]);

	////}
	//

	//Sqlist L3;
	///*L3.length = 10;
	//for (int i = 0; i <= L3.length; i++) {
	//	L3.data[i] = 0;
	//}*/
	//reverse(L)//逆置;
	//printf("之后\n");
	//for (int i = 0; i < L.length; i++) {
	//	printf("%d,", L.data[i]);
	//}
	//printf("%d,", L.length);
	/*int a[5] = { 1, 2, 3, 4, 5 };*/
	/*int b[5] = { 1, 2, 3, 4, 5 };*/
	/*loopLeftTran(a,5,3);//循环左移*/
	//location(L);//小于0 的放前，大于的放后
	//delSame(L)删除表中相同的元素;
	//Intersection(L,L1,L2);	delSame(L2);//求交集之后删除得到的交集集合中相同的元素
	Interscetion1(L, L1, L2);

	printf("\n");
	for (int i = 0; i < L2.length; i++) {
		printf("%d,",L2.data[i]);
	}
	return 0;
}






