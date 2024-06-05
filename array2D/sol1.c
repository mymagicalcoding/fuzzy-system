#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j;
printf("Enter rows and column for first matrix:");
scanf("%d %d", &r1, &c1);
printf("Enter rows and column for second matrix:");
scanf("%d %d", &r2, &c2);
while(c1!=c2&&r1!=r2)
{
    printf("Error! order of first matrix and order of second matrix needs to be same.");
    break;
}
printf("\nEnter the elements for first matrix:\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
       { printf("first[%d][%d] =",i,j);
        scanf("%d", &first[i][j]); }
}printf("\n\nEnter the elements for second matrix:\n");
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
       { printf("second[%d][%d] =",i,j);
        scanf("%d", &second[i][j]); }
}
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        result[i][j]=first[i][j] + second[i][j];
    }
}




printf("\n\nFirst matrix:\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
       {
        printf("%d ", first[i][j]); }printf("\n");
}
printf("\n\nsecond matrix:\n");
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
       {
        printf("%d ", second[i][j]); }printf("\n");
}
printf("\n\nresult matrix:\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
       {
        printf("%d ", result[i][j]); }printf("\n");
}

}

