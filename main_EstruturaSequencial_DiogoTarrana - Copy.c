#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*  exercicio 1
	
	printf("Ola Mundo");


 		
 		exercicio 2
 
	int idade;
 	
 	printf("O numero: ");
 	scanf("%i", &idade);
 	printf("O numero informado foi: %i", idade);
 	
 	
 	
 		exercicio 3
 		
 	int numero1;
 	int numero2;
 	
 	printf("O primeiro numero: ");
 	scanf("%i", &numero1);
 	
 	printf("O segundo numero: ");
 	scanf("%i", &numero2);
 	
 	int calculo;
 	calculo =  numero1 + numero2;
 	
	printf("A soma e: %i ", calculo);
	
	
	
		exercicio 4
	
	int n1, n2, n3, n4;
	float media;
	float media2;
	
	printf("O primeiro numero: ");
 	scanf("%i", &n1);
 	
 	printf("O segundo numero: ");
 	scanf("%i", &n2);
 	
 	printf("O terceiro numero: ");
 	scanf("%i", &n3);
 	
 	printf("O quarto numero: ");
 	scanf("%i", &n4);
 	
 	media = n1 + n2 + n3 + n4;
 	media2 = media /4;
 	
 	printf("A m�dia: %.1f", media2);
 	
 	

		exercicio 5
	
	float metro;
	float conta;
	
	
	printf("O valor de metros e: ");
	scanf("%f", &metro);
	
	conta = metro * 100;
	
	printf("O valor da conversao e %.2f", conta);
	
	
	
		exercicio 6
	
	float pi;
	float raio;
	float area;
	
	printf("O raio e: ");
	scanf("%f", &raio);
	
	pi = 3.14;
	
	area = pi * (raio * raio);
	
	printf("A area e: %.2f", area);
	
	

		exercicio 7
	
	float area;
	float lado;
	
	
	printf("O lado do quadrado e: ");
	scanf("%f", &lado);
	
	area = lado * lado;
	
	printf("A area do quadrado e: %.2f\n", area);
	
	float dobro;
	
	dobro = area * 2;
	
	printf("O dobro da area e: %.2f\n", dobro);
	
	
	
		exercicio 8
	
	float valorHora;
	float horasTrabalho;
	
	printf("Qual e o valor que recebe por hora? ");
	scanf("%f", &valorHora);
	
	printf("Quantas horas de trabalho fez no mes? ");
	scanf("%f", &horasTrabalho);
	
	float salario;
	
	salario = valorHora * horasTrabalho;
	
	printf("O valor do salario e %.2f", salario);
	
	
	
		exercicio 9
	
	float celcius;
	float resultado;
	
	printf("A temperatura em graus fahrenheit e ");
	scanf("%f", &resultado);
	
	celcius = 5 * ((resultado-32) / 9);
	
	printf("A temperatura em graus celcius %.2f", celcius);
	
	
	
		exercicio 10
	
	float fahranheit;
	float resultado;
	
	printf("A temperatura em graus celcius e ");
	scanf("%f", &resultado);
	
	fahranheit = (resultado * 1.8) + 32;
	
	printf("A temperatura em graus fahranheit %.2f", fahranheit);
	
	
	
		exercicio 11
	
	int inteiro;
	int inteiro2;
	float real;
	
	printf("O primeiro numero inteiro e: ");
	scanf("%i", &inteiro);
	
	printf("O segundo numero inteiro e: ");
	scanf("%i", &inteiro2);
	
	printf("O primeiro numero real e: ");
	scanf("%f", &real);
	
	float conta1;
	float conta2;
	float conta3;
	
	conta1 = (inteiro * 2) * (inteiro2 / 2);
	
	printf("O resultado da primeira e : %.0f\n", conta1);
	
	conta2 = (inteiro  * 3) + real;
	
	printf("O resultado da segunda e : %.1f\n", conta2);
	
	conta3 = real * real * real;
	
	printf("O resultado da terceira e : %.1f", conta3);
	
	
	
		exercicio 12
	
	
	float altura;
	float pesoIdeal;
	
	printf("A altura e: ");
	scanf("%f", &altura);
	
	pesoIdeal = (72.7*altura) - 58;
	
	printf("O seu peso ideal e: %.2f", pesoIdeal);
	
	
	
		exercicio 13
	
	float alturaHomem;
	float pesoIdealHomem;
	float alturaMulher;
	float pesoIdealMulher;
	
	printf("A altura do homem e: ");
	scanf("%f", &alturaHomem);
	
	pesoIdealHomem = (72.7*alturaHomem) - 58;
	
	printf("O seu peso ideal e: %.2f\n", pesoIdealHomem);
	
	printf("A altura da mulher e: ");
	scanf("%f", &alturaMulher);
	
	pesoIdealMulher = (62.1*alturaMulher) - 44.7;
	
	printf("O seu peso ideal e: %.2f", pesoIdealMulher);

	
	
		exercicio 14
	
	float peso;
	float excesso;
	float multa;
	int limitePeso = 50;
	
	printf("Quantos Kilos de peixe trouxe: ");
	scanf("%f", &peso);

	excesso = peso - limitePeso;
	
	if (peso > limitePeso){
		
		multa = excesso * 4;
		printf("O excesso de peso e de: %.2fKG\n", excesso);
		printf("A multa a pagar e de: %.0fEuros\n", multa);	
			
	}else{
		
		printf("N�o excedeu o limite de peso.");
	}
	
	
	
		exercicio 15
	
	
	float valorHora;
	float horasTrabalho;
	float salarioBruto;
	float IR;
	float INSS;
    float sindicato;
    float salarioLiquido;
	
	printf("Qual e o valor que recebe por hora? ");
	scanf("%f", &valorHora);
	
	printf("Quantas horas de trabalho fez no mes? ");
	scanf("%f", &horasTrabalho);
	
	
	salarioBruto = valorHora * horasTrabalho;
	
	printf("O valor do salario bruto e %.2f\n", salarioBruto);
	
	IR = (salarioBruto * 11) / 100;
	
	printf("O valor para o IR e de: %.2f\n", IR);
	
	INSS = (salarioBruto * 8) / 100;
	
	printf("O valor para o INSS e de: %.2f\n", INSS);
	
	sindicato = (salarioBruto * 5) / 100;
	
	printf("O valor para o IR e de: %.2f\n", sindicato);
	
	salarioLiquido = salarioBruto - IR - INSS - sindicato;
	
	printf("O salario Liquido e de: %.2fEuros", salarioLiquido);
	
	
	
	exercicio 16 e 17 nao e para fazer
	
	
		exercicio 18

	*/
	float arquivo;
	float velocidade;
	float tempoDownload;
	
	printf("O arquivo tem: ");
	scanf("%f", &arquivo);
	
	printf("A velocidade da internet e de: ");
	scanf("%f", &velocidade);
	
	tempoDownload = (arquivo/velocidade) / 60;
	
	printf("O tempo de download e de: %.2f Minutos\n", tempoDownload);
	
	
	
	
	
	
	
	return 0;
}
