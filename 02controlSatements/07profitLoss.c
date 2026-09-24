//wap to check proofit and loss when selling price and cost price is given
#include<stdio.h>
int main() {
    int sp , cp , profit , loss;
    printf("enter the selling price =");
    scanf("%d",&sp);
    printf("enter the cost price =");
    scanf("%d",&cp);
    if(sp>cp) {
        profit = sp-cp;
        printf("the profit is = %d",profit);
    }
    else {
        loss = cp-sp;
        printf("the loss is = %d",loss);
    }
}