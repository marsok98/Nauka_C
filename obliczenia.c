#include<stdio.h>
#include<stdlib.h>
int main(){
	int b=0;
	int x;
	;

	printf("Wyswietlanie tego %d\n",x);
	int p=3%2/4*3+2+(6+2/3==5/2*4)-(2==3)?2-3:3-2;
	printf("%d\n",p);
	int y= 6+2/3 == 5/2*4;
	printf("%d\n",y );
	int z = 3%2/4*3;
	printf("%d\n",z );
	int k =2-(2==3)?-1:1;
	printf("%d\n",k);

	int l=(5/2-(2<=5-3)+5%2%5!=0+2);
	printf(" wynik z zadania 6 jest rowny %d\n",l );

	int j=('x'>'T') ||(!(2==4)||('$'!='G'))?3+4>2&&3<2:2+4<20||2<10;

	printf("Zadanie 7 wynik to %d\n",j );

	int a=13/6/4+5>2==3+8*(b=3%2==1)-(b=7/2);

	printf("Wynik zadanie 8 %d\n",a);
	printf("%d\n",b );



}