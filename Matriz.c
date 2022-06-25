/*Preencher linhas e colunas de acordo com os números reais definidos pelo usuário na faixa de 12.5 a 49.7 
e mostrar em formato de matriz*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
main()
{
	float m[100][100];
	int i,j,lin,col,ordem;
	srand(time(NULL));
	printf("Informe a quantidade de linhas da matriz: ");
	scanf("%d",&lin);
	printf("Informe a quantidade de colunas da matriz: ");
    scanf("%d",&col);
    for(i=0;i<=lin-1;i++)
    	for(j=0;j<=col-1;j++)
    	{
    		m[i][j] = rand()%50;
		}
	
	for(i=0;i<=lin-1;i++)
	{
		for(j=0;j<=col-1;j++)
		{
			printf("%.2f ",m[i][j]);
		}
		printf("\n\n");
	}
}