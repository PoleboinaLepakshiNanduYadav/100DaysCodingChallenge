#include<stdio.h>
int main() {
    
 int  cost,selling,profit,loss;
 float profitper,lossper;
 printf("Enter the cost price:");
 scanf("%d",&cost);
 printf("Enter the selling price:");
 scanf("%d",&selling);
 profit=selling-cost;
 printf("Profit=%d\n",profit);
 loss=cost-selling;
 printf("Loss=%d\n",loss);
 profitper=100*profit/cost;
 printf("Profit Percentage=%f\n",profitper);
 lossper=100*loss/cost;
 printf("Loss Percentage=%f",lossper);
 
    
    return 0;
}