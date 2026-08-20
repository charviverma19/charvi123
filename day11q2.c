// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float costprice, sellingprice, profitorLoss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &costprice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingprice);

    if(sellingprice > costprice) {
        profitorLoss = sellingprice - costprice;
        percentage = (profitorLoss / costprice) * 100;
        printf("Profit = %.2f\n", profitorLoss);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if(sellingprice < costprice) {
        profitorLoss = costprice - sellingprice;
        percentage = (profitorLoss / costprice) * 100;
        printf("Loss = %.2f\n", profitorLoss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}

