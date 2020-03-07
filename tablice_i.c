#include <stdio.h>

int main(){


	int i =0;
	int tab[15];

	for(;i<15;i++){
		tab[i]=i;
	}

	for(i=0;i<15;i++){
		printf("%d\n",tab[i] );
	}
}