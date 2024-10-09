#define _CRT_SECURE_NO_WARNINGS
#include "list.h"

void SListPrintf(SLTNode* p) {
	SLTNode* cur = p;
	while (cur != NULL) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

void SListPushBack(SLTNode** p, SLTDateType x) {
	SLTNode* newsite = (SLTNode*)malloc(sizeof(SLTNode));
	newsite->data = x;
	newsite->next = NULL;

	if (*p == NULL) {
		*p = newsite;
	}
	else {
		SLTNode* cur = *p;
		while (cur->next != NULL) {
			cur = cur->next;
		}
		cur->next = newsite;
		//while ((*p)->next != NULL) {
		//	(*p) = (*p)->next;
		//}
		//(*p)->next = newsite;
		
	}

}

void SListPushFront(SLTNode** p, SLTDateType x) {
	SLTNode* newsite = (SLTNode*)malloc(sizeof(SLTNode));
	newsite->data = x;
	newsite->next = *p;

	*p = newsite;
}

void SListPopBack(SLTNode** p) {
	assert(*p != NULL);
	if ((*p)->next == NULL) {
		free(*p);
		*p = NULL;
	}
	else {
		SLTNode* cur = *p;
		while (cur->next->next) {
			cur = cur->next;
		}
		free(cur->next);
		cur->next = NULL;
	}
	
}
void SListPopFront(SLTNode** p) {
	assert(*p != NULL);
	SLTNode* next = (*p)->next;
	free(*p);
	*p = next;
}
SLTNode* SListFind(SLTNode* p, SLTDateType x) {
	SLTNode* cur = p;
	while (cur) {
		if (cur->data == x)
			return cur;
		else
			cur = cur->next;
	}
	return NULL;
}

void SListInsert(SLTNode** p, SLTNode* pos, SLTDateType x) {
	SLTNode* newsite = (SLTNode*)malloc(sizeof(SLTNode));
	newsite->data = x;
	newsite->next = pos;

	SLTNode* cur = *p;
	if (cur == pos)
		*p = newsite;
	else {
		while (cur->next != pos) {
			cur = cur->next;
		}
		cur->next = newsite;
	}
}

void SListInsertAfter(SLTNode* pos, SLTDateType x) {
	SLTNode* newsite = (SLTNode*)malloc(sizeof(SLTNode));
	newsite->data = x;
	newsite->next = pos->next;

	pos->next = newsite;
}

void SListEase(SLTNode** p, SLTNode* pos) {

	if (*p == pos) {
		SListPopFront(p);
	}
	else {
		SLTNode* cur = *p;
		//SLTNode* prev = NULL;
		while (cur->next != pos) {
			//prev = cur;
			cur = cur->next;
		}
		cur->next = pos->next;
		free(pos);
	}
}

void SListEaseAfter(SLTNode* pos) {
	SLTNode* cur = pos->next;
	pos->next = cur->next;
	free(cur);
}

void SListDestory(SLTNode** p) {
	assert(p);
	SLTNode* cur = *p;
	while (cur) {
		SLTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*p = NULL;

}