#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void SeqListInit(SL* p) {
	p->a = NULL;
	p->capacity = 0;
	p->size = 0;
}

void SeqListprint(SL* p) {
	for (int i = 0; i < p->size ; i++) {
		printf("%d ", p->a[i]);
	}
	printf("\n");
}

void SeqListrealloc(SL* p) {
	if (p->capacity == p->size) {
		int newcapacity = p->capacity == 0 ? 4 : p->capacity * 2;
		SLtype* tep = (SLtype*)realloc(p->a, newcapacity * sizeof(SLtype));
		if (tep == NULL) {
			printf("realloc failed\n");
			exit(-1);
		}
		p->a = tep;
		p->capacity = newcapacity;
	}
}

void SeqListPushBack(SL* p, SLtype x) {
	//SeqListrealloc(p);
	//p->a[p->size] = x;
	//p->size++;
	SeqListInsert(p, p->size, x);

}


void SeqListPushFront(SL* p, SLtype x) {

	/*SeqListrealloc(p);

	int end = p->size - 1;
	while (end >= 0) {
		p->a[end + 1] = p->a[end];
		end--;
	}
	p->a[0] = x;
	p->size++;*/
	SeqListInsert(p, 1, x);
}


void SeqListPopBack(SL* p) {
	//if(p->size > 0)
	//	p->size--;
	SeqListErase(p, p->size);
}

void SeqListPopFront(SL* p) {
	//for (int i = 0; i < p->size - 1; i++) {
	//	p->a[i] = p->a[i + 1];
	//}
	//p->size--;
	SeqListErase(p, 1);
}


void SeqListDestory(SL* p) {

	free(p->a);
	p->a = NULL;
}

int SeqListFind(SL* p){
	int x = 0;
	printf("which one you find > ");
	scanf("%d", &x);
	printf("you find is > ");
	for (int i = 0; i < p->size; i++) {
		if (p->a[i] == x)
			return i + 1;
	}
	return -1;
	
}

void SeqListInsert(SL* p, SLtype pos, SLtype x) {//指定位置插入x  // 1 2 3 0
	if (pos <= p->size + 1 && pos > 0) {
		SeqListrealloc(p);
		for (int i = p->size; i >= pos; i--) {
			p->a[i] = p->a[i - 1];
		}
		p->a[pos - 1] = x;
		p->size++;
	}

	
}
void SeqListErase(SL* p, SLtype pos) {//指定位置删除

	assert(pos > 0 && pos <= p->size);
	int begin = pos;
	while (begin <= p->size) {
		p->a[begin - 1] = p->a[begin];
		begin++;
	}
	p->size--;
}