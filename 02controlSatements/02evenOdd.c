//write a program to check whether the number is even or odd
#include<stdio.h>
int main() {
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);
    if(n%2==0) {
        printf("the number is even");
    }
    else {
        printf("the number is odd");
    }
} 