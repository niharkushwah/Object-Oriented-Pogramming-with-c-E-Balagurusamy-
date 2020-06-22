#include<iostream>
using namespace std;
int main()
{
float a,b;
void swapfunc(int&a,int&b);
cout<<"Enter two values:"<<endl ;
cin>>a>>b;

cout<<"Befor swapping a="<<a<< "and b=" <<b <<endl;

swap(a,b);
cout<<"After swapping: a= "<<a<< "and b="<<b<<endl;
return 0;
}
void swap(int & x,int & y)
{
int temp;
temp=x;
x=y;
y=temp;
}
