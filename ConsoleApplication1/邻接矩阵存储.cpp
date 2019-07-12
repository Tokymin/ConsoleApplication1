#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxV 50//最大顶点数
#define ElementType char

typedef struct {
	int no;
	ElementType info;

}VertexType;

typedef struct {
	int edges[MaxV][MaxV];
	int n, e;
	VertexType vexs[MaxV];//结构体中有结构体
}MGraph;