#include "stdio.h"

void my_strcpy(char *target, char *source){

	while(*source != '\0')//remeber if we write *(source+i) then itd also mean to the iTH element of array, just like *source mean
        {
		*target = *source;
		source++;
		target++;
	}
	*target = *source;
}

void main(){

	char country[]="Bangladesh";
	char motherland [11];
	my_strcpy (motherland, country);
	printf ("%s\n", motherland);
}
/* the function can be also written like thisvoid my_strcpy(char *target, char *source){

	int i;
	for(i=0; *(source+i)!='\0';i++)
    {
        *(target + i)=*(source+i);
    }
     target[i] = '\0';
} */
