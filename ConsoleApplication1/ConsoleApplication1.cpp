// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "math.h"
#include <stdlib.h>

#define MaxSize 30

typedef struct {
	int data[MaxSize];
	int length;
	
}Sqlist;

//����һ��˳���
void reverse(Sqlist &L) {
	int i = 0; int temp;
	while (i<L.length/2) {
		temp = L.data[i];
		L.data[i] = L.data[L.length - i-1];
		L.data[L.length - i-1] = temp;
		i++;
	}
}

//ѭ������ʵ��
void reverse(int R[],int left,int right){
	int k = left;
	int j = right;
	int temp;
	while (k<j) {
		//����R[k]��R[j]
		temp = R[k];
		R[k] = R[j];
		R[j] = temp;
		k++;
		j--;

	}

}

void loopLeftTran(int R[],int n,int p) {
	//��������
	if (p>0&&p<n) {
		//reverse(R,0,n-1);//��ȫ����������
		//reverse(R, 0 ,n - p - 1);//��ǰn-p��Ԫ������
		//reverse(R, n - p,n-1);//����p��Ԫ������
		//ѭ������
		reverse(R, 0, n - 1);//��ȫ����������
		reverse(R, 0,p-1);//��ǰp��Ԫ������
		reverse(R, p, n - 1);//��n-p��Ԫ������
	}
}

//int location(int L[],int length) {
//	//��һ��˳����е�Ԫ�أ�С��0�ķ�ǰ��
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
	//	//int a = rand() % 10;    //����0~9���������ע��10�ᱻ����
	//	//int a = rand() % 51 + 13;    //����13~63�������
	//}
	//

	//Sqlist L1;
	//L1.length = 11;
	//for (int i = 0; i < L1.length; i++) {
	//	L1.data[i] = i * 3;
	//}

	//printf("��ʼ��");
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
	//printf("֮��\n");
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






