#include<stdio.h>
void my_strcpy(char *target, char *source){

	  int i;

    for(i = 0; source[i]!='\0'; i++)
    {
        *(target + i) = *(source + i);
    }
}

void main(){

	char country[]="Bangladesh";
	char motherland [11];
	my_strcpy (motherland, country);
	printf ("%s\n", motherland);
}
