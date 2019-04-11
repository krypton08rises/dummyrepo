void swap(struct element *a,struct element *b){
		struct emp *temp;
		temp = a;
		a = b;
		b = temp;
	}

int partition(struct emp *a,int low,int high,struct emp *o){
	
	int i = low-1;
	int l = low;
	while(l!=high){
			if(a[j].empid<=a[high].empid){
				++i;
				swap(&a[j],&a[i]);
			}		
				l++;
	}
	i++;
	swap(&a[i],&a[h]);
	return (i);
	}

void quicksort(struct element *a,int low,int high)
	{
		struct emp *temp;
		int top = -1;

		temp[++top] = low;
		temp[++top] = high;

		while(top>=0){

			high  = temp[top--];
			low = temp[top--];

			int p = partition(a,low,high)
		
			if(p-1>low){
					temp[++top] = low;
					temp[++top] = p-1;
			}

			if(p+1<high){
					temp[++top] = p+1;
					temp[++top] = high;
			}
		}
		
	}	

