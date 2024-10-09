#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLTDateType;

typedef struct SListNode {
	SLTDateType data;
	struct SListNode* next;
}SLTNode;

void SListPrintf(SLTNode* p);//��ӡ����
void SListPushBack(SLTNode** p, SLTDateType x);//β��
void SListPushFront(SLTNode** p, SLTDateType x);//ͷ��

void SListPopBack(SLTNode** p);
void SListPopFront(SLTNode** p);

SLTNode* SListFind(SLTNode* p, SLTDateType x);
void SListInsert(SLTNode** p, SLTNode* pos, SLTDateType x);
void SListEase(SLTNode** p, SLTNode* pos);
void SListDestory(SLTNode** p);