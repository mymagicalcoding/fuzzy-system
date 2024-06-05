#include "stdio.h"

void convert_lowercase(char *p){

	int i;
	for (i=0; p[i] != '\0'; i++)
		if (p[i] >= 'A' && p[i] <= 'Z')
			p[i] = p[i] + ('a'-'A');
}

void main(){

	char country[]="I Love BangLaDesh";
	convert_lowercase (country);
	printf (" %s\n", country);
}
