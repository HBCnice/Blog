#include <iostream.h>
void main()
{
	float x;
	cout<<"please input x:"<<endl;
	cin>>x;
	if(x<=10)
		cout<<"<10"<<endl;
	else
		if(x<=99)
			cout<<"10~99"<<endl;
		else
			if(x<=999)
				cout<<"100~999"<<endl;
			else
				cout<<"<=1000"<<endl;
}