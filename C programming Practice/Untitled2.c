#include<stdio.h>
int main()
{
    int num1;
    float num2;
    double num3;
    char name;
    printf("Enter integer number:");
    scanf("%d", &num1);

    printf("Enter Floating number");
    scanf("%f", &num2);

    printf("Enter double number:");
    scanf("%lf", *&num3);

    printf("Enter your character:");
    scanf(" %c", &name);/* before writing %c, there must be a space*/

    printf("integer number:%d\n Floating number:%f\n Double number:%lf\n Character:%c\n ", num1, num2, num3, name);

}
