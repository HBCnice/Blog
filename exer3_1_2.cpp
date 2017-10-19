# include <iostream.h>

void main()
{
	int i, j, m;
	j = 0;
	cout<<"请输入一个整数："<<endl;
	cin>>i;
	if (i <= 0)
	{
		j = 1;
	}
	else
	{
		for (m = i; m > 0;)
		{
			m = m / 10;
			j++;
		}
	}

	switch(j)
	{	
	case 1: cout<<i<<"小于10。"<<endl;
			break;
	case 2: cout<<i<<"在10到99之间。"<<endl;
			break;
	case 3: cout<<i<<"在100到999之间。"<<endl;
			break;
	default: cout<<i<<"大于1000。"<<endl;
	}
}		