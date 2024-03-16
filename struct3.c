#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char takimAdi[30];
	int kurulus;
}takim;

typedef struct {
	char adSoyad[30];
	int yas;
	takim takim;
}futbolcu;

int main(int argc, char *argv[]) {
	takim tk;
	strcpy(tk.takimAdi,"Samsun Spor");
	tk.kurulus = 1965;
	
	futbolcu ft;
	strcpy(ft.adSoyad,"Burak Calik");
	ft.yas = 30;
	ft.takim = tk;
	
	printf("Bilgiler : %s %d",ft.takim.takimAdi,ft.takim.kurulus);
	return 0;
}
