#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define DL 81
struct daneos {
	char *imie;
	char *nazwisko;
	int litery;
};

void pobierz(struct daneos *);
void oblicz(struct daneos *);
void pokaz(const struct daneos *);
void wyczysc(struct daneos *);
char *wczytaj(char *z, int ile);

int main(void){
	struct daneos osoba;
	pobierz(&osoba);
	oblicz(&osoba);
	pokaz(&osoba);
	wyczysc(&osoba);

	return 0;

}

void pobierz (struct daneos *wsk){
	char temp[DL];
	printf("Podaj swoje imie\n");
	wczytaj(temp,DL);
	//alokacja pamieci dla lancucha
	wsk->imie = (char *) malloc(strlen(temp)+1);
	//kopiuj lancuch do zaalokowanej pamieci
	strcpy(wsk->imie,temp);
	printf("Podaj swoje nazwisko\n");
	wczytaj(temp,DL);
	wsk->nazwisko = (char *) malloc(strlen(temp)+1);
	strcpy(wsk->nazwisko,temp);
}

void oblicz (struct daneos *wsk){
	wsk->litery = strlen(wsk->imie) + strlen(wsk->nazwisko);

}

void pokaz (const struct daneos * wsk)
{
	printf("%s %s, Twoje imie i nazwisko skladaja sie z %d liter. \n",wsk->imie,wsk->nazwisko,wsk->litery);
}

void wyczysc(struct daneos * wsk){
	free(wsk->imie);
	free(wsk->nazwisko);

}

char *wczytaj(char *z, int ile) {
	char *wynik;
	char *tutaj;
	wynik = fgets(z,ile,stdin);
	if(wynik){
		tutaj=strchr(z, '\n');  //szukamy nowego wiersza
		if(tutaj) // jesli adres jest rozny od NULL
			*tutaj = '\0'; //zamieniamy znak nowego wiersza na pusty
		else
			while(getchar() != '\n')
				continue;

	}
	return wynik;
}