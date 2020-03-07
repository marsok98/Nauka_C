#include <stdio.h>
#include <stdlib.h>

int main(){
	int liczba=0;
	printf("Podaj ile chcesz cyfr fibonacciego \n");
	scanf("%d",&liczba);
	//int *tab= (int*) malloc(liczba*sizeof(int));
	//*tab=1;
	//*(tab+1)=1;
	int tab[liczba+1];
	tab[0]=1;
	tab[1]=1;

	
	int i = 2;
	printf("%d  %d  ",tab[i-2],tab[i-1]);

	for(;i<liczba;i++){
		tab[i]=tab[i-1]+tab[i-2];
		printf("%d  ",tab[i]);
	}
	//free(tab);

}