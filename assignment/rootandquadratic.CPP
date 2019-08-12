#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
int a,b,c;
cout<<"Enter the value of a,b and c:";
cin>>a>>b>>c;
int x = (b*b)-4*a*c;
int r1 =((-b+x)/(2*a));
int r2 =((-b-x)/(2*a));
if(x>0) {
cout<<"Roots are unequal";
}
else if(x<0) {
cout<<"roots are imaginary";
}
else {
cout<<"roots are equal";
}
cout<<r1<<"\n";
cout<<r2;

getch();
}