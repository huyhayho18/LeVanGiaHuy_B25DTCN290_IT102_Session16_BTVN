#include <stdio.h>
#include <string.h>

int main () {
	
	char str[100];
	printf ("Nhap vao moi chuoi ky tu: ");
	fgets (str, sizeof(str), stdin);
	str[0] = str[0] - 32;
	for (int i = 0; i < strlen(str); i++) {
		if(str[i] == ' ') {
			str[i+1] = str[i+1] - 32;
		}
	}
	printf ("Chuoi sau khi viet hoa chu cai dau la: %s\n",str);
	
	return 0;
}
