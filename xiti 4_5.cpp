#include<stdio.h>
int main()
{ 
	long i,j,k;
	k=10;
	for (i=1;i<=99;i++)
	{
		if (i==k)
			k*=10;
		j=i*i;
		if(j%k==i)
			printf("%ld\t%ld\n",i,j);
	}
}