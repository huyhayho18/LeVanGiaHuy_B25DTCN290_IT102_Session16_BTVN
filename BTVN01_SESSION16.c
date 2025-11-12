#include <stdio.h>
#include <string.h>

int main () {
	
	char str[100];
	printf ("Nhap vao mot chuoi ky tu: ");
	fgets (str, sizeof(str), stdin);
	printf ("Chuoi vua nhap la: %s\n",str);
	printf ("Do dai cua chuoi do la: %d",strlen(str));
	
	return 0;
}
