#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
int no;
cout<<"Enter any number:";
cin>>no;
if(no > 0) {
cout<<"number is positive";
}
else if(no < 0) {
cout<<"number is negative";
}
else if(no==0) {
cout<<"0 is neither positive nor negative";
}
else {
cout<<"invalid choice";
}
getch();
}