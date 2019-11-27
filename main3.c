#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct Aluno{
	char nome[TAM];
	struct Aluno *prox;
	
}Aluno;

Aluno* criar();

Aluno* insereAluno(Aluno *l, char aluno[]){
	Aluno *novo = (Aluno*)malloc(sizeof(Aluno));
	int i;
 for(i=0;i<=TAM;i++){
        novo->nome[i] = aluno[i];
    }
    novo->nome[TAM] = '\0';
    novo->prox = l;
    return novo;
}

void selectionSort(Aluno* lista){
	Aluno* temp = lista;
	while(temp){
	Aluno* min = temp;
	Aluno* r = temp->prox;
	while(r){
		if(min->nome > r->nome){
			min = r;
			
			r = r->prox;
			
		}
		
		//troca
		char d = temp->nome;
		temp->prox = min->prox;
		min->prox = d;
		temp = temp->prox;
		
	}
	
	}
	
} 

void printLista(Aluno* lista){
	printf("---lista não ordenada---");
	while(lista){
		lista = lista->prox;
		printf(lista);
	}
	printf("---lista ordenada---");
	while(lista){
		printf(lista);
		
	}
	
}

int main(int argc, char *argv[]) {
	Aluno* lista;
	int i = 0;
	char nome[TAM];
	for(i;i<=5;i++){
		system("cls");
		printf("informe os nomes");
	    scanf("%s",&nome);
	    insereAluno(lista,nome);
	}
	printf(lista);
	return 0;
}
