#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

	char slowo[6];
	printf("Teraz podaj slowo\n");
	scanf("%s",slowo);
	int i =0;
	int x=0;
	x=4;
	while(slowo[i]==slowo[x]){
		i++;
		x--;
		
		if(x==i){
			printf("Udalo sie wykonac petle to \n");
		}
	}

		
	
	

}