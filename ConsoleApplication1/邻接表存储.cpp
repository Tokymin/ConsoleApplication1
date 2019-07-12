#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxV 50//��󶥵���
#define ElementType char
typedef int InfoType;//�������Ͼ仰��һ������

typedef struct ANode{//�ߵĽڵ�ṹ����
	int adjvex;//�ߵ��յ�λ��
	struct ANode *nextarc;//ָ����һ���ߵ�ָ��
	ElementType info;//�ڵ���Ϣ

}ArcNode;

typedef struct Vnode{
	//�ڽӱ��ͷ�ڵ�
	ElementType data;
	ArcNode *firstarc;
}VNode;
typedef VNode AdjList[MaxV];
typedef struct {
	AdjList adjlist;//�ڽӱ�
	int n, e;//�������ͱ���
}AGraph;//����ͼ���ڽӱ�����

//����ͼ���ڽӱ��㷨
void createAdj(AGraph *&G,int A[][MaxV],int n) {
	//������A[n][n]�����ڽӱ�G
	int i, j;
	ArcNode *p;
	G = (AGraph *)malloc(sizeof(AGraph));
	G->n = n;
	G->e = 0;
	for (i = 0; i < n;i++) {
		G->adjlist[i].firstarc = NULL;
	}
	for (i = 0; i < n;i++) {
		for (j = n - 1; j >= 0;j--) {
			if (A[i][j]!=0) {
				p=(ArcNode *)malloc(sizeof(ArcNode));
				p->adjvex = j;
				p->nextarc = G->adjlist[i].firstarc;
				G->adjlist[i].firstarc = p;
				G->e++;
			
			}
		}
	}
}