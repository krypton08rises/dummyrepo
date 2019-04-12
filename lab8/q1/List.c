#include "List.h"
List createList(Student studarray,int arraysize)
	{
		List l = (struct List)(malloc(sizeof(struct List)));
		
		for(int i=0;i<arraysize;i++)
			{
				Node temp = (struct Node)(malloc(sizeof(struct Node)));
				temp->record = studarray+i;
				temp->next = NULL;
				insertInOrder(l,temp);
		}
			return l;
}
void insertInOrder(List *l,Node *n)
	{
				if(l->count==0)
					{
						l->first=n;
						l->last=n;
						(l->count)++;
						break;
				}	
	
		Node *temp=(struct Node)(malloc(sizeof(struct Node)));
		l->first=temp;
	
		while(temp!=NULL)
			{
				if((temp->marks<n->marks) && ((temp->next)->marks>n->marks) || (temp->next==NULL))
					{
						if(temp->next==NULL)
							{
								n=l->last;
								temp->next=n;
								n->next=NULL;
								l->count++;
								break;
						}
						n->next = temp->next;
						temp->next =n;
						(l->count)++;
						break;
				}
				temp=temp->next;
		}
}

