#include<stdio.h>
#include<stdlib.h>

#define taskid int 
#define priority int 


struct task {
		taskid tid;
		priority pr;
}element;

struct queue 
		{
			int count ;
			struct node * first;
			struct node * last;

	};

struct node
		{
			struct element *ele;
			struct node *next;
	};

struct queue *newq()
	{		
		struct queue *a = (struct queue*)malloc(sizeof(struct queue));
		a->first = NULL;	
		a->last = NULL;
		a->count = 0;
			return a;
}

int isEmpty(struct queue *q)
	{
		if(q->count>0)
			return 0;
				else 
					return 1;
}

struct queue *delq(struct queue *q)
	{	
		if(isEmpty(q) == 0)
			{	printf("No elements in queue");
					return q;
		}
		q->first = (q->first)->next;
		q->count--;
			return q;
}

struct element *front(struct queue *q)
	{
		return ((q->first)->ele);
}

struct queue *addq(struct queue *q ,struct element *ele)
	{
		struct node *temp = q->first;
		struct node *n = (struct node*)malloc(sizeof(struct node));
		 	n->ele = ele;	
			n->next = NULL;
			if(isEmpty(q)==0)
					q->first = n;		
				else
					{
						while(temp->next!=NULL)
							temp=temp->next;			
				}
			q->count++;
			q->last=n;
			return q;
}

int lengthq(struct queue *q)
		{
			return q->count;
	}

/*void printq(struct queue *q)
	{
		struct node *ptr = q->first;

		while(ptr!=NULL)
			{
				printf("taskid is :%d\tpriority is :%d\n,",(ptr->ele)->tid,(ptr->ele)->pr);
				ptr = ptr->next;
		}
	}
*/
