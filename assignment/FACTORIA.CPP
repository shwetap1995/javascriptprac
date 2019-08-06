#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int number;int fact=1;
 cout<<"enter the number";
 cin>>number;
 for(int i=1;i<=number;i++) {
 fact = fact *i;
 }
 cout<<"factorial is:"<<fact;
getch();
}