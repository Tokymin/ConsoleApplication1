
#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 30
#define Element int

//定义一个数据结构

typedef struct LNode{
	//单链表
	Element data;
	struct Lnode *next;
}LNode,*linkList;

typedef struct LNode {
	//双链表
	Element data;
	struct Lnode *next;
	struct Lnode *pre;
}LNode, *linkList;