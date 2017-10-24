/* Exercicio 7
Desenvolva um programa que receba o nome de vários alunos e suas 4 notas bimestrais.
Tal programa deve conter uma sub-rotina que receba as notas por parâmetro, calcule a média do aluno e retorne um dos seguintes conceitos:

A – Média entre 9,0 e 10,0
B – Média entre 7,5 e 8,9
C – Média entre 6,0 e 7,4
D – Média abaixo de 6

A cada aluno digitado e suas respectivas notas, deve ser mostrado o nome do aluno e o conceito obtido. O programa deve ser encerrado ao se digitar o nome sair.

Guilherme Quental */

#include <stdio.h>
#include <string.h>

void conceito(char* nome, int* notas){
  float media = (notas[0] + notas[1] + notas[2] + notas[3]) / 4.0;

  printf("O aluno %s obteve conceito ", nome);

  if(media >= 9.0){
    printf("A\n");
  } else if(media >= 7.5){
    printf("B\n");
  } else if(media >= 6.0){
    printf("C\n");
  } else{
    printf("D\n");
  }
 }

 int main(){
   printf("Programa checador de notas e gerador de conceitos\n");
   char nome[80];
   int notas[4];

   do{
     printf("Insira o nome do aluno: (ou sair para sair) ");
     scanf("%s", nome);

     if(strcmp("sair", nome) == 0){
       printf("Saindo...\n");
       return 0;
     }

     printf("Insira nota 1: ");
     scanf("%d",&notas[0]);

     printf("Insira nota 2: ");
     scanf("%d",&notas[0]);

     printf("Insira nota 3: ");
     scanf("%d",&notas[0]);

     printf("Insira nota 4: ");
     scanf("%d",&notas[0]);

     conceito(nome, notas);

   } while(strcmp("sair",nome) != 0);

 }
