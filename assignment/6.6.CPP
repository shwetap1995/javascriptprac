#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
int a,b,choice;
 cout<<"enter the two numbers:";
 cin>>a>>b;
 cout<<"enter the choice\n 1.+2.-3.*4./";
 cin>>choice;
 switch(choice) {
 case 1:
 cout<<a+b;
 break;
 case 2:
 cout<<a-b;
 break;
 case 3:
 cout<<a*b;
 case 4:
 cout<<a/b;
 break;
 default:
 cout<<"invalid choice";
 break;
 }
getch();
}