// KReverse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "KReverse.h"

void KReverse(ListNode *Head, int k)
{
	if (NULL == Head || k < 2)
		return;
}

void printList(ListNode *Head)
{
	ListNode *p = Head;
	while (NULL != p)
	{
		printf("%d ", p->value);
		p = p->next;
	}
	printf("\n");
}

void creatList(ListNode *Head, int n)
{
	int i;
	ListNode *p = NULL;
	for (i = 0; i < n; i++)
	{
		ListNode *node = new ListNode();
		node->value = rand()%n;
		node->next = NULL;
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

