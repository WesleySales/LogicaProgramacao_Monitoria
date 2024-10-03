
# Exercícios - Variáveis e Operadores Aritméticos (C)

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
F = C 	imes rac{9}{5} + 32
\]
- **Exemplo de resposta**:
<details>
  <summary>Clique aqui para ver a solução</summary>

```c
#include <stdio.h>

int main() {
    float celsius = 25;
    float fahrenheit = celsius * 9 / 5 + 32;
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

## 6. Cálculo de Volume de um Cilindro
- **Descrição**: Solicite o cálculo do volume de um cilindro, dado o raio da base e a altura. A fórmula é:  
\[
V = \pi 	imes r^2 	imes h
\]
- **Exemplo de resposta**:
<details>
  <summary>Clique aqui para ver a solução</summary>

```c
#include <stdio.h>
#include <math.h>

int main() {
    float raio = 3, altura = 5;
    float volume = M_PI * pow(raio, 2) * altura;
    printf("Volume do cilindro: %.2f\n", volume);
    return 0;
}
```
</details>

## 7. Verificação de Par ou Ímpar
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
