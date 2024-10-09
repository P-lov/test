#define _CRT_SECURE_NO_WARNINGS
//#include "list.h"
//void test1() {
//	int i = 0;
//	SLTNode* first = NULL;
//	SListPushBack(&first, 1);
//	SListPushFront(&first, 100);
//	//SListPopFront(&first);
//	//SListPopBack(&first);
//	SLTNode* pos = SListFind(first, 100);
//	//SListInsert(&first, pos, 200);
//	SListEase(&first, pos);
//	//while (pos) {
//	//	printf("%d -> %p\n", i++, pos);
//	//	pos = SListFind(pos->next, 1);
//	//}
//	
//	
//	SListPrintf(first);
//}
//int main() {
//	test1();
//	return 0;
//}

#include "Dlist.h"
void Listtest() {
	LNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushFront(plist, 99);
	//ListPopBack(plist);
	//ListPopFront(plist);
	//LNode* Find = ListFind(plist, 99);
	//ListInsert(Find, 100);
	//ListErase(Find);

	ListPrint(plist);
	ListDestory(plist);
	plist = NULL;
}
int main() {
	Listtest();
	return 0;
}