#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
	char ilk[50],ikinci[50];
	printf("ilk ifadeyi girin");
	gets(ilk);
	printf("ikinci ifadeyi giriniz:");
	gets(ikinci);
	if(strcmp(ilk,ikinci))  // strcmp=parantez i�inde yazilan metinleri farkl� olup olmad���n� kontrol ediyor
	printf("Metinler farkli");
	else 
	printf("Metinler ayni");
	return 0;
}
