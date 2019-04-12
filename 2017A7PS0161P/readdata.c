/*2017A7PS0161P		KUSHAGRA RAINA*/

#include"node.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

Locality * ReadFileintoLists(char *filename)
{
	char line[100];
	Locality *list;
	Locality *temp = list;
	Member *node;
	int m,n;
	int i=0;
	FILE *fptr = fopen("node.h","r");
	while(i!=50){
		fgets(line,100,fptr);
		char *token=strtok(line,",");
		m = atof(token);
		int j=0;
		node = temp->first;
		temp->count = 0;
			while(j<m){
					
					char *num=strtok(line,",");
					n = atof(num);
					node->id = n;
					node = node->next;
					++j;
					temp->count++;				
		}
			temp = temp->next;
			++i;
			
}
	return list;

}

void PrintLists (Locality *start)
{		
		Member *node;
		while(start->next!=NULL){
			node = start->first;
			while(node->next!=NULL){
				printf("%d",node->id);
				node = node->next;
				}
				printf("%d",node->id);
				start = start->next;
			}
	node = start->first;
			while(node->next!=NULL){
				printf("%d",node->id);
				node = node->next;
				}
				printf("%d",node->id);
}
