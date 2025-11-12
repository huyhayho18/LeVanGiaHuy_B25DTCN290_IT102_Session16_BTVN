#include <stdio.h>
#include <string.h>

int main () {
	
	char str[100];
	printf ("Nhap vao moi chuoi ky tu: ");
	fgets (str, sizeof(str), stdin);
	int i, count = 0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') {
			count++;
		}
	}
	printf ("So ky tu la chu cai trong mang la: %d",count);
	
	return 0;
}
