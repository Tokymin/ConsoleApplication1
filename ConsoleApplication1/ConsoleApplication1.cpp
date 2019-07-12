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

void location(Sqlist &L) {
	//��һ��˳����е�Ԫ�أ�С��0�ķ�ǰ��,���ڷź�벿��
	//�㷨���ֱ��ͷ��β�����б��ҵ�����0�ĺ�С��0�ģ�����λ�á���ֹ����Ϊi<j
	int i = 0, j = L.length-1;
	int temp;
	while (i<j)
	{
		while (i<j&&L.data[i]<0) {
			i++;//��iָ��ѭ��
		}
		while (i<j&&L.data[j]>=0) {
			j--;//��jָ��ѭ��
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
			k++;//��j��¼������˵ȥѰ��
		}
		if (k>j) {//��ʾL.data[i]��L.data[0..j]�еĶ���ͬ
			j++;
			L.data[j] = L.data[i];//ΪʲôҪ��ֵ��

		}
	}
	L.length = j + 1;

}

//�󽻼�
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

int main()
{
	Sqlist L;
	L.length =10;
	for (int i = 0; i < L.length; i++) {
		/*L.data[i] = i + 2;*/
		//int a = rand() % 10;    //����0~9���������ע��10�ᱻ����
		//int a = rand() % 51 + 13;    //����13~63�������
		L.data[i] = rand() % 3 +5;
	}
	

	Sqlist L1;
	L1.length = 11;
	for (int i = 0; i < L1.length; i++) {
		L1.data[i] = i * 3;
	}
	Sqlist L2;
	
	printf("��ʼ��");
	for (int i = 0; i < L.length; i++) {
		printf("%d,", L.data[i]);
		
	}
	printf("\n");
	printf("��ʼ��");
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
	//reverse(L)//����;
	//printf("֮��\n");
	//for (int i = 0; i < L.length; i++) {
	//	printf("%d,", L.data[i]);
	//}
	//printf("%d,", L.length);
	/*int a[5] = { 1, 2, 3, 4, 5 };*/
	/*int b[5] = { 1, 2, 3, 4, 5 };*/
	/*loopLeftTran(a,5,3);//ѭ������*/
	//location(L);//С��0 �ķ�ǰ�����ڵķź�
	//delSame(L)ɾ��������ͬ��Ԫ��;
	Intersection(L,L1,L2);
	for (int i = 0; i < L2.length; i++) {
		printf("%d,",L2.data[i]);
	}
	return 0;
}






