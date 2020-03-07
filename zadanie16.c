#include <stdio.h>
#define a 10

int main(){	
	
	char tab_znakow[]="hugr8958947676768888880%&$26d8973tgjeden9031049";
	scanf("%9s",tab_znakow); //pobiera tylko 9 pierwszych znakow
	int dlugosc=0;
	int ilosc=0;
	for(;tab_znakow[dlugosc];dlugosc++)
		if(tab_znakow[dlugosc]>=65 && tab_znakow[dlugosc]<=122)
			ilosc++;

	printf("Ilosc liter  to %d\n",ilosc );

	char *wsk=tab_znakow;
	ilosc=0;
	for(dlugosc = 0;*(wsk+dlugosc);dlugosc++)   /*wypisanie tablicy na ekran za pomoca wskaznikow*/
		printf("%c",*(wsk+dlugosc));


	int dlugosc_napisu(char *wsk){          //zmierzenie dlugosci za pomoca wskaznikow
		printf("Wyswietlam dlugosc \n");
		int i;
		for(i=0;*(wsk+i);i++){}
		printf("%d\n",i);

	}
	dlugosc_napisu(wsk);

	printf("Wyswietlam dlugoscfgfg \n");
	for(dlugosc=0;*(tab_znakow+dlugosc);dlugosc++){}
	printf("%d\n",dlugosc);


}








	/*
	int tab[]={1,2,3};
	int *p;
	p=tab;
	int dlugosc=0;
	for(;tab[dlugosc];dlugosc++){
		
	}
	
	printf("%d\n",dlugosc );

/*
	for(max=tab[i];i<a;i++){
		if(tab[i]>max){
			max=tab[i];
	
		}
	}
	printf("%d\n",max );
	*/
