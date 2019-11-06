#include <stdio.h>
#include <stdlib.h>
#define TAM 20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct Aluno{
	char nome[20];
	int matricula[6];
	
	
}Aluno;

void receberAluno(Aluno aluno[]){
	int i;
	for(i = 0; i<=TAM;i++){
		system("cls");
		printf("nome:");
		scanf("%s",&aluno[i].nome);
		printf("matricula:");
		scanf("%d",&aluno[i].matricula);
		
	}
	
}

void mostrar(Aluno aluno[]){
	int i;
	for(i=0;i<=TAM;i++){
		printf("Nome: %s",aluno[i].nome);
		printf("Matricula: %s",aluno[i].matricula);
		
	}
	
}

int main(int argc, char *argv[]) {
	Aluno aluno[TAM];
	receberAluno(aluno);
	mostrar(aluno);
	
	return 0;
}
