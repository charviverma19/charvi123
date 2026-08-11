//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
    float a;
    float b;
    float area,perimeter;

    printf("enter a");
    scanf("%f",&a);
    
    printf("enter b");
    scanf("%f",&b); 

    area = a*b;
    perimeter = 2*(a+b);

    printf("area of rectangle:%f\n",area);
    printf("perimeter of rectangle:%f\n",perimeter);
return 0;
}
