#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//����һ�����ݽṹ

typedef struct {
	//˳��ջ��
	ElementType data[MaxSize];
	int top;
}SqStack;

//void InitStack(SqStack &S) {
//	//��ʼ��ջ
//	S.top = -1;
//}
