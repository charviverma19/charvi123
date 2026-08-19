//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float costprice, sellingprice, profit, loss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &costprice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingprice);

    if(sellingprice > costprice) {
        profit = sellingprice - costprice;
        percentage = (profit / costprice) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if(sellingprice < costprice) {
        loss = costprice - sellingprice;
        percentage = (loss / costprice) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else 
{
        printf("No Profit, No Loss\n");
    }

    return 0;
}


