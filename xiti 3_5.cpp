#include<iostream.h>
#include<math.h>
void main()
{
	double a,b,c,p,s;
	cout<<"����������:"<<endl;
	cin>>a>>b>>c;
	if(a>=b+c||b>=a+c||c>=a+b)
		cout<<"���ܹ���������"<<endl;
	else
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"�����ε����="<<s<<endl;
}

