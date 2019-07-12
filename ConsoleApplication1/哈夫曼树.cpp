#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//����һ�����ݽṹ

typedef struct  {
	//��������
	ElementType data;
	float weight;
	int parent;
	int lchild;
	int rchild;
}HTNode;

void CreatHT(HTNode ht[],int n0) {
	int i, j, k, lnode, rnode;
	float min1, min2;
	for (i = 0; i < 2 * n0 - 1;i++) {//���нڵ��������ó�ֵΪ-1
		ht[i].parent = ht[i].lchild 
			= ht[i].rchild = -1;
	}
	for (i = n0; i < 2 * n0 - 1;i++) {
		min1 = min2 = 32767;//lnode �� rnodeΪ��СȨ�ص������ڵ�λ��
		lnode = rnode = -1;
		for (k = 0; k < i - 1;k++) {
			if (ht[k].parent==-1) {
				if (ht[k].weight<min1) {
					min2 = min1;
					rnode = lnode;
					min1 = ht[k].weight;
					lnode = k;
				}
				else if(ht[k].weight<min2)
				{
					min2 = ht[k].weight;
					rnode = k;
				}
				ht[lnode].parent = i;
				ht[i].weight = ht[lnode].weight + ht[rnode].weight;
				ht[i].lchild = lnode;
				ht[i].rchild = rnode;

			}
		}
	}
}

int main() {
	HTNode ht[4];
	CreatHT(ht,4);
}