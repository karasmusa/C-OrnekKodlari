#include<stdio.h>
#include<string.h>

int main () 

{
	FILE *filep;
	char tampon[256];
	filep=fopen ("yaz.text","r"); //"r" komutu read k�salt�lmas� yani yaz.text yaz�lan ekran� yazd�r�yor.//
	
	if (filep==NULL)
	{
		printf("Dosya acilmadi");
		
	}
	else 
	printf("Dosya acildi");
	{
	
		fgets(tampon,256,(FILE*) filep);        /*(standart input*/
		printf("Okunan Bilgisi:%s",tampon);
		fgets(tampon,256,(FILE*) filep);        /*(standart input*/
		printf("Okunan Bilgisi:%s",tampon);
		fclose(filep);
  		
	}
	
}
	
