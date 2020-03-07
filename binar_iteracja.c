#include<stdio.h>

int silnia(n){

	int wynik=1;
	for(int i =n;i>0;--i)
		wynik=wynik*i;
	return wynik;
}
 int main(){
	int n;
	scanf("%d",&n);
	int r;
	printf("Silnia z %d to %d \n",n,silnia(n));
	while(n>0){
		r=n%2;
		n=n/2;
		printf("%d",r);
	}
}