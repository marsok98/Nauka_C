#include<stdio.h>
#include<stdlib.h>
#define ROZMIAR 5
int dlugosc_napisu(char *str);
int dlugosc_tablicy(char str[]);
int wartosc_najwieksza(int tab[]);
int main(){
 /*Zadanie pierwsze */	
	int i =7, *p=&i, *t[10], **q1;
	
/*	q1=&i; To nie przejdzie bo q1 to jest wskaznik na wskaznik 
wiec to jest o poziom za mało.   */            
	q1=&t[1]; // To działa bo t to tablica wskaźników i do q1 dopisujemy adres pierwszego wskaznika w tej tablicy
    q1=&p;    //To również zadziała 


	//q1=&(&i);  nie zadziała to

	//q1 = p; //Nie zadziała

	q1=&p; 
	t[5]=&i; // to jest tablica wskaznikow wiec do 5 wskaznika dopisuje adres i

	//q1=*t[5];  // nie zadziała bo to jest wartosc w 6 komorce tej tablicy
	p=t[5];    //zadziała bo to jest adres ktory jest przechowywany w tablicy wskaznikow i jest dopisane do wskaznika p  

	q1=&t[5];  //zadziala bo do wskaznika na wskaznik dopisujemy adres wskaznika w tablicy wskaznikow
	//q1=&t;    //Nie zadziała  
	q1=t;       //Bedzie dzialac bo t to &t[0]
	q1++; 

	/*Zadanie drugie*/

	int liczby[ROZMIAR]={3,8,10,3,9};
	int *wsk1, *wsk2;
	wsk1=liczby;   //inaczej &liczby[0]
	wsk2=&liczby[3];

	printf("a) %d\n",liczby+2==&liczby[2]);   //1
	printf("b) %d\n",*(liczby+2)==liczby[2]); //1
	printf("c) %d\n",*(liczby+1));  //8
	printf("d) %d\n",*liczby+2);  //bierzemy wartosc z &liczby[0] i dodajemy 2 otrzymujemy 5
	printf("e) %p\n",liczby);     //dostaniemy &liczby[0]
	printf("f) %d\n",*wsk1);      //3
	printf("g) %d,%p\n",*wsk1++,wsk1); // napewno 3 a potem nie wiadomo kiedy zwiekszy sie wskaznik
	printf("h) %d,%p\n",*++wsk1,wsk1); // 8 adres a2
	printf("i) %d\n",(*wsk2)++); // wyswietli 3 a potem doda 1 czyli w tablicy bedzie 4
	printf("j) %d\n",wsk1+4==&liczby[4]); //1
	printf("k) %d\n",wsk2-2!=&liczby[1]); // to jest sobie rowne wiec to falsz
	printf("l) %d\n",*--wsk2);            // 10
	printf("m) %ld\n",wsk2-wsk1);       
	printf("n) %d\n",wsk2==wsk1);    //0
	printf("o) %d\n",*wsk2==*wsk1);
	printf("%p %p\n",wsk1,wsk2);
	wsk1=liczby+4;
	wsk2=liczby;
	printf("wsk1-wsk2 = %ld\n",wsk1-wsk2 );
	printf("/****************************************************/\n" );
	
/* Zadanie 3 */
	int *wskA;
	int kulki[2][2] = {12,14,16};
	wskA=&kulki[0][0];    //Zrozumiale
	wskA=kulki[0];        //To jest ze sobą równoważne
	/* Wyjasniajac kulki[0] jest adresem obiektu o rozmiarze int a kulki adresem obiektu o rozmiarze 2 int 
	kulki[0] to adres kulki[0][0]*/
	
	printf("%d\n",*wskA);         
	printf("%d\n",*(wskA+2));

	int *wskB;
	int pilki[2][2]={{12},{14,16}};
	wskB=pilki[0];
	printf("%d\n",*wskB);         
	printf("%d\n",*(wskB+2));

/*Zadanie 4*/
	printf("Zadanie 4\n");
	int (*wsk4A)[2];            //wskaznik do 2 elementowej tablicy int
	int kulki4[2][2]={12,14,16};
	wsk4A=kulki4;
	printf("a) %d\n",**wsk4A);
	printf("   %d\n",**(wsk4A+1));


	printf("Zadanie 5\n");

	char a[10]="0123456789";
	char *pa;
	char x, y, z;

	pa = a;
	printf("%c\n",*pa);
	pa++;
	printf("%c\n",*pa);
	//a++; //Błąd bo tablicy nie można przesunąć
	//a=pa //nie mozna do tablicy dopisac wskaznika
	printf("%c\n",*pa++);
	printf("%c\n",*pa);
	printf("%c\n",(*pa)++);  //wyswietli sie dwa a potem ten element zwiekszy sie o 1
	printf("%c\n",a[2]);     //ten element wynosil 2 a teraz wynosi 3
	x=*pa;
	y=*pa++;
	z=*++pa;
	printf("%c, %c, %c\n",x,y,z);
	printf("%c\n",*(pa-3 ));
	printf("Cala zawartosc tablicy to: \n");
	for(int i=0;i<=10;i++){
		printf("%c ",a[i]);
	}
	printf("\n");

	printf("Zadanie 7\n");
	int *zPtr;
	int *aPtr;
	void *sPtr = 0;
	int liczba, k;
	int q[5] = {1,2,10,4,5};
	zPtr = q;

	++aPtr;   //wskaznik nie jest zainicjowany wiec przejdziemy na nastepna komorke pamieci
	//Aby pobrac pierwszy element tablicy, nalezy skorzystac z instrukcji:
	liczba = *zPtr;
	printf("%d\n",liczba );
	//Przypisanie trzeciego elementu tablicy uzyskuje sie przez:

	//liczba=*zPtr[2];// to nie dziala bo skoro samo zPtr oznacza adres na pierwszy element 
	//to uzywajac *zPtr bierzemy wartosc i to wyglada *&zPtr[0]
	//a skoro zPtr[2] to juz jest wartosc to nie musimy brac gwiazdki
	liczba=zPtr[2]; //ewentualnie mozna zapisac to jako *(zPtr+2)
	printf("%d\n",liczba );

	//Wydrukowanie calej zawartosci tablicy
	for(k=0; k<5;k++)          //musu byc tylko mniejsze
		printf("%d\n",zPtr[k]);
	//Przypisanie wartosci wskazywanej przez sPtr zmiennej liczba
	 //liczba = *sPtr;  // probujemy do liczby wpisac wartosc ktora jest pod adresem zerowym, zrzut pamieci dodatkowo void nie pasuje

	 //++q; // nie mozna przesuwac tablicy ale
	 ++zPtr; // to juz mozna bo to jest wskaznik

	 printf("Zadanie 14\n");
	 char *b;
	 for(b = "TNT"; *b; b++)      //*b w petli for oznacza ze bedzie kontynuowac dopoki nie trafi na pusty znak
	 	printf("%c\n",*b-1);
	 printf("\n");

	 printf("Zadanie 15 dlugosc_napisu\n");
	 char *napis = "Augustyniak";
	 printf("%d\n",dlugosc_napisu(napis));

	 printf("Teraz wersja z napisem w tablicy\n");
	 char napis_tab[]="Augustyniak";
	 printf("%d\n",dlugosc_tablicy(napis_tab));

	 printf("Zadanie 16. wyszukiwanie elementu najwiekszego\n");
	 int tab_int[]={12,24,2,4,-1,6};
	 printf("%d\n",wartosc_najwieksza(tab_int));
	
}

int wartosc_najwieksza(int tab[]){
	int *p;
	int max;
	p=tab;
	for(max=*p;*p;p++){
		if(*p>max){
			max=*p;
		}
	}
	return max;
}



int dlugosc_napisu(char *str){
	int dlugosc =0;
	for(;*str;str++){
		dlugosc++;
	}
	return dlugosc;

}

int dlugosc_tablicy(char str[]){
	int dlugosc = 0;
	for(;str[dlugosc];dlugosc++);
	return dlugosc;
}

