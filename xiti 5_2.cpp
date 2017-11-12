#include <stdlib.h>
#include <stdio.h>
float fun(int n)
{
float S=0;
float a=0;
for(int i=1;i<=n;i++)
{
a=a+i;
S=S+1.0/a;
}
return S;
}
main()
{
  int n;
  float S;
  system("CLS");
  printf("\nPlease enter N:");
  scanf("%d",&n);
  S=fun(n);
  printf("The result is %f\n",S);
}
