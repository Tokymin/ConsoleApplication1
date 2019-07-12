#include "stdafx.h"
#include "math.h"
#include <stdlib.h>
#define MaxV 50//最大顶点数
#define ElementType char
typedef int InfoType;//这样和上句话是一样的吗？

typedef struct ANode{//边的节点结构类型
	int adjvex;//边的终点位置
	struct ANode *nextarc;//指向下一条边的指针
	ElementType info;//节点信息

}ArcNode;

typedef struct Vnode{
	//邻接表表头节点
	ElementType data;
	ArcNode *firstarc;
}VNode;
typedef VNode AdjList[MaxV];
typedef struct {
	AdjList adjlist;//邻接表
	int n, e;//顶点数和边数
}AGraph;//声明图的邻接表类型

//生成图的邻接表算法
void createAdj(AGraph *&G,int A[][MaxV],int n) {
	//由数组A[n][n]生成邻接表G
	int i, j;
	ArcNode *p;
	G = (AGraph *)malloc(sizeof(AGraph));
	G->n = n;
	G->e = 0;
	for (i = 0; i < n;i++) {
		G->adjlist[i].firstarc = NULL;
	}
	for (i = 0; i < n;i++) {
		for (j = n - 1; j >= 0;j--) {
			if (A[i][j]!=0) {
				p=(ArcNode *)malloc(sizeof(ArcNode));
				p->adjvex = j;
				p->nextarc = G->adjlist[i].firstarc;
				G->adjlist[i].firstarc = p;
				G->e++;
			
			}
		}
	}
}