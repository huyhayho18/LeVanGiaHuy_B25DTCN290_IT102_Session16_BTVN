#include <stdio.h>
#include <string.h>

int main () {
	
	char str[100];
	int i;
	printf ("Nhap vao mot chuoi ky tu: ");
	fgets (str, sizeof(str), stdin);
	for (i = strlen(str); i >= 0; i--) {
		printf ("%c",str[i]);
	}
	
	return 0;
}
