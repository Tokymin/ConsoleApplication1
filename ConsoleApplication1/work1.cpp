
#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 30
#define Element int

//����һ�����ݽṹ

typedef struct LNode{
	//������
	Element data;
	struct Lnode *next;
}LNode,*linkList;

typedef struct LNode {
	//˫����
	Element data;
	struct Lnode *next;
	struct Lnode *pre;
}LNode, *linkList;