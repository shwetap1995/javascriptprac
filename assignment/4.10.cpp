#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
for (int i = 1; i <=5; i++) {
	for (int j = 1; j <=5; j++) {
	    if (i <= j) {
		cout<<"*";
	    } else {
		cout<<" ";
	    }
	}

       for(int k =i;k<5;k++) {
	    cout<<"*";
	 }
	cout<<"\n";
	}
        getch();
}