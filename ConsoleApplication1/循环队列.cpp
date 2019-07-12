#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//定义一个数据结构

typedef struct {
	//队列的顺序存储
	ElementType data[MaxSize];
	int front, rear;//队头和队尾指针
}SqQueue;
//操作：
//初始状态（队空）：Q.front == Q.rear = 0;
//队首指针进1：Q.front=(Q.front+1)%MaxSize
//队尾指针进1：Q.rear = (Q.rear + 1) % MaxSize
//队列长度：(Q.rear+ MaxSize- Q.front) % MaxSize
//进队操作：队不满时，先送值到队尾元素，再将队尾指针rear顺时针方向进1；
//出队操作：队不空时，先取队头元素值，再将队头指针顺时针方向加1；

//void InitQueue(SqQueue &Q) {
//	Q.rear = Q.front = 0;
//
//}

//bool isEmpty(SqQueue &Q) {
//	if (Q.rear == Q.front) {
//		return true;
//	}
//	return false;
//}
/*进队*/
bool EnQueue(SqQueue &Q,ElementType x) {
	if ((Q.rear+1)&MaxSize==Q.front)//队满
		return false;
	Q.data[Q.rear] = x;
  	Q.rear = (Q.rear + 1) % MaxSize;//队尾指针加1取模
	return true;
}
/*出队*/
bool DeQueue(SqQueue &Q, ElementType &x) {
	if (Q.rear  == Q.front)//队空
		return false;
	x = Q.data[Q.front] ;
	Q.front = (Q.front + 1) % MaxSize;//队尾指针加1取模
	return true;
}

