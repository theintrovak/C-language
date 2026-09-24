// wap to check the largest of three numbers
#include<stdio.h>
int main() {
    int a , b , c;
    printf("enter the value of a =");
    scanf("%d",&a);
    printf("enter the value of b =");
    scanf("%d",&b);
    printf("enter the value of c =");
    scanf("%d",&c);
    if(a>b && a>c) {
        printf("a is the largest number");
    }
    else if(b>a && b>c) {
        printf("b is the largest number");
    }
    else {
        printf("c is the largest number");
    }
}


//with nested if statements
#include<stdio.h>
int main() {
    printf("........................ using nested if statements   ............................\n");
    int a , b , c;
    printf("enter the value of a =");
    scanf("%d",&a);
    printf("enter the value of b =");
    scanf("%d",&b);
    printf("enter the value of c =");
    scanf("%d",&c);
    if(a>b) {
        if(a>c) {
            printf("a is the largest number");
        }
        else {
            printf("c is the largest number");
        }
    }
    else {
        if(b>c) {
            printf("b is the largest number");
        }
        else {
            printf("c is the largest number");
        }
    }
}