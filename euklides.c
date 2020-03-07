#include<stdio.h>

int main(){
	int a,b,r;

	printf("Podaj dwie liczby\n");
	scanf("%d %d",&a,&b);
	while(b){
		r = a % b;
		a = b;
		b = r;
	}

	printf("Wyswietlam NWD %d\n",a );
	return 0;

}