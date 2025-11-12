#include <stdio.h>
#include <string.h>

int main () {
	
	char str[100];
	printf ("Nhap vao moi choi ky tu: ");
	fgets (str, sizeof(str), stdin);
	int i, count = 1;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == ' ') {
			count++;
		}
	}
	printf ("So tu trong chuoi la: %d",count);
	
	return 0;
}
