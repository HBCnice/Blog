#include <stdio.h>
#include <conio.h>
#include <windows.h>
float fun ( float h )
{
long num;
h=h+(float)0.005;
h=h*100;
num=(long)h;
h=(float)num;
h=h/100;
return h;
}
main()
{
float a;
system("cls");
printf("Enter a: ");
scanf("%f",&a);
printf("The original data is: ");
printf("%f \n\n",a);
printf("The result: %5.2f\n",fun(a));
getch();
}