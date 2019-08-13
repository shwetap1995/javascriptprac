#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
 int n,arr[10];
 cout<<"Enter the element :";
 cin>>n;
 for(int i=0;i<n;i++) {
 cin>>arr[i];
 }
 for(int j=n;j>=0;j--) {
 cout<<arr[j]<<"\n";
 }
getch();
}