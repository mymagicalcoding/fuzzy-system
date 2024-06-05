#include "stdio.h"
#include "string.h"

void main(){

    char country[]="Bangladesh";
    char capital[] = "Dhaka";
    char anotherCapital[100];
    int len;

    len = strlen (country);
    printf ("Length of %s is %d\n", country, len);

    len = strlen (capital);
    printf ("Length of %s is %d\n", capital, len);

    len = strlen ("Bangla");
    printf ("Length of %s is %d\n", "Bangla", len);

    printf ("Enter the capital of any country: ");
    scanf("%[^\n]s", anotherCapital);
    len = strlen (anotherCapital);
    printf ("Length of %s is %d\n", anotherCapital, len);
}
