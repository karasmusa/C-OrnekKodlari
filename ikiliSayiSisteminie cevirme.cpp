#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()


{
int sayi;
char ikili[8]={};
char kalan[1];

printf("sayi giriniz:");
scanf("%d",&sayi);
while(sayi>0)
{
	if(sayi%2==0) kalan[0]='0';
	else  kalan[0]='1';
	strncat(ikili,kalan,1); // 1 ikiliye kalandan ka� karakter eklememizi s�yledi
	
	
	sayi=sayi/2;
}
strrev(ikili);   //strrec:ikilide ne yaziyorsa tersten ba�lat�yor.
printf("Sayinin ikili G�sterimi:%s",ikili);
	return 0;
}
