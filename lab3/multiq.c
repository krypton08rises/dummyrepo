#include "que.h"

struct multiq(int num)
	{	
		struct queue*q;
		int count;	
}

struct multiq *createmq(int num)
		{
		struct multiq *mq = (struct multiq*)malloc(sizeof(struct multiq))
		for(int i=0;i<num;++i){
					mq[i].first = NULL;
					mq[i].last = NULL;
					mq[i].count =0;
				}
			return mq;
	}

struct addmq(multiq mq,element t)
		{
			struct queue q1 = (((mq->q)->t)->pr);
				q1 = addq(q1,t);
				q1>count++;
	}

struct task nextmq(multiq mq){
			int p =0;
			while()
				if(isempty(mq->q)==0)
					if((mq->q)->pr>p)
					
		}

struct task delnextmq(multiq mq)
{}

struct task isemptymq(multiq mq)
{}

int sizemq(multiq mq)
{}

int sizemqbypriority(multi mq,prn p)
{}

struct queue getqueuefrommq(multiq mq,prn p)
{}


