//write a program to check the trainle is equilateral , isosceles or scalene
#include<stdio.h>
int main() {
    int a , b , c;
    printf("enter the value of a =");
    scanf("%d",&a);
    printf("enter the value of b =");
    scanf("%d",&b);
    printf("enter the value of c =");
    scanf("%d",&c);
    if(a==b && b==c) {
        printf("the triangle is equilateral");
    }
    else if(a==b || b==c || a==c) {
        printf("the triangle is isosceles");
    }
    else {
        printf("the triangle is scalene");
    }
}