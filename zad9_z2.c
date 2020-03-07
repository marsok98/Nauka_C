#include <stdio.h>

int main(){
	int n = 5;
	int x = 2;
	int y;
	
		for(int i = 0; i<=n-2;i++){
			x=x+x;	
		}
	printf("Wynik z 2^5 dodawanie: %d\n",x );
	x=2;
	y=1;
	for(int j = 0;j<n;j++){
		y=y*x;
	}

printf("Wynik z 2^5 mnożenie: %d\n",y );

}