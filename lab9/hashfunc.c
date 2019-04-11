#include<stdio.h>

int hashfunc(char a[],int basenum,int tablesize) 
	{
		int sum=0;
		for(int i=0;a[i]!='\n',++i)	
			{
				sum=sum+int(a[i]);
		}
		return ((sum%basenum)%tablesize);
}
