#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxSize 50
#define ElementType int

//����һ�����ݽṹ

typedef struct Linknode{
	//��ʽջ
	ElementType data[MaxSize];
	struct Linknode *next;
}*LiStack;

