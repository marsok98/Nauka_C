#include <stdio.h>
#include <string.h>

char * wczytaj(char * z, int ile);

#define MAXTYT 40
#define MAXAUT 40
#define MAXKS 100

struct ksiazka 
{
	char tytul[MAXTYT];
	char autor[MAXAUT];
	float wartosc;
};

int main(void){
	struct ksiazka bibl[MAXKS];
	int licznik = 0;
	int index = 0;
	printf("Podaj tytul ksiazki.\n");
	printf("Aby zakonczyc nacisnij enter \n");
	while(licznik < MAXKS
		   && wczytaj(bibl[licznik].tytul,MAXTYT) != NULL
		   && bibl[licznik].tytul[0] != '\0'){
		printf("Podaj autora\n");
		wczytaj(bibl[licznik].autor,MAXTYT);
		printf("Teraz podaj wartosc\n");
		scanf("%f",&bibl[licznik++].wartosc);
		while(getchar() != '\n')
			continue;
		if (licznik<MAXKS)
		{
			printf("Podaj kolejny tytul\n");
		}
	}
	if (licznik>0){
	
		printf("Oto lista Twoich ksiazek:\n");
		for (index = 0; index < licznik; index ++){
			printf("%s, autor: %s,cena: %.2f z1\n", bibl[index].tytul,
				bibl[index].autor, bibl[index].wartosc);}
	}else{
		printf("Zadnych ksiazek no szkoda\n");
	}
	return 0;		
}


char  *wczytaj(char *z, int ile){
	char  *wynik;
	char *tutaj;
	wynik = fgets(z, ile, stdin);
	if(wynik){
		tutaj = strchr(z, '\n');
		if(tutaj)
			*tutaj = '\0';
		else 
			while(getchar() != '\n')
				continue;
	}
	return wynik;
}
