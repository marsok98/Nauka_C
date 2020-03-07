#include<stdio.h>

int main(){
	int i, t_i[15], *t_p1[15], *t_p2[15], *t_p3[15], *t_p4[15];

	for(i=0;i<=14;i++){
		t_i[i]=i;
		printf("t_i[i] %d\n",t_i[i] );
		/*t_p1[i]=i;*/
		t_p2[i]=&i;
		printf("*t_p2[i] %d\n",*t_p2[i] );
		t_p3[i]=&t_i[i];
		printf("*t_p3[i] %d\n",*t_p3[i] );
		t_p4[14-i]=t_i+i;
		printf("*t_p4[14-i] %d\n",*t_p4[14-i] );
		
		printf("koniec pentli nr %d \n",i );
	}

	/*printf("%d\n",t_p1[10]);*/
	printf("%p\n",t_p1[10]);
	printf("%d\n",*(t_p4[10]));
	printf("%d\n",*(t_p2[10]));
	printf("Adres zmiennej i to %p\n",&i );
	printf("%p,%d\n",t_p2[5],*t_p2[5]);
	printf("%p,%d\n",t_p3[5],*t_p3[5]);
	printf(" *(t_i+3) %d\n",*(t_i+3));
	printf("*t_p4[*(t_i+3)] %d\n",*t_p4[*(t_i+3)]);
	printf(" wynik *(t_i+*t_p4[*(t_i+3)]) %d\n",*(t_i+*t_p4[*(t_i+3)]) );


	return 1;
}