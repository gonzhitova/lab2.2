#include <iostream>
#include <conio.h>
using namespace std;
int sum(int a,int b)
{
    int c=a+b;
	return c;
}
int sub(int a,int b)
{
    int s=a-b;
	return s;
}
int m(int a, int b)
{
    int d;
    d= a;
    for (int i = 1; i < b; i++)
        d += a;
    return d;
}
int l(int a, int b)
{
    int f=0;
    int g=a;
    while(g>b)
    {
      int x=g-b;
      g=x;
      f++;
    }
    return f ;
}
void main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int c=sum(a,b);
	int s=sub(a,b);
    int d=m(a,b);
    int f=l(a,b);
    cout<<"Summa="<<c;
    cout<<"\n";
	cout<<"Raznost'="<<s;
    cout<<"\n";
    cout<<"Ymnozhenie="<<d;
    cout<<"\n";
    cout<<"Delenie="<<f;
	cout<<"\n";
	system("pause");
}