#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


int main(int argc, char *argv[]){
	int i,moj_int;
	moj_int=*argv[1];
	int *tablica_liczb;

	tablica_liczb =(int*) calloc(moj_int,sizeof(int));
	printf("Zaraz zobaczysz jak wypelnie tablice\n");
	printf("To jest w moj int: %d a to jest w tablicy %s\n",moj_int,argv[1]);


	for(i=1;i<=moj_int;i++){
		tablica_liczb[i]=i;
		printf("%d  ",tablica_liczb[i]);
	}





}