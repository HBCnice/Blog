#include <iostream.h>
void main()
{
	int a[10];
	int *pmax,*pmin,*p,t;
	pmax=pmin=a;
	cout<<"����10������:"<<endl;
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
	cout<<"����������飺"<<endl;
	for(p=a; p<a+10; p++)
		cout<<*p<<" ";
	cout<<endl;

}