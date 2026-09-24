//wap to demonstrate the voting eligiblity of a person
#include<stdio.h>
int main() {
    int age;
    printf("enter the age of the person = ");
    scanf("%d",&age);
    if(age>=18) {
        printf("the person is eligible for voting");
    }
    else {
        printf("the person is not eligible for voting");
    }
}