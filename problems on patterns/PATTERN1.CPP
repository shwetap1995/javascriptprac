#include<iostream.h>
#include<conio.h>
void main() {
	clrscr();
	int n,i,j;
	cout<<"Enter the number of lines:";
	cin>>n;
	for(i=1;i<=n;i++) {
		for(j=0;j<=n;j++) {
			cout<<"* ";
		}
		cout<<"\n";
	}
getch();
}