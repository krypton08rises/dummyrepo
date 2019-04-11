#include<stdio.h>
#include<stdlib.h>


int *myalloc(int n, int m);
int totmem = 0;
void myfree(int *ptr,int n);
int main()
	{	
		int n,*ptr;
		while(1)
			{	
				printf("/nEnter the number of elements req:");
					scanf("%d",&n);
					ptr = myalloc(n,totmem);
					myfree(ptr,totmem);			
		};
		
}

int *myalloc(int n,int totmem)
		{
			int *ptr = malloc(n);						
			int arr[sizeof(ptr)];
			printf("\t %d %d \t",&arr[0],&arr[sizeof(ptr)-1]);			
			totmem = totmem + n*sizeof(int);
			printf("%d \n",totmem);				
				return ptr;
			}

void myfree(int *ptr,int totmem)
		{	
			totmem = totmem - sizeof(ptr);
			free(ptr);			
			}
