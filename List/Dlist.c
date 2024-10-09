#define _CRT_SECURE_NO_WARNINGS
#include "Dlist.h"

LNode* ListInit() {

	LNode* phead = (LNode*)malloc(sizeof(LNode));
	phead->next = phead;
	phead->prev = phead;

	return phead;
}
void ListPushBack(LNode* phead, LTDateType x) {

	assert(phead);
	//LNode* newnode = (LNode*)malloc(sizeof(LNode));
	//newnode->val = x;
	//newnode->prev = phead->prev;
	//newnode->next = phead;
	//phead->prev->next = newnode;
	//phead->prev = newnode;

	ListInsert(phead, x);

}
void ListPopBack(LNode* phead) {
	assert(phead);
	assert(phead->next != phead);//±ÜÃâÉ¾³ýÉÚ±øÍ·
	//LNode* tail = phead->prev;
	//tail->prev->next = phead;
	//phead->prev = tail->prev;
	//free(tail);
	ListErase(phead->prev);
}

void ListPushFront(LNode* phead, LTDateType x) {
	assert(phead);
	//LNode* newnode = (LNode*)malloc(sizeof(LNode));
	//newnode->val = x;
	//newnode->prev = phead;
	//newnode->next = phead->next;
	//phead->next->prev = newnode;
	//phead->next = newnode;

	ListInsert(phead->next, x);
}
void ListPopFront(LNode* phead) {
	assert(phead);
	assert(phead->next != phead);

	//LNode* tag = phead->next;
	//phead->next = tag->next;	
	//tag->next->prev = phead;
	//free(tag);

	ListErase(phead->next);
}

LNode* ListFind(LNode* phead, LTDateType x) {
	assert(phead);
	LNode* cur = phead->next;
	while (cur != phead) {
		if (cur->val == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}

//ÔÚposÖ®Ç°²åÈë
void ListInsert(LNode* pos, LTDateType x) {

	assert(pos);
	LNode* tag = pos->prev;
	LNode* newnode = (LNode*)malloc(sizeof(LNode));
	newnode->val = x;
	tag->next = newnode;
	newnode->prev = tag;
	newnode->next = pos;
	pos->prev = newnode;

}

//É¾³ýposÎ»ÖÃ
void ListErase(LNode* pos) {
	
	assert(pos);
	LNode* font = pos->prev;
	LNode* back = pos->next;
	font->next = back;
	back->prev = font;
	free(pos);
	
}


void ListPrint(LNode* phead) {

	assert(phead);
	LNode* cur = phead->next;
	while(cur != phead) {
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");

}

void ListDestory(LNode* phead) {
	assert(phead);
	LNode* cur = phead->next;
	while (cur != phead) {

		LNode* next = cur->next;
		free(cur);
		cur = next;
	}
}