#include<iostream.h>
#include<conio.h>
void main() {
 int a,b,temp;
 cout<<"enter two numbers";
 cin>>a>>b;
 temp=a;
 a=b;
 b=temp;
 cout<<"after number swapping";
 cout<<a<<" "<<b;
getch();
}