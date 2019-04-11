struct element
	{	
		char name[15];
		float cg;
};

void merge(struct element*ls1,int sz1, struct element*ls2,int sz2,struct element*output);
void recms(struct element *str,int a , int r , struct element *output);
