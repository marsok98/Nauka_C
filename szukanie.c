#include<stdio.h>
#include<string.h>


int main(){
	char slowo[]="cos";
	char tab[]="aaasxdcxx";
	int d_s = strlen(slowo);
	int d_t = strlen(tab);
	int i=0;
	int j=0;
	int licznik = 0;
	poczatek:
	while(i<d_s && j<d_t){
		
		
			if(tab[j]==slowo[i]){
				printf("pasuje\n");

				if(i==d_s-1){
					printf("Tab\n");
					licznik++;
					i=0;
					j++;
					goto poczatek;
					
					
				}
				i++;
			
            
            }else{
             	printf("Niepasuje\n");
             	i=0;
            }
             
		j++;
		
			
				
		
		
	}
	if(licznik!=0)
		printf("ilosc wystapien slowa to : %d\n",licznik );
	else
		return -1;

}