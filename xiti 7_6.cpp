#include <stdio.h>
#include <iostream.h>
#define N 100
void insert(char *s1,char *s2, int m);
void main()
{
	char s1[N],s2[N];
	int m;
	cout<<"�������ַ���1��"<<endl;
	gets(s1);
	cout<<"�������ַ���2��"<<endl;
	gets(s2);
	cout<<"��������ַ���2���뵽�ַ���1�е�λ�ã�"<<endl;
	cin>>m;
	insert(s1,s2,m);
	cout<<"��������ַ���1��"<<endl;
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