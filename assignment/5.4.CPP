#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
 for(int i=1;i<=5;i++) {
int x = 65;
 for(int j=5;j>=i;j--) {
 if(j>=i) {
cout<<((char)(x));
x++;
 }
 else {
 cout<<" ";
 }
 }
 cout<<"\n";
 }
 getch();
 }