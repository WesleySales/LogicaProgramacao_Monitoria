#include <stdio.h>
#include <stdlib.h>

//calculo de consumo medio de combustivel
//Em uma viagem de 120km, Paulo gastou 8 litros de gasolina. Qual foi o consumo médio (KM/l)

int main(){
	float distanciaPercorrida;
	float combustivelConsumido;
	float consumoMedio;
	
	distanciaPercorrida = 120;
	combustivelConsumido = 8;
	consumoMedio = distanciaPercorrida/combustivelConsumido;	

	printf("O consumo medio do carro de Paulo foi %.2f KM/l", consumoMedio);
}