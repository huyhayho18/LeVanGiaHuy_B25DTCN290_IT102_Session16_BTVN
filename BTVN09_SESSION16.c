#include <stdio.h>
#include <string.h>

int main () {
	
	char str[100];
	char charter;
	printf ("Nhap vao moi chuoi ky tu: ");
	fgets (str, sizeof(str), stdin);
	printf ("Nhap ky tu can xoa: ");
	scanf ("%c",&charter);
	int i, j;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == charter) {
			for (j = i; j < strlen(str); j++) {
				str[j] = str[j+1];
			}
		}
	}
	printf ("%s",str);
	
	return 0;
}
