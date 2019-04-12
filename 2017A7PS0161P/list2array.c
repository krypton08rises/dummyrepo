#include"node.h"
#include<stdio.h>
#include<stdlib.h>
extern int *Arr[N];
extern int Num_Elements[N];
void ConvertListstoArray(Locality *start)
{
	Locality *start = ReadFileintolists("node.h");
	Member *node;
	int i = 0;
	while(i!=50){
			node = start->first;
			while(node->next!=NULL){
				*arr[i]=node->id;
				arr[i]++;
				node = node->next;
				}
			*arr[i]=node->id;
			start = start->next;
			++i;
 		}
}
