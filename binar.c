#include<stdio.h>

int main(){


	long long int tab[10];
	printf("%ld\n",sizeof(tab) );
	int n;
	scanf("%d",&n);
	int do_binar(n){
		int r;
		r=n%2;
		if(n>=2){
			do_binar(n/2);
		}
		putchar(r==0?'0':'1');
		return 0;	
	}

	do_binar(n);
	printf("\n");


}