//write a program to calculate the circumference of a circle
#include<stdio.h>
int main() {
    float pi = 3.14 , r , c;
    printf("enter the value of radious =");
    scanf("%f",&r);
    c = 2*pi*r;
    printf("the circumference of circle is = %f",c);
}