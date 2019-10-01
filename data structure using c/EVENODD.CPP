#include<conio.h>
#include<stdio.h>
int main() {
clrscr();
int no;
printf("enter the number");
scanf("%i",&no);
if(no%2==0) {
printf("%i is even",no);
}
else
{
printf("%i is odd",no);
}
getch();
}