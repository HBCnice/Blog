#include <stdio.h>
void main()
{
	int  dat[10]= {13, 35, 26, 15, 56, 21, 33, 29, 58, 76};	
	int  max= dat[0], min= dat[0], i, maxnum= 0, minnum= 0;

	for(i= 1; i < 10; i++)
	{
		if(dat[i] > max)
		{
			max= dat[i];
			maxnum= i;
		}

		if(dat[i] < min)
		{
			min= dat[i];
			minnum= i;
		}
	}

	i= dat[maxnum];
	dat[maxnum]= dat[minnum];
	dat[minnum]= i;

	for(i= 0; i < 10; i++)
		printf("%d\n", dat[i]);
}
