#include<stdio.h>
#include "que.h"

int main()
	{
		struct queue *q = newq();
		int p = isEmpty(q);
		printf("isempty = %d",p);
		printq(q);
		addq(q,5);
		addq(q,6);
		printq(q);
		addq(q,7);
		printq(q);		
		delq(q);
		printq(q);
		printf("\nlength of queue:%d",lengthq(q));
}
