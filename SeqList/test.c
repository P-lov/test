#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void SeqListtest1(void) {
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);

	SeqListprint(&sl);
	SeqListDestory(&sl);
}

void SeqListtest2(void) {
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	/*SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListprint(&sl);*/

	SeqListPushFront(&sl, 10);
	SeqListPushFront(&sl, 20);
	SeqListPushFront(&sl, 30);
	SeqListPushFront(&sl, 40);
	SeqListPushFront(&sl, 50);
	
	/*int a = SeqListFind(&sl);
	printf("%d\n", a);*/
	SeqListInsert(&sl, 2, 100);
	SeqListprint(&sl);

	SeqListPopFront(&sl);
	SeqListPopFront(&sl);
	SeqListprint(&sl);

	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListprint(&sl);

	//SeqListErase(&sl, 1);
	//SeqListprint(&sl);


	SeqListDestory(&sl);
}

int main() {

	//SeqListtest1();
	SeqListtest2();
	return 0;
}
