#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
 int n;
 cout<<"enter range of number:";
 cin>>n;
 for(int i=1;i<=n;i++) {
 if(i%(3*5)==0) {
 cout<<"FizzBuzz\n";
 }
 else if(i%3==0) {
 cout<<"Fizz\n";
 }
 else if(i%5==0) {
 cout<<"Buzz\n";
 }
 else
 {
 cout<<i<<"\n";
 }
 }
getch();
}