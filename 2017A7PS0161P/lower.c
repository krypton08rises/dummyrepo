#include "node.h"
BOOL IsLower_GM(int id1, int id2)
{
	int grpno1 = id1%10000;
	int grpno2 = id2%10000;

	id1 = id1/10000;
	id2 = id2/10000;

	int memno1 = id1%100;
	int memno2 = id2%100;

	if(grpno1<grpno2)
		return 1;
	else if(grpno1==grpno2){
					if(memno1<memno2)
						return 1;
					else 
						return 0;
			}
	else return 0;
}
