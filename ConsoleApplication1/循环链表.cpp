#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int
typedef struct LNode {
	//ѭ��������
	ElementType data;
	struct Lnode *next;
}LNode, *linkList;

typedef struct DNode {
	//ѭ��˫����
	ElementType data;
	struct Dnode *next;
	struct Dnode *pre;
}DNode, *DlinkList;

typedef struct {
	//��̬����
	ElementType data;
	int next;
}StaticNode[MaxSize];