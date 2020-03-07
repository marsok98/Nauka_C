#include<stdio.h>
#define DLUGOSC 5

int main(){
	int tab[DLUGOSC]={1,2,3,4,6};

	for(int i=0;i<DLUGOSC;i++)
		printf("%d\n",tab[i]);

	


	void funkcja (int tab[]){
		int i=0;
		int temp =0;

		for(i=0;i<DLUGOSC/2;i++){
			temp=tab[i];
			tab[i]=tab[DLUGOSC-i-1];
			tab[DLUGOSC-i-1] = temp;
		}
	}


	funkcja(tab);

	for(int i=0;i<DLUGOSC;i++)
		printf("%d\n",tab[i]);

	return 0;
}