#include <stdio.h>
#include<string.h>
#define LENGHT 30



int main() {
	void dopisz(char *a,char *b){
		int dlugosc_a = strlen(a);
		int dlugosc_b = strlen(b);
		int i=0;
		int j = 0;
		if(dlugosc_b+dlugosc_a>LENGHT){
			printf("Nie moge przepisac\n");
		}else{
			for(;i<dlugosc_b;i++){
				*(a+dlugosc_a+i)=*(b+i);
			}
			printf("Wyswietlam cala tablice\n");
			for(;j<dlugosc_a+dlugosc_b;j++){
				printf("%c",a[j] );
			}
			printf("\n");

		}


		
	}
	
	char a[LENGHT]="first";
	char b[LENGHT]="druginapi";
	dopisz(a,b);

	
}