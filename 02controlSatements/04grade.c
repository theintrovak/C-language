// wap to catigory the grade of a student
#include<stdio.h>
int main() {
    int marks;
    printf("enter the marks of student =");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
        printf("grade A+");
    }
    else if(marks>=80 && marks<=89){
        printf("grade A");
    }
    else if(marks>=70 && marks<=79){
        printf("grade B");
    }
    else if(marks>=60 && marks<=69){
        printf("grade C");
    }
    else if(marks>=50 && marks<=59){
        printf("grade D");
    }
    else{
        printf("grade F");
    }
}   