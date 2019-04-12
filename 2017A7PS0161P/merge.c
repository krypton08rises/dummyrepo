#include<stdio.h>
#include"node.h"

extern int * Arr[N];
extern int Num_Elements[N];

void Merge_GM(int *Ls1, int sz1, int * Ls2, int sz2, int* Ls)
{
	int i=0;
	int j=0;
	while(i<sz1 || j<sz2){
		if(IsLower_GM(*Ls1,*Ls2)==1){
				*Ls = *Ls1;
				i++;
				Ls1++;
			}
		else {
			*Ls = *Ls2;
	  		j++;
			Ls2++;
		}
			Ls++;
		
		if(i!=sz1){
			while(i!=sz1){
					*Ls = *Ls1;
					i++;
					Ls++;
					Ls1++;		
				}
}
		if(j!=sz2){	
			while(j!=sz2){
					*Ls = *Ls2;
					j++;
					Ls++;
					Ls2++;
				}
}		

void Merge_Arr()
{
	int i=0;
	int size = 50;
	int size1;
	int size2;
	int *arr[50];
	while(i!=size){
	int *arr1 = Arr[i];
	int *arr2 = Arr[i+1];
	Merge(*arr1,25,arr2,25,arr[i]);
	i+=2;
	}
	i = 0;
	while(!size){
		i = 0;
		if(size%2==0){
			while(i!=size-2){
			arr1 = arr[i];
			arr2 = arr[i+1];
			size1 = (arr[i+1]-arr[i])/sizeof(int);
			size2 = (arr[i+2]-arr[i+1])/sizeof(int);
			Merge_GM(*arr1,size1,*arr2,size2,arr[i]);
			size/=2;
			i+=2
				}
		else {
			while(i!=size-3){
			arr1 = arr[i];
			arr2 = arr[i+1];
			size1 = (arr[i+1]-arr[i])/sizeof(int);
			size1 = (arr[i+2]-arr[i+1])/sizeof(int);
			Merge_GM(*arr1,size1,*arr2,size2,arr[i])
			size/=2;
			size++;
			i+=2
				}
			//	Merge_GM(arr1,size1,arr2,size2,arr[])
			}
		}
	}
}	
