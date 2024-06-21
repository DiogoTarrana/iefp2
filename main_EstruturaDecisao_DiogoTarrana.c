#include <stdio.h>
#include <stdlib.h>

int main(void) {


    /*
    // exercicio 1
    float num1;
    float num2;

    printf("O primeiro numero e: ");
    scanf("%f", &num1);

    printf("O segundo numero e: ");
    scanf("%f", &num2);

    if (num1 > num2){
        printf("O primeiro numero e maior que o segundo\n");
    }else{
        printf("O segundo numero e maior que o primeiro\n");
    }
    */

    /*
    // exercicio 2
    float valor;

    printf("O valor e: ");
    scanf("%f", &valor);

    if(valor > 0){
        printf("O valor e positivo\n");
    }else if(valor < 0){
        printf("O valor e negativo\n");
    }
    */

    /*
    // exercicio 3
    char letra;

    printf("A letra e: ");
    scanf(" %c", &letra); // Note the space before %c to consume any leftover whitespace

    if (letra == 'F'){
        printf("Sexo Feminino\n");
    }else if(letra == 'M'){
        printf("Sexo Masculino\n");
    }else{
        printf("Sexo Invalido\n");
    }
    */

    /*
    // exercicio 4
    char letra;

    printf("A letra e: ");
    scanf(" %c", &letra); // Note the space before %c to consume any leftover whitespace

    if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U'){
        printf("A letra e uma vogal\n");
    }else{
        printf("A letra e uma consoante\n");
    }
    */

    /*
    // exercicio 5
    float nota1;
    float nota2;
    float media;

    printf("A primeira nota e: ");
    scanf("%f", &nota1);

    printf("A segunda nota e: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media == 10){
        printf("Aprovado com distincao\n");
    }else if(media >= 7){
        printf("Aprovado\n");
    }else{
        printf("Reprovado\n");
    }
	*/

	/*
	//exercicio 6
	float a1;
	float b1;
	float c1;

	printf("Indique o primeiro numero");
	scanf("%f", &a1);
	
	printf("Indique o segundo numero");
	scanf("%f", &b1);

	printf("Indique o terceiro numero");
	scanf("%f", &c1);

	float num_Maior = a1;

	if (b1 > num_Maior){
		
		num_Maior = b1;
		printf("O segundo numero e o maior", num_Maior);
	}else if(c1 > num_Maior){
		
		num_Maior = c1;
		printf("O terceiro numero e o maior", num_Maior);
	}else{

		printf("O primeiro numero e o maior", num_Maior);
	}
	*/

    /*
	//exercicio 7
	float a1;
	float b1;
	float c1;

	printf("Indique o primeiro numero: ");
	scanf("%f", &a1);
	
	printf("Indique o segundo numero: ");
	scanf("%f", &b1);

	printf("Indique o terceiro numero: ");
	scanf("%f", &c1);

	

	if (a1 >= b1 && a1 >= c1){
		
		printf("O primeiro numero %.2f e o maior\n", a1);

	}else if(b1 >= c1){
		
		printf("O segundo numero %.2f e o maior\n", b1);

	}else{

		printf("O terceiro numero %.2f e o maior\n", c1);
	}

	if (a1 <= b1 && a1 <= c1){
		
		printf("O primeiro numero %.2f e o menor\n", a1);

	}else if(b1 <= c1){
		
		printf("O segundo numero %.2f e o menor\n", b1);

	}else{

		printf("O terceiro numero %.2f e o menor\n", c1);
	}
    */

    /*
    //exercicio 8
    float produto1;
    float produto2;
    float produto3;

    printf("Qual é o preco do primeiro produto? \n", produto1);
    scanf("%f", &produto1);

    printf("Qual é o preco do segundo produto? \n", produto2);
    scanf("%f", &produto2);

    printf("Qual é o preco do terceiro produto? \n", produto3);
    scanf("%f", &produto3);

    if(produto1 <= produto2 && produto1 <= produto3){

        printf("O primeiro produto tem que ser comprado\n", produto1);

    }else if (produto2 <= produto3){

        printf("O segundo produto tem que ser comprado\n", produto2);

    }else{

        printf("O terceiro produto tem que ser comprado", produto3);

    }
    */

    /*
    //exercicio 9
    float n1;
	float n2;
	float n3;
    float menor;

	printf("Indique o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Indique o segundo numero: ");
	scanf("%f", &n2);

	printf("Indique o terceiro numero: ");
	scanf("%f", &n3);

   if(n1 < n2){

    menor = n1;
    n1 = n2;
    n2 = menor;

   }

    if (n1 < n3){

    menor = n1;
    n1 = n3;
    n3 = menor;

   }

    if(n2 < n3){

        menor = n2;
        n2 = n3;
        n3 = menor;

    }

    printf("Os numeros em ordem decrescente sao: %.2f - %.2f - %.2f\n", n1, n2, n3);
    */

    /*
    //exercicio 10
    char letra;

    printf("Por favor digite a letra correspondente para o seu horario de estudo,\n M-matutino ou V-Vespertino ou N- Noturno: ");
    scanf("%c", &letra);

    if (letra == 'M'){

        printf("Bom dia");

    }else if(letra == 'V'){
    
        printf("Boa tarde");

    }else if(letra == 'N'){

        printf("Boa noite");

    }else{

        printf("Invalido");

    }
    */
    //exercicio 11
    float salario;
    float valorAumentado1;
    float novoSalario;

    printf("Indique o valor do seu salario: ");
    scanf("%f", salario);

    if (salario <= 280){
        valorAumentado1 = salario * 100 / 20;
        novoSalario = salario + valorAumentado1;

    }



    return 0;
}
