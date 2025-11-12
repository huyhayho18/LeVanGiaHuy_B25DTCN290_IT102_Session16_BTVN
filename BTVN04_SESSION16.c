#include <stdio.h>
#include <string.h>

int main () {
	
	char str[100];
	printf ("Nhap vao mot choi ky tu: ");
	fgets (str, sizeof(str), stdin);
	char charter;
	printf ("Nhap ky can kiem tra: ");
	scanf ("%c",&charter);
	int i, j, count = 0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == charter) {
			count++;
		}
		}
	printf ("So lan ky tu %c xuat hien trong chuoi la: %d",charter, count);
	
	return 0;
}
