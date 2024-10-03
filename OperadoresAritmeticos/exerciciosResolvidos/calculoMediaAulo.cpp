#include <stdio.h>
#include <stdlib.h>

//Calculo de Media do Aluno

//João realizou 3 provas no semestre e obteve as notas 5, 7 e 9. Crie um algoritmo que calcule a média dele

int main(){
	
	//Declaração de variáveis
	float nota1, nota2, nota3;
	float media;
	
	//Atribuição de valores para as variaveis 
	nota1=5;
	nota2=8;
	nota3=9;
	
	//definição da lógica para calcular a media
	media = (nota1+nota2+nota3)/3;
	
	//exibição do resultado
	printf("A media de Joao foi %.2f",media);	

}
