//write a program to calculate the area of a triangle
#include<stdio.h>
int main() {
    float h , b , c , s , area;
    printf("enter the value of h =");
    scanf("%f",&h);
    printf("enter the value of b =");
    scanf("%f",&b);
    area = (h*b)/2;
    printf("the area of triangle is = %f",area);
}