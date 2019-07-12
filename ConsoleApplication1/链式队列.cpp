#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//����һ�����ݽṹ

typedef struct tagLnode{
	//���е�˳��洢
	ElementType data;
	struct tagLnode *next;//��ͷ�Ͷ�βָ��
}LinkNode;
typedef struct {
	LinkNode *front, *rear;
}LinkQueue;


void InitQueue(LinkQueue &Q) {
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));//����ͷ���
	Q.front->next = NULL;
}

bool isEmpty(LinkQueue Q) {
	if (Q.front==Q.rear) {
		return true;
	}
	else
	{
		return false;
	}
}
void EnQueue(LinkQueue &Q, ElementType x) {
	//���
	LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;
	Q.rear->next = s;
	Q.rear = s;
}
bool DeQueue(LinkQueue &Q, ElementType &x) {
	if (Q.front==Q.rear) {
		return false;//��
	}
	LinkNode *p = Q.front->next;
	x = p->data;
	Q.front->next = p->next;
	if (Q.rear==p) {
		Q.rear = Q.front;
	}
	free(p);
	return true;
}
int mainLinkQueue() {
	LinkQueue Q;
	InitQueue(Q);
	EnQueue(Q, 1);
	EnQueue(Q, 2);
	EnQueue(Q, 3);
	bool result=DeQueue(Q,Q.front->next->next->data);
	printf("%d", result);
	return 1;
}