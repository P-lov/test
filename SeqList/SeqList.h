#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#define N 1000
typedef int SLtype;

typedef struct SqList {
	SLtype* a;
	int size;
	int capacity;
}SL;


void SeqListInit(SL* p);//初始化
void SeqListprint(SL* p);//打印
void SeqListPushBack(SL* p, SLtype x);//尾插
void SeqListPushFront(SL* p, SLtype x);//头插
void SeqListPopBack(SL* p);//尾删
void SeqListPopFront(SL* p);//头删
void SeqListDestory(SL* p);//释放内存

int SeqListFind(SL* p);//找到x的下标 未找到返回-1
void SeqListInsert(SL* p, SLtype pos, SLtype x);//指定位置插入x
void SeqListErase(SL* p, SLtype pos);//指定位置删除
//menu