#include <stdio.h>
#define FUNDDL 50
struct fundusze {
	char bank[FUNDDL];
	double bankfund;
	char oszcz[FUNDDL];
	double oszczfund;
};

double suma(const struct fundusze *); //argumentem funkcji jest wskaznik

int main(void){
	double stan_konta = 0;
	printf("Podaj twoj stan konta\n");
	scanf("%lf",&stan_konta); //podanie

	struct fundusze Mariusz = {
		"Bank PKO",
		stan_konta,
		"Kasa oszczednosciowa",
		1500.00
	};
	struct fundusze *wsk;
	wsk=&Mariusz;
	printf("Posiadasz w banku %.2f \n",suma(wsk)); //zamiast wsk mozna zapisac &Mariusz i bedzie ok
	return 0;	
}

double suma(const struct fundusze * pieniadze){
	return(pieniadze->bankfund + pieniadze->oszczfund);
}

/* Funkcja suma przyjmuje jeden argument, ktorym jest wskaznik(pieniadze) do struktury typu fundusze. 
Przekazanie jej adresu &Mariusz sprawia że wskaznik pieniadze wskazuje na strukture Mariusz. 
Wartosci Mariusz.bankfund i Mariusz.oszczfund sa uzyskiwane za pomoca operatora ->
Poniewaz funkcja nie zmienia zawartosci wskazywanej struktury, deklaruje ona pieniadze jako wskaznik do stalej

Funkcja suma() ma rowniez dostep do nazw bankow choc ich nie wykorzystuje. Aby otrzymac adres struktury trzeba skorzystac z operatora &
Bo w odroznieniu od tablicy nazwa struktury nie jest synonimem jej adresu */