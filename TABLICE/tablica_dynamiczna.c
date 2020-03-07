#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *wybor;
	int rozmiar_tablicy, i,j;
	


	printf("Ile liczb chcesz wprowadzic: ");
	scanf("%d",&rozmiar_tablicy);
	printf("\n");

	 int*tablica_liczb=(int*) calloc(rozmiar_tablicy,sizeof(int));

		for(i=0,j=0; i<rozmiar_tablicy; i++ ,j++){
			tablica_liczb[i]=i+50;
			printf("%d  ",tablica_liczb[i]);
			if(j==9){
				printf("\n");
				j=0;
			}


		}
	if (i==rozmiar_tablicy)
	{
		printf("\n");
		printf("Podaj do jaki numer chcesz wyswietlic\n");
		scanf("%d",wybor);
		printf("%d\n",tablica_liczb[*wybor]);
	}
	free(tablica_liczb);
}
