#include<stdio.h>

int p(int);
/*int g(int);
int h(int);
int d(int);
*/
int bits;

int main()
	{	
		int pilani;
		int goa;
		int hyd;
		int dub;
		
		p(pilani);				
	/*	g(goa);
		h(hyd);
		d(dub);
	
	*/	
}
long i = 0 ;
int p(int pilani)
	{	
		i+=1;
		if(i>100000000000)
			exit(0);
		printf("%u \n",&pilani);
			p(pilani+1);
		//	g(pilani);	
}
/*
int g(int goa)
	{
		printf("%u \n",&goa);
			h(goa);
}
int h(int hyd)
	{
		printf("%u \n",&hyd);
			d(hyd);
}
int d(int dub)
	{
		printf("%u \n",&dub);
}
*/
