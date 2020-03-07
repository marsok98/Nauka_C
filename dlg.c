#include<stdio.h>


int dlugosc_napisu(char str[]){
	int dlugosc=0;
	char *p = str;
	for(;*p;p++){
		dlugosc++;
	}
	return dlugosc;
}


int main(){
	char napis[]="coscoscos";
	int tab[10]={49,24,24,5,9,6,80};
	printf("dlugosc tego napisu to  %d\n",dlugosc_napisu(napis));
	int p =0;
	int *wsk = tab;
	int *max = &p;
	int i=0;
	for(i=0;*(wsk+i);i++){
		if(*max<*(wsk+i)){
			*max=*(wsk+i);
		}
	}
	printf("%d\n",p);
	return *max;
}