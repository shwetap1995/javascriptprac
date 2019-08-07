#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
    for(int i =1;i<=6;i++) {
	for(int j =1;j<=i;j++) {
	   if(i>j){
	   cout<<j;
	   }
	   else {
	    cout<<1;
	}
	}
	cout<<"\n";
    }
    getch();
    }