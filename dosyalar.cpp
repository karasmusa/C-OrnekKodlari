#include<stdio.h>


int main()  
{
	char isim[30];
	FILE *filep=fopen("yeniDosya.txt","a"); //"w"= burada yani write k�saltmas� w geldi yani dosyaya bir �eyler yaz�lacak yada eklenecek..
												//filep yeni dosyanin tutuldugu yerdir. pointerlarla ilgili
											//"a" komutu ise appen anlam�na gelen kaydet yani dosyay� �al�s�t�rd�ktan sonra ba�ka 
											//bir�ey eklemek istersek eskiside kay�tl� kal�r di�erinin �zerine kal�r..
		printf("Adinizi Giriniz:");  scanf("%s",&isim);
	if (filep==NULL ) //eger dosya bossa 
	{
		printf("Dosya Olusturulamadi\n");
	}
	
	else 
	{
		printf("Dosya Olusturuldu.\n");
		
	}

	fprintf(filep,"%s\n",isim);
	fprintf(filep,"2X2=4\n");
	fclose(filep);
	return 0;
}
