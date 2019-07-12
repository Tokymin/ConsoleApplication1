#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int
typedef struct LNode {
	//循环单链表
	ElementType data;
	struct Lnode *next;
}LNode, *linkList;

typedef struct DNode {
	//循环双链表，
	ElementType data;
	struct Dnode *next;
	struct Dnode *pre;
}DNode, *DlinkList;

typedef struct {
	//静态链表
	ElementType data;
	int next;
}StaticNode[MaxSize];