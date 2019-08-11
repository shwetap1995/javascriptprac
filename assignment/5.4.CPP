#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
 for(int i=0;i<=4;i++) {
int x = 65;
 for(int j=4;j>=0;j--) {
 if(j>=i) {
cout<<((char)(x));
x++;
 }
 else {
 cout<<" ";
 }
 }
 int y =69;
 for(int k=0;j<=4;j++) {
 if(j>=i) {
 cout<<((char)(y-i));
 y--;
 }
 else {
 cout<<" ";
 }
 }
 cout<<"\n";
 }
 getch();
 }