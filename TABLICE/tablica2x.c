#include <stdio.h>
#include <stdlib.h>
 void dane(int wym_y,int wym_x, int **t);

int main(){
	int wym_y,wym_x;
	int i,j;
	printf("Podaj liczbe wierszy: ");
	scanf("%d",&wym_y);
	printf("\nPodaj liczbe kolumn: ");
	scanf("%d",&wym_x);

	

	int **t;

	t = malloc(wym_y*sizeof(int *));
	if(t == NULL){
		printf("Nie mozna przydzielic pamieci\n");

	}
	for(i =0; i<wym_y; i++)
	{
		t[i] = malloc(wym_x * sizeof(int));
		if( t[i] == NULL){
			printf("Nie mozna przydzielic pamieci\n");
		}
	}

	
	
	for(i =0; i< wym_y;i++){
		for(j=0;j<wym_x;j++){
			printf("%d  ",t[i][j]);
		}
		printf("\n");

	printf("\n");}
	printf("Do jakiej komorki chcialbys sie odwolac\n");
	scanf("%d %d",&i,&j);
	printf("%d\n",t[i][j]);


		free(t[i]);
		free(t);
	
	
	return 0;}
	void dane(int wym_y,int wym_x, int **t){

		int i,j;

		for(i=0; i<wym_y; i++)
			for(j=0; j<wym_x;j++)
				t[i][j] = i*j;
	}




