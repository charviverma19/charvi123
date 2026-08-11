//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient
#include<stdio.h>
int main(){
    float a;
    float b;
    float sum,difference,product,quotient;

    printf("enter a");
    scanf("%f",&a);

    printf("enter b");
    scanf("%f",&b);

    sum =a+b;
    difference =a-b;
    product =a*b;
    quotient =a/b;

    printf("sum:%f\n",sum);
    printf("difference:%f\n",difference);
    printf("product:%f\n",product);
    printf("quotient:%f\n",quotient);

    return 0;

}