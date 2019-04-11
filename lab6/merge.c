#include<stdio.h>
#include<stdlib.h>
#include "merge.h"

void merge(struct element *ls1,int sz1,struct element *ls2,int sz2,struct element *ls){
	int i = 0;	
	int j = 0;
	int k = 0;
	while(i!=sz1 || j!=sz2){
				if(ls1[i].cg<ls2[j].cg){
					ls[k]=ls1[i];
					i++;
				}
				else {
					ls[k] = ls2[j];
					j++;	
			}
				k++;
	}
	
	if(i!=sz1){
			while(i!=sz2){
					ls[k] = ls1[i];
					k++;
					i++;
			}
	}

	if(j!=sz2){
			while(j!=sz2){
					ls[k] = ls2[j];
					k++;
					j++;
			}
	}
}

void recms(struct element *str,int a,int r,struct element *output){
	
		if(a>=r)
			return;
		int q = (a+r)/2;
		output = str;
		recms(str,a,q,output);
		recms(str,q+1,r,&output[q-a+1]);
		merge(output,q-a+1,&output[q-a+1],q,output);
	}
/*
void iterms(struct element *str,int p,int r,struct element *output){
	struct element *temp = malloc((r+1)*sizeof(struct element));
	int i = 0;
	while()
		merge(&str,p,&temp[])
*/
