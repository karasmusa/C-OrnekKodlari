#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main ()

{
	char dizi[100],kaynak[50],hedef[50];
//	scanf("%s",&dizi);   scanf yerine a�a��daki gibi gets operat�r� kullan�labilir.
	//gets(dizi);   
	//int uzunluk=strlen(dizi);
//	printf("Karakter sayisi:%d",uzunluk);
gets(kaynak);
strcpy(hedef,kaynak);   //strcpy:yani kaynaktakini hedefe kopyala demek 

printf("%s",hedef);
strcat(kaynak,hedef); // string birle�tirme:yani hedefteki stringden kayna�a kopyal�yor ve yeni string kaynakta birle�iyor.
printf("%s\n",kaynak);

	return 0;
	
}
