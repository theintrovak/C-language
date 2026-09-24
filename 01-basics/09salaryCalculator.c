//write a program to calculate the salary of an employee if his DA is 10% of basic salary and HRA is 15% of basic salary and TA is 5% of basic salary . the basic salary should be inputted through keyboard and the output should be the salary of the employee
#include<stdio.h>
int main() {
    int bs , da , hra , ta , salary ;
    printf("enter the value of basic salary = ");
    scanf("%d",&bs);
    da = bs*10/100;
    hra = bs*15/100;
    ta = bs*5/100;
    salary = bs + da + hra + ta;
    printf("the salary of the employee is = %d",salary);
}