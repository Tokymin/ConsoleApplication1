#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//����һ�����ݽṹ

typedef struct BiTnode {
	//����������ʽ�洢��˳ʽֻ��������������������ȫ��������̫�˷Ѵ洢�ռ���
	ElementType data;
	struct BiTnode *lchild, *rchild;//����Һ���ָ��
}BiTnode, *BiTree;

void visit(BiTree T) {
	printf("%d",T->data);
}

void preOrder(BiTree T) {
	//����������ݹ飩
	if (T!=NULL) {
		visit(T);
		preOrder(T->lchild);
		preOrder(T->rchild);
	}
}

void PostOrder(BiTree T) {
	//����������ݹ飩
	if (T != NULL) {
		preOrder(T->lchild);
		preOrder(T->rchild);
		visit(T);
	}
}

void InOrder(BiTree T) {
	//����������ݹ飩
	if (T != NULL) {
		preOrder(T->lchild);
		visit(T);
		preOrder(T->rchild);
	
	}
}


//�ǵݹ���� strsr:
typedef struct {
	//˳��ջ��
	ElementType data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack &S) {
	//��ʼ��ջ
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
//end: �ǵݹ����