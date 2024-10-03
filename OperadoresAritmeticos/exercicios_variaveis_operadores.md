
# Exercícios - Variáveis e Operadores Aritméticos

## 1. Cálculo da Média
- **Descrição**: Solicite ao aluno que crie um programa que leia três números inteiros e calcule a média aritmética entre eles.
- **Exemplo**:
```java
int num1 = 10, num2 = 15, num3 = 20;
double media = (num1 + num2 + num3) / 3.0;
```

## 2. Conversão de Temperatura
- **Descrição**: Criar um programa que converta uma temperatura de Celsius para Fahrenheit. A fórmula é:  
\[
F = C 	imes rac{9}{5} + 32
\]
- **Exemplo**:
```java
double celsius = 25;
double fahrenheit = celsius * 9 / 5 + 32;
```

## 3. Cálculo de Área e Perímetro de um Retângulo
- **Descrição**: Peça para calcular a área e o perímetro de um retângulo, dado seu comprimento e largura.
- **Exemplo**:
```java
double comprimento = 5, largura = 3;
double area = comprimento * largura;
double perimetro = 2 * (comprimento + largura);
```

## 4. Troca de Valores
- **Descrição**: Escreva um programa que troque os valores de duas variáveis sem usar uma terceira variável.
- **Exemplo**:
```java
int a = 5, b = 10;
a = a + b;
b = a - b;
a = a - b;
```

## 5. Cálculo de Porcentagem
- **Descrição**: Um programa que calcule o valor de um desconto. O usuário deve inserir o preço original de um produto e o percentual de desconto.
- **Exemplo**:
```java
double precoOriginal = 100, desconto = 10;
double valorFinal = precoOriginal - (precoOriginal * desconto / 100);
```

## 6. Cálculo de Volume de um Cilindro
- **Descrição**: Solicite o cálculo do volume de um cilindro, dado o raio da base e a altura. A fórmula é:  
\[
V = \pi 	imes r^2 	imes h
\]
- **Exemplo**:
```java
double raio = 3, altura = 5;
double volume = Math.PI * Math.pow(raio, 2) * altura;
```

## 7. Verificação de Par ou Ímpar
- **Descrição**: Crie um programa que leia um número e determine se ele é par ou ímpar.
- **Exemplo**:
```java
int num = 7;
boolean isPar = (num % 2 == 0);
```
