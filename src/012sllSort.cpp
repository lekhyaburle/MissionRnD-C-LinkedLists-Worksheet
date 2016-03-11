/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head)
{
	int x;
	struct node  *t1, *t2,*p;
	
	p = head;
	t1 = head;
	t2 = head->next;
	while (p != NULL)
	{
		t1 = head;
		t2 = head->next;
		while (t2 != NULL)
		{

			if (t1->data > t2->data)
			{

				x = t2->data;
				t2->data = t1->data;
				t1->data = x;
			}

			t2 = t2->next;
			t1 = t1->next;
		}p = p->next;
	}
	}




