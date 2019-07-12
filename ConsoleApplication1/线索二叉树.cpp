#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//����һ�����ݽṹ

typedef struct node {
	//����������ʽ�洢��˳ʽֻ��������������������ȫ��������̫�˷Ѵ洢�ռ���
	ElementType data;
	int ltag, rtag;//�����ж����ҵ�ָ����ָ�����Һ��ӽڵ㻹�Ǵ��������ǰ�����ߺ��
	struct node *lchild, *rchild;//����Һ���ָ��
}TBTnode;

//����������
TBTnode *pre;
void Thread(TBTnode *&p) {
	if (p!=NULL) {
		Thread(p->lchild);//���ӣ�һֱ��
		if (p->lchild==NULL) {
			p->lchild=pre;
			p->ltag = 1;
		}
		else
		{
			p->ltag = 0;
		}if (pre->rchild==NULL) {
			pre->rchild = p;
			pre->rtag = 1;
		}
		else pre->rtag = 0;
		pre = p;
		Thread(p->rchild);
	}
}

TBTnode *CreaThread(TBTnode *b) {
	TBTnode *root;
	root = (TBTnode *)malloc(sizeof(TBTnode));
	root->ltag = 0;
	root->rtag = 1;
	root->rchild = b;
	if (b = NULL)
		root->lchild = root;
	else
	{
		root->lchild = b;
		pre = root;
		Thread(b);
		pre->rchild = root;
		pre->rtag = 1;
		root->rchild = pre;
	}
	return root;
}

//������������ҵ�һ���ڵ����һ�ڵ�
TBTnode *first(TBTnode *root){
	while (root->ltag==0) {
		root = root->lchild;
		return root;
	}

	
}
TBTnode *next(TBTnode *root, TBTnode *q) {
	TBTnode *p = q->lchild, *r;
	if (q->rtag==0) {
		while (p->ltag == 0)
			p = p->lchild;
	}
	r = p;
	if (r == root)
		return NULL;
	else
	{
		return r;
	}

}
void forward(TBTnode *root) {
	//�����������������
	TBTnode *p;
	for (p = first(root); p != NULL;p=next(root,p)) {
		printf("%c",p->data);
	}
	printf("\n");
}