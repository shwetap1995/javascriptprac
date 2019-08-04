#include<iostream.h>
#include<conio.h>
void main() {
for (var i = 0; i < 5; i++) {
        for (var j = 0; j < 5; j++) {
            if (i <= j) {
                cout<<"*";
            } else {
                cout<<"$";
            }
        }
        cout<<"\n";
        }
        getch();
}