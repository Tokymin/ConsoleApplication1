#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//定义一个数据结构

typedef struct  {
	//队列的顺序存储
	ElementType data[MaxSize];
	int front, rear;//队头和队尾指针
}SqQueue;
//操作：
//初始状态（队空）：Q.front == Q.rear = 0;
//进队操作：队不满时，先送值到队尾元素，再将队尾指针rear加1；
//出队操作：对不空时，先取队头元素值，再将队头指针加1；
