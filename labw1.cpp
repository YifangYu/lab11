#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int a;
cin>>a;
while(a!=1)
{
if (a%2==1)
{	a=3*a+1;
printf("%d ",a);
}
else
{	a=a/2;
	printf("%d ",a);
}
}
cout<<endl;
return 0;
}
