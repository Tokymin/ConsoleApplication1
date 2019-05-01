

#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 30

typedef struct {
	int data[MaxSize];
	int length;

}Sqlist;
int GetElem(Sqlist L, int i, int &e) {
	if (i<1 || i>L.length) {
		return 0;
		e = L.data[i - 1];//ע�����Ա����Ǹ�ai��Ӧ��˳����е�Ԫ��ΪL.data[i-1]
		return 1;
	}
}

int LocateElem(Sqlist L, int e) {
	int i = 0;
	while (i<L.length) {
		if (L.data[i] == e) {
			return i + 1;
		}
		i++;
	}
	return -1;
}

//��ָ��λ�ò���
int ListInsertByIndex(Sqlist &L, int e, int i) {
	int j;
	if (i<1 || i>L.length + 1) {
		return 0;
	}
	i--;//תΪ�����±�
	for (int j = L.length; j >= i; j--) {
		L.data[j + 1] = L.data[j];

	}
	L.data[i + 1] = e;
	L.length++;
	return 1;
}


//˳����в���һ��Ԫ��
int ListInsert(Sqlist &L, int e) {
	int i = 0;
	while (i <= L.length) {
		if (L.data[i] == e || (L.data[i]<e&&L.data[i + 1]>e)) {
			for (int j = L.length; j >= i; j--) {
				L.data[j + 1] = L.data[j];
			}
			L.data[i + 1] = e;
			L.length = L.length + 1;
			return i + 1;
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
			for (int j = i; j <= L.length; j++) {
				L.data[j] = L.data[j + 1];
			}
			L.length--;
			return 1;
		}
		i++;
	}
	return -1;
}

//����˳���Ĺ鲢
void Merge(Sqlist L1, Sqlist L2, Sqlist &L3) {
	//����һ��i һ�� j�ֱ��������L��˭С���ȷ�˭��L3��
	int i = 0; int j = 0; int k = 0;
	while (i<L1.length&&j<L2.length) {
		if (L1.data[i]<L2.data[j]) {
			L3.data[k] = L1.data[i];
			i++;
			k++;

		}
		else if (i == L1.length || j == L2.length) {
		}
		else
		{
			L3.data[k] = L2.data[j];
			j++;
			k++;

		}

	}
	while (i<L1.length) {

		L3.data[k] = L1.data[i];
		i++;
		k++;


	}
	while (j<L2.length) {

		L3.data[k] = L2.data[j];
		j++;
		k++;


	}
	L3.length = k;

}

int testInsert()
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

	printf("%d\n", ListInsert(L, 4));
	printf("֮��\n");
	for (int i = 0; i <= L.length; i++) {
		printf("%d,", L.data[i]);
	}
	return 0;
}




int testMerge()
{
	Sqlist L;
	L.length = 10;
	for (int i = 0; i < L.length; i++) {
		L.data[i] = i * 2;
		//int a = rand() % 10;    //����0~9���������ע��10�ᱻ����
		//int a = rand() % 51 + 13;    //����13~63�������
	}

	Sqlist L1;
	L1.length = 10;
	for (int i = 0; i < L1.length; i++) {
		L1.data[i] = i * 3;
	}

	printf("��ʼ��");
	for (int i = 0; i < L.length; i++) {
		printf("%d,", L.data[i]);

	}

	for (int i = 0; i < L.length; i++) {
		printf("%d,", L1.data[i]);

	}


	Sqlist L3;
	/*L3.length = 10;
	for (int i = 0; i <= L3.length; i++) {
	L3.data[i] = 0;
	}*/
	Merge(L, L1, L3);
	printf("֮��\n");
	for (int i = 0; i < L3.length; i++) {
		printf("%d,", L3.data[i]);
	}
	printf("%d,", L3.length);

	return 0;
}