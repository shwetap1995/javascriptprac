#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
int fno,sno,a,s,m,d;
cout<<"enter first number";
cin>>fno;
cout<<"enter second number:";
cin>>sno;
char ch;
cout<<"1.Addition \n 2.substraction \n 3.multiplication \n 4.division";
cin>>ch;
switch(ch) {
case '1':
a=fno+sno;
cout<<"addition is"<<a;
break;
case '2':
s=fno-sno;
cout<<"subtraction is"<<s;
break;
case '3':
m=fno*sno;
cout<<"multiplication is"<<m;
break;
case '4':
d=fno/sno;
cout<<"division is"<<d;
break;
default:
cout<<"enter choice between 1 to 4";
      }
getch();
}
