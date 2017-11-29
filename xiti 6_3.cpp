#include<iostream.h>
#define M 4
#define N 4
void main()
{
	int i,k,t,a[M][N];
	cin>>a[M][N];
	cout<<"主对角线元素之和:"<<endl;
	for(i=0;i<M;i++)
		for(k=0;k<i;k++)
		{
			t=a[i][k]-1;
		}
		for(i=0;i<N;i++)
			for(k=0;k<N;k++)
			{
				t=a[i][k]+1;
				cout<<a[i][k]<<endl;
			}
}