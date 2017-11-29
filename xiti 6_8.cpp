#include<stdio.h>
void main()
{
	int i,j;char str1[100],str2[100],str3[201];
	gets(str1);
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
		str3[i]=str1[i];
	for(j=0;str1[j]!='\0';j++)
		str3[j+i]=str2[j];
	printf("%s\n%s\n%s\n",str1,str2,str3);
}
