#include <stdio.h>
#include <assert.h>



int main(){
	
   struct ab {int a;int b;};
   struct ab *s;
   struct ab zsm;
   s=&zsm;
   s->a=3;
   s->b=4;


printf("%d   %d\n",s->a,s->b);



	


/*int i;

	assert(((*argv[1])=='a') && ((*argv[2]) == 'b'));
	printf(" Wszystko jest okej\n");
	printf("Adres argv1 to %p",argv[1]);
	return 0;

*/


}