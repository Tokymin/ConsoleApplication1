#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 30
#define ElementType int

typedef struct DNode {
	//˫����
	ElementType data;
	struct Dnode *next;
	struct Dnode *pre;
}DNode, *DlinkList;