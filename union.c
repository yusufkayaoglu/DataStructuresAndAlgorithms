#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union ogrenci{
	char isim[20];
	int no;
	float ort;
};

typedef union {
	char isim[20];
	int yas;
	
}ogretmen;
int main(int argc, char *argv[]) {
	printf("Boyut : %ld Byte \n",sizeof(union ogrenci));
	
	union ogrenci o;
	strcpy(o.isim,"Yucel");
	printf("Isim: %s \n",o.isim);
	
	o.no = 148;
	printf("No: %d \n",o.no);
	
	o.ort = 85.5;
	printf("Ortalama: %f \n",o.ort);
	
	//Typedef ile kullaným
	ogretmen ogrt;
	strcpy(ogrt.isim,"Ismail");
	
	printf("Ogretmen Adi: %s\n",ogrt.isim);
	
	ogrt.yas = 45;
	printf("Ogretmen yasi: %d",ogrt.yas);
	
	
	return 0;
}
