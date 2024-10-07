
# Variáveis e Operadores Aritméticos 

### 1. O que são variáveis:

Na programação, uma variável é um espaço na memória do computador que armazena valores ou expressões, e que pode ser alterado durante a execução do programa:
- A cada variável é atribuído um nome descritivo, ou identificador, que se refere ao valor salvo 
- As variáveis podem ser globais (quando declaradas fora do escopo de alguma função/estrutura) ou locais (quando declaradas no escopo de uma função)
- As variáveis podem ser números, textos ou valores booleanos 
- A cada atualização do valor, substitui-se o valor anterior pelo novo valor


![image](https://github.com/user-attachments/assets/42926a16-cec3-4a37-900d-95cf48ee92e6)

Uma característica da linguagem C é que não existe o tipo de variável String (cadeia no portugol), mas é possível trabalhar com String utilizando uma cadeia de caracteres como **char[50]**.

### 2. Declaração de Variáveis: 
A estrutura de declaração de variáveis é bem simples: **Tipo da Variável** + **Nome/Identificador**. Mas é preciso se atentar a alguns detalhes
- **Escolha um tipo de variável de acordo com o problema**: *float e double aparentemente são a mesma coisa, porém double reserva um espaço maior em memória que em algumas casos pode ser desnecessário.
- Defina o nome de forma coerente para que qualquer um seja capaz de entender do que se trata sua variável só de ler. Não declare sua variável como **'X ou Y'**, isso torna a leitura confusa para terceiros e até para você futuramente.

```c
    //Calcula a media entre 3 notas de um aluno;
    int x = 10; y = 7, z = 8;
    float h = (x + y + z) / 3.0;
    printf("A média é: %.2f\n", h);

    //Calcula a media entre 3 notas de um aluno;
    int nota1 = 10, nota2 = 7, nota3 = 8;
    float media = (nota1 + nota2 + nota3) / 3.0;
    printf("A média é: %.2f\n", media);
}
```
É natural pensar que por ser um problema pequeno isso não interfere e, tendo em vista o apenas o resultado, realmente não interfere. Os dois códigos funcionam.
Mas imagine uma aplicação real e robusta cheia de variáveis 'x' e 'y', quanto tempo seria gasto apenas para decifrar o funcionamento... Portando comece a exercitar essa boa prática desde já.
-- Bônus: utilize comentários.

## Exercícios

## 1. Cálculo da Média
- **Descrição**: Solicite ao aluno que crie um programa que leia três números inteiros e calcule a média aritmética entre eles.
- **Exemplo de resposta**:
<details>
  <summary>Clique aqui para ver a solução</summary>

```c
#include <stdio.h>

int main() {
    int num1 = 10, num2 = 15, num3 = 20;
    float media = (num1 + num2 + num3) / 3.0;
    printf("A média é: %.2f\n", media);
    return 0;
}
```
</details>

## 2. Conversão de Temperatura
- **Descrição**: Criar um programa que converta uma temperatura de Celsius para Fahrenheit. A fórmula é:  
\[
F = C x 1,8 + 32
\]
- **Exemplo de resposta**:
<details>
  <summary>Clique aqui para ver a solução</summary>

```c
#include <stdio.h>

int main() {
    float celsius = 25;
    float fahrenheit = celsius x 1,8 + 32;
    printf("%.2f Celsius é igual a %.2f Fahrenheit\n", celsius, fahrenheit);
    return 0;
}
```
</details>

## 3. Cálculo de Área e Perímetro de um Retângulo
- **Descrição**: Peça para calcular a área e o perímetro de um retângulo, dado seu comprimento e largura.
- **Exemplo de resposta**:
<details>
  <summary>Clique aqui para ver a solução</summary>

```c
#include <stdio.h>

int main() {
    float comprimento = 5, largura = 3;
    float area = comprimento * largura;
    float perimetro = 2 * (comprimento + largura);
    printf("Área: %.2f\n", area);
    printf("Perímetro: %.2f\n", perimetro);
    return 0;
}
```
</details>

## 4. Troca de Valores
- **Descrição**: Escreva um programa que troque os valores de duas variáveis sem usar uma terceira variável.
- **Exemplo de resposta**:
<details>
  <summary>Clique aqui para ver a solução</summary>

```c
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a: %d, b: %d\n", a, b);
    return 0;
}
```
</details>

## 5. Cálculo de Porcentagem
- **Descrição**: Um programa que calcule o valor de um desconto. O usuário deve inserir o preço original de um produto e o percentual de desconto.
- **Exemplo de resposta**:
<details>
  <summary>Clique aqui para ver a solução</summary>

```c
#include <stdio.h>

int main() {
    float precoOriginal = 100, desconto = 10;
    float valorFinal = precoOriginal - (precoOriginal * desconto / 100);
    printf("Preço final com desconto: %.2f\n", valorFinal);
    return 0;
}
```
</details>


## 6. Verificação de Par ou Ímpar
- **Descrição**: Crie um programa que leia um número e determine se ele é par ou ímpar.
- **Exemplo de resposta**:
<details>
  <summary>Clique aqui para ver a solução</summary>

```c
#include <stdio.h>

int main() {
    int num = 7;
    if (num % 2 == 0) {
        printf("%d é par\n", num);
    } else {
        printf("%d é ímpar\n", num);
    }
    return 0;
}
```
</details>
