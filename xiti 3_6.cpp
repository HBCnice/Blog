#include<iostream.h>
#define pi 3.1415926
void main()
{
	double r,L,S;
	int k;
	cout<<"Please ender r and k:"<<endl;
	cin>>r>>k;
	if(k<1||k>3)
		cout<<"ÊäÈë´íÎó"<<endl;
	else
		if(k==1)
			L=2*pi*r;
		else
			if(k==2)
				S=pi*r*r;
			else
				L=2*pi*r;
			    S=pi*r*r;
	cout<<"L="<<L<<endl<<"S="<<S<<endl;
}
