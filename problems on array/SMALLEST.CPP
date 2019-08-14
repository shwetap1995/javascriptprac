#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
int n,m,userarr[10],temp;

cout<<"number of element:";
cin>>n;
for(int i=0;i<n;i++) {
cin>>userarr[i];
}
for(int k=0;k<n;k++) {
for(int l=0;l<n;l++) {
  if(userarr[l]>userarr[l+1]) {
  temp = userarr[l];
  userarr[l]=userarr[l+1];
  userarr[l+1]=temp;
  }
  }
}
cout<<"sorted arry is:";
for(int j=0;j<n;j++) {
cout<<userarr[j]<<" ";
}
cout<<"smallest first and last elements are:";
  for(int s=0;s<2;s++) {
cout<<userarr[s]<<" ";
}

getch();
}