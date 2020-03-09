#include <stdio.h>
#include <stdlib.h>
#define rozmiar 25
int main()
{
    int nr_wiersza=4; //i-ty wiersz
    int k=0;
    int a=nr_wiersza;
 
    //Wypełnianie tablicy kolejnymi liczbami
    int t=0; //Zmienna pomocniczna używana przy pętlach
    int tab[rozmiar];
    for(t=0;t<rozmiar;t++){
        tab[t]=t;
    }
    tab[10]=
    //Koniec
 
    while(k<nr_wiersza){
        k++;
        a=a+(nr_wiersza-k);
        //zamienna a finalnie będzie indeksem pierwszego elementu i-tego wiersza
    }
    //Dla piramidy pascala istnieje zależność, że ilość elementów
    //w wierszu to numer wiersza +1
   
    //Wyświetlanie
    for(t=0;t<=nr_wiersza;t++){
        printf("%d ",tab[a+t]);
    }
 
    return 0;
}
