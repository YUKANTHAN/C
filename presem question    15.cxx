#include<stdio.h>
int main() {
int  x=456,*p1,**p2;
p1=&x;
p2 =&p1;
printf("Value of x is: %d\n",x);
printf("Value of *p1 is : %d\n ",*p1);
printf("Value of *p2 is : %d\n ",**p2);
}