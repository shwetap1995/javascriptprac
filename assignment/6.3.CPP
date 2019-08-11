#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
int a=0,b=1,c=0;
int no;
cout<<"Enter the number:";
cin>>no;
cout<<a<<" "<<b<<" ";
for(int i=2;i<no;i++) {
c=a+b;
a=b;
b=c;
cout<<c<<" ";
}
getch();
}