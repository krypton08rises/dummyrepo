#include<time.h>

struct list createlist(int n){
			srand(time(0));	
			struct list *ls = malloc(n*sizeof(struct list)); 
			struct list *temp = ls; 
				
				for(int i=0;i<n;++i){
							temp->rndm=rand();
							temp = temp->next;
						}
			return ls;
}
