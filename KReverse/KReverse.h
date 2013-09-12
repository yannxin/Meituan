
#pragma once

struct ListNode
{
	int value;
	struct ListNode *next;
};

void KReverse(ListNode *Head, int k);