#include "stdio.h"

void convert_uppercase(char *p){

	int i;
	for (i=0; p[i] != '\0'; i++)
		if (p[i] >= 'a' && p[i] <= 'z')
			p[i] = p[i] - ('a'-'A');
}

void main(){

	char country[22];
	scanf("%s", country);
	convert_uppercase (country);
	printf ("%s\n", country);
}
