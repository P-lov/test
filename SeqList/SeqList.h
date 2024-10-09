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


void SeqListInit(SL* p);//��ʼ��
void SeqListprint(SL* p);//��ӡ
void SeqListPushBack(SL* p, SLtype x);//β��
void SeqListPushFront(SL* p, SLtype x);//ͷ��
void SeqListPopBack(SL* p);//βɾ
void SeqListPopFront(SL* p);//ͷɾ
void SeqListDestory(SL* p);//�ͷ��ڴ�

int SeqListFind(SL* p);//�ҵ�x���±� δ�ҵ�����-1
void SeqListInsert(SL* p, SLtype pos, SLtype x);//ָ��λ�ò���x
void SeqListErase(SL* p, SLtype pos);//ָ��λ��ɾ��
//menu