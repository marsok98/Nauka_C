#include <stdio.h>
#include<string.h>


int main(){
	char slowo[]="oookooo";
	int i =0;
	int dlugosc = strlen(slowo);
	
	 int m=dlugosc-i-1;
	while(slowo[i]==slowo[m]){
		m--;
		i++;
		if(i==m){
			printf("Podane slowo jest tym czyms \n");
			return 0;
		}

		
	}
	printf("Uwaga powyzsze slowo nie jest tym\n");
	
	
}