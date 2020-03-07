#include <stdio.h>

int main(){
	int tab[3];
	int max =0;
	printf("Podaj trzy liczby a ja wyznacze najwieksza\n");
	scanf("%d %d %d",tab,&tab[1],&tab[2]);

	for(int i =0;i<3;i++){
		if(tab[i]>max){
			max=tab[i];
		}
	}
	printf("wyswietlam liczbe najwieksza %d\n",max);
}