#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	char ifade[100];
	time_t start,end;
	
	printf("Metni Girin Lutfen:");
	time(&start);   //demek oluyor  ki s�reyi ba�lat
	gets(ifade);  //scanf("%s",&ifade) ile aynidir
	time(&end);  // demek oluyor ki s�reyi bitir
	
	printf("%.2f saniyede yazdiniz.",difftime(end,start)); //difftime ise end -start demek	
	return 0;
}
