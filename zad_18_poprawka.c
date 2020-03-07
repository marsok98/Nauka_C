#include <stdio.h>
#include<string.h>
#define LENGHT 10



int main() {
	void dopisz(char*a,char *b){
		int dlugosc_a = strlen(a);
		int dlugosc_b = strlen(b);
		int i=0;
		int j = 0;
		if(dlugosc_b+dlugosc_a+1>LENGHT){
			printf("Nie moge przepisac\n");
		}else{
			for(;i<dlugosc_b;i++){
				*(a+dlugosc_a+i)=*(b+i);
			}
			a[dlugosc_a+i+1]='\0';  //znak konca napisu
			printf("Wyswietlam cala tablice\n");
			for(;*a;a++){
				printf("%c",*a );
			}
			printf("\n");

		}


		
	}
	
	char a[LENGHT]="first";
	char b[LENGHT]="drug";
	dopisz(a,b);

	
}