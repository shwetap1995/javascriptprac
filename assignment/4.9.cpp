
#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
for (int i = 1; i <=5; i++) {
	for (int j = 5; j >=1; j--) {
	if(i>=j) {
		cout<<"*";
	    }
	    else {
	    cout<<" ";
	    }
	       }

	for (int l = 2; l<=i; l++) {
	if(i>=l) {
		cout<<"*";
	    }
	    else {
	    cout<<" ";
	    }
	    }

	cout<<"\n";
	}
	getch();
}