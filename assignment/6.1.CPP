#include<iostream.h>
#include<conio.h>
void main() {
 clrscr();
 int no;
 int count=0;
 cout<<"Enter the number";
 cin>>no;
 if(no ==1) {
 cout<<"number is not a prime";
 }
 for(int i=2;i<=no;i++) {
if(no%i==0) {
 count++;
}
 }
 if(count==1) {
 cout<<"number is prime";
 }
 else
 {
 cout<<"number is not a prime";
 }
getch();
}