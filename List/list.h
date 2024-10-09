#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLTDateType;

typedef struct SListNode {
	SLTDateType data;
	struct SListNode* next;
}SLTNode;

void SListPrintf(SLTNode* p);//¥Ú”°¡¥±Ì
void SListPushBack(SLTNode** p, SLTDateType x);//Œ≤≤Â
void SListPushFront(SLTNode** p, SLTDateType x);//Õ∑≤Â

void SListPopBack(SLTNode** p);
void SListPopFront(SLTNode** p);

SLTNode* SListFind(SLTNode* p, SLTDateType x);
void SListInsert(SLTNode** p, SLTNode* pos, SLTDateType x);
void SListEase(SLTNode** p, SLTNode* pos);
void SListDestory(SLTNode** p);