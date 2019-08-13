#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
int n;
int arr[10];
 cout<<"Enter the number of element in array:";
 cin>>n;
 for(int i=0;i<n;i++) {
 cin>>arr[i];
 }
 for(int j=0;j<n;j++) {
 cout<<arr[j]<<"\n";
 }
getch();
}