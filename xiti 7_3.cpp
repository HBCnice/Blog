#include <iostream.h>
void main()
{
	int a[10];
	int *pmax,*pmin,*p,t;
	pmax=pmin=a;
	cout<<"输入10个整数:"<<endl;
	for(p=a; p<a+10; p++)
		cin>>*p;
	for(p=a+1; p<a+10; p++)
	{
		if( *pmax < *p)
			pmax = p;
		else if( *pmin > *p)
			pmin = p;
	}
	t=*pmax;
	*pmax=*pmin;
	*pmin=t;
	cout<<"交换后的数组："<<endl;
	for(p=a; p<a+10; p++)
		cout<<*p<<" ";
	cout<<endl;

}