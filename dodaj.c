#include<stdio.h>

int main(){
	int a =25;
	int b =25;
	int pomnoz(int a,int b){
		
		int i;
		int wynik=0;
		for(i=0;i<b;i++){
			wynik=wynik+a;
		}
		return wynik;
	}

	printf("%d\n",pomnoz(a,b));

	int y=1;
	int n=4;
	int x =5;
	for(int j =0;j<n;j++){
		y=pomnoz(y,x);}

	printf("%d\n",y );

}