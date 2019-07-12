#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//定义一个数据结构

typedef struct BiTnode {
	//二叉树的链式存储，顺式只适用于满二叉树或者完全，其他的太浪费存储空间了
	ElementType data;
	struct BiTnode *lchild, *rchild;//左和右孩子指针
}BiTnode, *BiTree;

void visit(BiTree T) {
	printf("%d",T->data);
}

void preOrder(BiTree T) {
	//先序遍历（递归）
	if (T!=NULL) {
		visit(T);
		preOrder(T->lchild);
		preOrder(T->rchild);
	}
}

void PostOrder(BiTree T) {
	//后序遍历（递归）
	if (T != NULL) {
		preOrder(T->lchild);
		preOrder(T->rchild);
		visit(T);
	}
}

void InOrder(BiTree T) {
	//中序遍历（递归）
	if (T != NULL) {
		preOrder(T->lchild);
		visit(T);
		preOrder(T->rchild);
	
	}
}


//非递归遍历 strsr:
typedef struct {
	//顺序栈表
	ElementType data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack &S) {
	//初始化栈
	S.top = -1;
}
bool isEmpty(SqStack S) {
	if (S.top=-1) {
		return true;
	}
}
void Push(SqStack S, BiTree p) {
	
}
void Pop(SqStack S, BiTree p) {

}

void Inorder2(BiTree T) {
	SqStack S;
	InitStack(S);
	BiTree p = T;
	while (p||!isEmpty(S))
	{
		if (p) {
			Push(S,p);
			p = p->lchild;

		}
		else
		{
			Pop(S, p);
			visit(p);
		}
	}
}
//end: 非递归遍历