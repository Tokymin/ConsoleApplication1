#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//定义一个数据结构

typedef struct BiTnode {
	//二叉树的链式存储，顺式只适用于满二叉树或者完全，其他的太浪费存储空间了
	ElementType data;
	struct BiTnode *lchild,*rchild;//左和右孩子指针
}BiTnode,*BiTree;