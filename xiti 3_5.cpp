#include<iostream.h>
#include<math.h>
void main()
{
	double a,b,c,p,s;
	cout<<"输入三个数:"<<endl;
	cin>>a>>b>>c;
	if(a>=b+c||b>=a+c||c>=a+b)
		cout<<"不能构成三角形"<<endl;
	else
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"三角形的面积="<<s<<endl;
}

