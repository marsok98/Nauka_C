#include<stdio.h>
#include<string.h>
#define DL 30
struct daneos
{
	char imie[DL];
	char nazw[DL];
	int litery;
};

void pobierz(struct daneos *);
void oblicz(struct daneos *);
void pokaz(const struct daneos *);
char *wczytaj(char *z, int ile);
int main(){
	struct daneos osoba;
	pobierz(&osoba);
	oblicz(&osoba);
	pokaz(&osoba);
	return 0;
}

void pobierz(struct daneos * wst)
{
	printf("Podaj swoje imie\n");
	scanf("%s",wst->imie);
	
	printf("Podaj swoje nazwisko\n");
	scanf("%s",wst->nazw);  //to dziala bo wst->nazw to tablica wiec to jest adres jej pierwszego elementu
}

void oblicz(struct daneos * wst)
{
	wst->litery = strlen(wst->imie)+strlen(wst->nazw);
	*(wst->nazw)="Zmiana";
	

}

void pokaz( const struct daneos * wst)
{
	printf("%s %s, Twoje imie i nazwisko skladaja sie z %d liter \n",wst->imie,wst->nazw,wst->litery);
}

char *wczytaj(char *z,int ile)
{
	char *wynik;
	char *tutaj;
	wynik = fgets(z,ile,stdin);
	if(wynik)
	{
		tutaj = strchr(z,'\n');
		if(tutaj)
		{
			*tutaj = '\0';
		}else
		{
			while(getchar() !='\n')
				continue;
		}
	}
	return wynik;
}