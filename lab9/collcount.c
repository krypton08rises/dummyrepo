int collcount(char a[50][],int basenum,int tablesize)
	{
		int colcount[50];
		int hashres[50];
		for(int i=0,i<50,i++)
		 	{
				hashres[i]=hashfunc(a[i][],basenum,tablesize);
				for(int j=0;i!=j;j++)
					{
						if(hashres[i]==hashres[j])
						{
							colcount[hashres[i]]++;
							break;
					}
				}
		}
	return colcount[];
}


