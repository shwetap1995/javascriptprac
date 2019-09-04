#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
int n,i,fact=1;
cout<<"enter the number:";
cin>>n;
for(i=n;i>=1;i--) {
 fact = fact * i;
}
cout<<fact;
getch();
}