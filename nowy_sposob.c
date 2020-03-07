#include <stdio.h>

int main(){


	int tab[]={1,2,3,4,5,6,7,8,9,4,5,6,7,7,5};
	int rozmiar=sizeof(tab)/4;
	int *wsk=tab;
	int i=0;

	for(i=0;i<rozmiar;i++){
	 printf("%d ",*(wsk+i) );
	}
	 printf("\n");

	char tabs[]="abcdefghijkl";
	char *wsk1 = tabs;
	for(;*wsk1;wsk1++) printf("%c ",*wsk1 );

	}