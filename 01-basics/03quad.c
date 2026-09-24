// write a program that solves a quadratic equation
#include<stdio.h>
int main() {
    int a , b , c ,  d , x , z ;
    printf("enter the value of A = ");
    scanf("%d",&a);
    printf("enter the value of B = ");
    scanf("%d",&b);
    printf("enter the value of C = ");
    scanf("%d",&c);
    printf("enter the value of D = ");
    scanf("%d",&d);
    printf("enter the value of X = ");
    scanf("%d",&x);
    z = (a*x*x)+(b*x)+c;
    printf("the value of the equation of = %d",z);


}