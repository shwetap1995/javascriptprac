#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
 int no;
 int rev=0;
 cout<<"Enter the number:";
 cin>>no;
 while(no>0) {
 int mod = no%10;
  rev=rev*10+mod;
  no=no/10;
  switch(mod) {
  case 0:
  cout<<"zero";
  break;
   case 1:
  cout<<"one";
  break;
case 2:
  cout<<"two";
  break;
  case 3:
  cout<<"three";
  break;
  case 4:
  cout<<"four";
  break;
  case 5:
  cout<<"five";
  break;
  case 6:
  cout<<"six";
  break;
  case 7:
  cout<<"seven";
  break;
  case 8:
  cout<<"eight";
  break;
  case 9:
  cout<<"nine";
  break;
  default:
  cout<<"input is not numeric";
  break;
  }
  }
getch();
}