#include <stdio.h>

#define ROZMIAR 10

int main(){
	float liczby[ROZMIAR]={0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
	float *nPtr;
	int i;

	printf("c) Wypisanie tablicy normalnie ale z jednym miejscem po przecinku \n");
	for(i=0;i<ROZMIAR;i++)
		printf("%.1f ",liczby[i]);
	printf("\n");
	nPtr=liczby;
	nPtr=&liczby[0];
	printf("\n");
	printf("e) Wydrukowanie tablicy korzystajac ze wskaznika nPtr(przesuniecie)\n");
	for ( i = 0; i < ROZMIAR; i++)
		printf("%.1f ",*(nPtr+i));
	printf("\n\n");
	printf("f) Wydrukowanie tablicy korzystajac z nazwy tablicy ktora traktujemy jako wskaznik\n");
	for(i=0;i<ROZMIAR;i++)
		printf("%.1f ",*(liczby+i));
	printf("\n\n");
	printf("g) Wydrukowanie tablicy korzystajac z indeksowania wskaznika \n");
	for(i=0;i<ROZMIAR;i++)
		printf("%.1f ",nPtr[i]);
	printf("\n\n");
	printf("h) Pokazac czwarty element tablicy za pomocą wszystkich tych sposobow\n");
	printf("%.1f %.1f %.1f %.1f \n",liczby[3],*(nPtr+3),*(liczby + 3),nPtr[3]);
	printf("\n\n");
	printf("i) Pokazac nPtr+8\n  %.1f %.1f \n",nPtr[8],*(nPtr+8));
	nPtr=&liczby[5];
	nPtr-=4;
	printf("j) nPtr-=4\n %.1f\n",*nPtr);



}