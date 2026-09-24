//write a program that converts temperatur from fahrenheit to celsius 
#include<stdio.h>
int main() {
    float f , c ;
    printf("enter the temperature in fahrenheit =");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("the temperature in celsius is = %f",c);
}