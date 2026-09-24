//write a program to swap two numbers using a thierd variable
#include<stdio.h>
int main (){
    int a , b , c ;
    printf("enter the value of a = ");
    scanf("%d",&a);
    printf("enter the value of b = ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("the swapped values are a = %d  &  b = %d ",a,b);
}


//write a program to swap two numbers without  using a thierd variable
#include<stdio.h>
int main (){
    int a , b , c ;
      printf("........................    without using a thierd variable   ............................\n");
    printf("enter the value of a = ");
    scanf("%d",&a);
    printf("enter the value of b = ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swapped values are a = %d  &  b = %d ",a,b);
}