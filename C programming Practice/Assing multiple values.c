
#include<stdio.h>
int main()
{
    int num1;
    float num2;
    double num3;
    char name;
    printf("Enter your character and numbers:");
    scanf(" %c %d %f %lf", &name, &num1, &num2, &num3);/* before writing %c, there must be a space*/

    printf("integer number:%d\n Floating number:%f\n Double number:%lf\n Character:%c\n ", num1, num2, num3, name);

}
