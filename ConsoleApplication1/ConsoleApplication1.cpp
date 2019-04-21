// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 20

typedef struct {
	int data[MaxSize];
	int length;
	
}Sqlist;

int GetElem(Sqlist L, int i, int &e) {
	if (i<1||i>L.length) {
		return 0;
		e = L.data[i - 1];//ע�����Ա����Ǹ�ai��Ӧ��˳����е�Ԫ��ΪL.data[i-1]
		return 1;
	}
}

int LocateElem(Sqlist L,int e) {
	int i = 0;
	while (i<L.length) {
		if (L.data[i]==e) {
			return i + 1;
		}
		i++;
	}
	return -1;
}

//��ָ��λ�ò���
int ListInsertByIndex(Sqlist &L,int e,int i) {
	int j;
	if (i<1||i>L.length+1) {
		return 0;
	}
	i--;//תΪ�����±�
	for (int j = L.length; j >= i; j--) {
		L.data[j+1] = L.data[j];

	}
	L.data[i+1] = e;
	L.length++;
	return 1;
}


//˳����в���һ��Ԫ��
int ListInsert(Sqlist &L,int e) {
	int i = 0;
	while (i<=L.length) {
		if (L.data[i]==e||(L.data[i]<e&&L.data[i+1]>e)) {
			for (int j = L.length;j>=i;j--) {
				L.data[j+1] = L.data[j];
			}
			L.data[i+1] = e;
			L.length=L.length+1;
			return i+1;
		}
		i++;
	}
	return -1;

}

//ɾ��Ԫ��
int ListDelete(Sqlist &L, int e) {
	int i = 0;
	while (i <= L.length) {
		if (L.data[i] == e) {
			for (int j =i; j<=L.length; j++) {
				L.data[j] = L.data[j+1];
			}
			L.length--;
			return 1;
		}
		i++;
	}
	return -1;
}

int testInsert()
{
	Sqlist L;
	L.length = 10;
	for (int i = 0; i <=L.length;i++) {
		L.data[i] =i*2;
		//int a = rand() % 10;    //����0~9���������ע��10�ᱻ����
		//int a = rand() % 51 + 13;    //����13~63�������
	}
	printf("��ʼ��");
	for (int i = 0; i <= L.length; i++) {
		printf("%d,",L.data[i]);
	}

	printf("%d\n",ListInsert(L,4));
	printf("֮��\n");
	for (int i = 0; i <= L.length; i++) {
		printf("%d,", L.data[i]);
	}
    return 0;
}




int main()
{
	Sqlist L;
	L.length = 10;
	for (int i = 0; i <= L.length; i++) {
		L.data[i] = i * 2;
		//int a = rand() % 10;    //����0~9���������ע��10�ᱻ����
		//int a = rand() % 51 + 13;    //����13~63�������
	}
	printf("��ʼ��");
	for (int i = 0; i <= L.length; i++) {
		printf("%d,", L.data[i]);
	}

	printf("%d\n", ListDelete(L,2));
	printf("֮��\n");
	for (int i = 0; i <= L.length; i++) {
		printf("%d,", L.data[i]);
	}
	return 0;
}



