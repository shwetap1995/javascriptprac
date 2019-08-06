#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
 for(int i= 1;i<=4;i++) {
 for(int j=4;j>=1;j--) {
if(i>=j) {
 cout<<((char)(i+64));
 }
 else {
 cout<<" ";
 }
 }
 for(int k =2;k<=i;k++) {
 cout<<((char)(i+64));
 }
 cout<<"\n";
 }
getch();
}