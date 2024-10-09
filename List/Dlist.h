#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int LTDateType;

typedef struct ListNode {
	LTDateType val;
	struct ListNode* next;
	struct ListNode* prev;
}LNode;

// 带头双向循环链表
LNode* ListInit();
void ListPushBack(LNode* phead, LTDateType x);
void ListPopBack(LNode* phead);

void ListPushFront(LNode* phead, LTDateType x);
void ListPopFront(LNode* phead);

LNode* ListFind(LNode* phead, LTDateType x);

void ListInsert(LNode* pos, LTDateType x);
void ListErase(LNode* pos);

void ListPrint(LNode* phead);
void ListDestory(LNode* phead);