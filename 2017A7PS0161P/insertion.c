#include "node.h"
#include<stdio.h>

extern int * Arr[N];
extern int Num_Elements[N];

void InsertionSort_GM(int arr[], int n) 
{
	int i;
	int j=1;
	int key;
	while(j<n){
		key=arr[j];
		i=j-1;
		while(i>0 && arr[i]>key){	
				arr[i+1]=arr[i];	
				--i;
				a[i+1]=key;
			}
		} 
 
} 

void InsertionSort_Arr()
{	
	int i=0;
	int size;
	while(i!=50){
			
			size = (Arr[i+1]-Arr[i])/sizeof(int);	
			InsertionSort_GM(*Arr[i],size);
			++i;
		}
}



