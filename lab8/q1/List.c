#include "List.h"
List createList(Student studarray,int arraysize)
	{
		List l = (List)myalloc(sizeof(List));
		
		for(int i=0;i<arraysize;i++)
			{
				Node temp = (Node)(malloc(sizeof(Node)));
				temp->record = studarray+i;
				temp->next = NULL;
				insertInOrder(l,temp);
		}
			return l;
}
void insertInOrder(List l,Node n)
	{
				if(l->count==0)
					{
						l->first=n;
						l->last=n;
						(l->count)++;
						return;
				}	
	
		Node temp=(Node)(malloc(sizeof(Node)));
		l->first=temp;
	
		while(temp!=NULL)
			{
				if(((temp->record)->marks<((n->record)->marks)) && (((temp->next)->record)->marks>((n->record)->marks)) || (temp->next==NULL))
					{
						if(temp->next==NULL)
							{
								n=l->last;
								temp->next=n;
								n->next=NULL;
								l->count++;
								return;
						}
						n->next = temp->next;
						temp->next =n;
						(l->count)++;
						return;
				}
				temp=temp->next;
		}
}

List insertionSort(List l)
	{
		List temp = (List)(malloc(sizeof(List)));
		Node n = (Node)(malloc(sizeof(Node)));
		l->first=n;
		while(n!=NULL)
			{
				insertInOrder(temp,n);
				n=n->next;
		}
		return temp;
}	

double measureSortingTime(List list)
	{
		clock_t start,stop;
		start=clock();
		insertionSort(list);
		stop=clock();
		double ms = (double)stop-(double)start;
		printf("%lf",ms);
}
void myfree()
	{
		int size_del=*(int *)(ptr-sizeof(int));
		globalCounter=globalCounter-size_del;
		ptr=ptr-sizeof(int);
		free(ptr);
}
void * myalloc(int size)
	{
		void *ptr=malloc(size+sizeof(int));
		*(int *)ptr=size;
		globalCounter=globalCounter+size;
		return ptr+sizeof(int);
}


