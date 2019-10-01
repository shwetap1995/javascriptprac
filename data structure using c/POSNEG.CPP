#include<conio.h>
#include<stdio.h>
int main() {
clrscr();
int no;
printf("enter the number");
scanf("%i",&no);
if(no ==0){
printf("number is equal is zero");
} else if(no>0) {
printf("number is positive");
}
else {
printf("number is negative");
}
getch();
}