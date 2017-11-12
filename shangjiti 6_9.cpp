#include<stdio.h>
void main()
{
	int m,k=0,i;
	printf("请输入正整数m的值:");
	scanf("%d",&m);
	for(i=2;i<=m;i++)
		if(i%7==0||i%11==0)
		{
			printf("%d",i);
			k++;
		}
		printf("\n\n1到%d之间能被7或11整出的数共有%d个。\n",m,k);
}