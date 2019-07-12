#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//定义一个数据结构

typedef struct node {
	//二叉树的链式存储，顺式只适用于满二叉树或者完全，其他的太浪费存储空间了
	ElementType data;
	int ltag, rtag;//用于判定左右的指针是指向左右孩子节点还是存放线索的前驱或者后继
	struct node *lchild, *rchild;//左和右孩子指针
}TBTnode;

//中序线索化
TBTnode *pre;
void Thread(TBTnode *&p) {
	if (p!=NULL) {
		Thread(p->lchild);//左孩子，一直进
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

//中序二叉树查找第一个节点和任一节点
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
	//中序正向遍历二叉树
	TBTnode *p;
	for (p = first(root); p != NULL;p=next(root,p)) {
		printf("%c",p->data);
	}
	printf("\n");
}