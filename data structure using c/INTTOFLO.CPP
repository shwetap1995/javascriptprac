#include<conio.h>
#include<stdio.h>
int main() {
clrscr();
int integer;
float floatno;
printf("enter the number");
scanf("%i",&integer);
floatno =(float)integer;
printf("the floating point of %i is =%f",integer,floatno);
getch();
}