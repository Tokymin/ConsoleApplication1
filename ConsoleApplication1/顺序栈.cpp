#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//定义一个数据结构

typedef struct {
	//顺序栈表
	ElementType data[MaxSize];
	int top;
}SqStack;

//void InitStack(SqStack &S) {
//	//初始化栈
//	S.top = -1;
//}
