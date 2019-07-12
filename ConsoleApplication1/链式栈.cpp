#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//定义一个数据结构

typedef struct Linknode{
	//链式栈
	ElementType data[MaxSize];
	struct Linknode *next;
}*LiStack;

