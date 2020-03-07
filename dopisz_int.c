#include <stdio.h>
#define LENGHT 10

int main(){
	int tab1[]={0,1,2,3,4,5,6,7,8,9};
	int tab2[]={1,9,9,9,9,9,9,9,9,8};
	
	int i,k;

	for(i=0, k=10;k<20;k++,i++)
		tab1[k]=tab2[i];
	printf("Wypisanie wszystkich cyferek\n");
	for(k=0;k<20;k++)
		printf("%d ",tab1[k]);
	printf("\n");


}