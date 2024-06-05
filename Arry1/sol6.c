/*Create a 26 elements array to put the ASCII values of the English alphabet set and finally, display
the alphabets from the values in the array.*/
#include<stdio.h>
int main()
{
    int ASCIIuppercase[26], ASCIIlowercase[26];
    int i;
    for (i=0;i<26;i++)
    {
        ASCIIuppercase[i]= 'A'+i;
        ASCIIlowercase[i]='a'+i;
        printf("%c %c \n", ASCIIuppercase[i], ASCIIlowercase[i]);
    }
}
