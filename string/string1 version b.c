#include "stdio.h"

int my_strlen(char *p);

void main(){
	char str1[100];
	int len;

	printf ("Enter a string: ");
	scanf (" %[^\n]s", str1);

	len = my_strlen(str1);
	printf ("Length of %s is %d\n", str1, len);
}

int my_strlen(char *p){
	int i;
	i=0;
	while (*p != '\0'){
		i++;
		p++;
	}

	return i;
}
/* we can also write the function like this:
int my_strlen(char *p){
	int i;
	i=0;
	while (*(p+i) != '\0'){
		i++;

	}

	return i;
} */
