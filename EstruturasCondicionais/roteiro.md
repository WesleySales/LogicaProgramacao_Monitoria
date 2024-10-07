# Estrutura condicionais

Uma **Estrutura Condicional** é um recurso que permite que o programa execute diferentes ações com base em uma ou algumas condições pré-estabelecidas. As principais estruturas condicionais que vamos trabalhar são **IF, IF-ELSE,SWITCH-CASE" e também os operadores lógicos e relacionais.

![image](https://github.com/user-attachments/assets/20cb1d15-c0e9-4fed-9a9c-604b3ce47ccc)

### IF
A estrutura if permite executar um bloco de código somente se uma condição for verdadeira. A sintaxe é a seguinte:

```c
  if (condicao) {
      // bloco de codigo a ser executado se a condicao for verdadeira
  }
```
```c
  int num = 5;
  if (num > 0) {
    printf("O numero e positivo");
  }
```

No exemplo a condição é atendida, portanto o bloco de código será executado e a mensagem "O numero é positivo" será exibida. Caso o numero passe a valer -1 o bloco não será executado e nada acontecerá.

### IF-ELSE
A estrutura if-else permite executar um bloco de código se a condição for verdadeira e se for falsa executa um segundo bloco de código: 
```c
if (condicao) {
  // bloco de codigo a ser executado se a condicao for verdadeira
} else {
  // bloco de codigo a ser executado se a condicao for falsa
}
```
```c
  int num = -3;
  if (num > 0) {
    printf("O numero e positivo");
  } else {
      printf("O numero e negativo");
  }
```

### IF - ELSE-IF - ELSE 
Também conhecida como estrutura encadeada, serve para controlar o fluxo do programa. Permite que um bloco seja executado caso a condição seja verdadeira. Caso contrário passa para outra condição que também é verificada e por aí vai até que alguma condição seja verdadeira ou, caso nenhuma delas seja atendida, o bloco do ELSE é executado.

```c
  int idade = 32;
  if (idade < 18) {
    printf("Você é menor de idade");
  } else if (idade >= 18 && idade <= 64) {
      printf("Você é adulto");
  } else {
      printf("Você é idoso");
  }
```

### SWITCH - CASE 
Essa estrutura é utilizada para controlar o fluxo do programa com base em um valor específico. Ela permite a comparação do valor de uma variável com várias possibilidades e cada uma destas possibilidades é associada a um bloco de código executável. 

Primeiramente atribuimos o parâmetro para comparação e logo após os cases com seus blocos de código. Importante adicionar o break para o programa pare logo após alguma condição ter sido atendida.

```c
switch (valor) {
case valor1:
  // bloco de código a ser executado quando o valor for igual a valor1
  break;
case valor2:
  // bloco de código a ser executado quando o valor for igual a valor2
  break;
// mais casos podem ser adicionados aqui
default:
  // bloco de código a ser executado caso nenhum dos casos anteriores seja verdadeiro
}
```
```c
  int diaDaSemana = 3;
  switch (diaDaSemana) {
    case 1:
      printf("Domingo");
      break;
    case 2:
      printf("Segunda-feira");
      break;
    case 3:
      printf("Terça-feira");
      break;
    case 4:
      printf("Quarta-feira");
      break;
    case 5:
      printf("Quinta-feira");
      break;
    case 6:
      printf("Sexta-feira");
      break;
    case 7:
      printf("Sábado");
      break;
    default:
      printf("Dia da semana inválido");
  }
```


