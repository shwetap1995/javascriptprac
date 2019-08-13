#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
 int n,arr[10],sum=0;
 cout<<"Enter the number of element:";
 cin>>n;
 for(int i=0;i<n;i++) {
 cin>>arr[i];
 }
 for(int j=0;j<n;j++) {
 sum = sum +arr[j];
 }
 cout<<sum;
getch();
}