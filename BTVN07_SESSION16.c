#include <stdio.h>
#include <string.h>

int main () {
	
	char str[100];
	printf ("Nhap vao moi choi ky tu: ");
	fgets (str, sizeof(str), stdin);
	int i, count_char = 0, count_int = 0, count_spe = 0;
	for (i = 0; i < strlen(str); i++) {
		if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') {
			count_char++;
		} else if (str[i] >= '0' && str[i] <= '9') {
			count_int++;
		} else {
			count_spe++;
		}
	}
	printf ("So ky tu la chu cai la: %d\n",count_char);
	printf ("So ky tu la chu so la: %d\n",count_int);
	printf ("So ky tu dac biet la: %d\n",count_spe);
	
	return 0;
}
