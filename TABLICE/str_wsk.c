#include <stdio.h>
#define DL 20
#define FUNDDL 50

struct fundusze {
	char bank[FUNDDL];
	double bankfund;
	char oszcz[FUNDDL];
	double oszczfund;
};
double suma(double,double);

struct daneos {
	char imie[DL];
	char nazw[DL];
};

struct facet {
	struct daneos person;
	char ulub_jedz[DL];
	char zawod[DL];
	float dochody;
};

int main(){
	struct facet gosc[2] = {
		{{ "Mariusz","Sokolowski"},
		 "kurczak banan",
		 "automatyk",
		 36827.00
		},
		{{"Adrian","Luzniak"},
		"kurczak ryz",
		"programista",
		10000.00
		}
	};

	struct facet *on;  //wskaznik do struktury
	printf("adres #1: %p #2: %p \n",&gosc[0],&gosc[1]);
	on = &gosc[0];
	printf("wskaznik #1 %p #2: %p \n",on,on+1 );
	printf("on->dochody ma wartosc: %.2f  $: (*on).dochody ma wartosc %.2f $\n",on->dochody,(*on).dochody);
	on++;
	printf("on->dochody ma wartosc: %.2f  $: (*on).dochody ma wartosc %.2f $\n",on->dochody,(*on).dochody);
	

	printf("Program nr 2\n");
	double stan_konta = 0;
	scanf("%lf",&stan_konta); //podanie

	struct fundusze Mariusz = {
		"Bank PKO",
		stan_konta,
		"Kasa oszczednosciowa",
		1500.00
	};
	printf("Mariusz posiada w sumie w banku %.2f dolaruf \n",suma(Mariusz.bankfund,Mariusz.oszczfund) );

	return 0;

}
	double suma(double x, double y){
		return x+y;
	}