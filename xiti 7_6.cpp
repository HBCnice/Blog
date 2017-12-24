#include <stdio.h>
#include <iostream.h>
#define N 100
void insert(char *s1,char *s2, int m);
void main()
{
	char s1[N],s2[N];
	int m;
	cout<<"ÇëÊäÈë×Ö·û´®1£º"<<endl;
	gets(s1);
	cout<<"ÇëÊäÈë×Ö·û´®2£º"<<endl;
	gets(s2);
	cout<<"ÇëÊäÈë°Ñ×Ö·û´®2²åÈëµ½×Ö·û´®1ÖÐµÄÎ»ÖÃ£º"<<endl;
	cin>>m;
	insert(s1,s2,m);
	cout<<"²Ù×÷ºóµÄ×Ö·û´®1£º"<<endl;
	puts(s1);
}
void insert(char *s1,char *s2, int m)
{
	char *p1, *p2,*q=s2;
	p1=s1;
	p2=s1+m;
	int len = 0;
	while( *p1 != '\0') p1++;
	while( *q != '\0') len++;
	while( p1>=p2)
	{
		*(p1+len) = *p1;
		p1--;
	}
	q = s2;
	while( *q != '\0')
	{
		*p2 = *q;
		p2++; q++;
	}
}