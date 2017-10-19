#include<stdio.h>
void main()
{
	int i,num=0,j=0;
	for(i=2000;i<=3000;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
		{
			printf("%d",i);
			j++;
			num++;
		}
		if(j==10)
		{
			printf("\n");
			j=0;
	}}
	printf("\n num is %d",num);
}
