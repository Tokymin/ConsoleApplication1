#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//����һ�����ݽṹ

typedef struct BiTnode {
	//����������ʽ�洢��˳ʽֻ��������������������ȫ��������̫�˷Ѵ洢�ռ���
	ElementType data;
	struct BiTnode *lchild,*rchild;//����Һ���ָ��
}BiTnode,*BiTree;