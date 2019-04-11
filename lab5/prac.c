#include<stdio.h>

int main()
{
	char *a;
	char *b;
	char *c;


	scanf(" \" %[^,]s,%[^,]s,%[^,]s \"",&a,&b,&c);
	printf("%s\t%s\t%s\t",a,b,c);

}
