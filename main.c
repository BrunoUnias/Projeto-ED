#include <stdio.h>
#include <stdlib.h>
#define TAM 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct Aluno{
	char nome[20];
	int matricula[6];
	int *p;
	
	
}Aluno;

void receberAluno(Aluno aluno[]){
	int i;
	
	for(i = 0; i<=TAM;i++){
		system("cls");
		printf("nome:");
		scanf("%s",aluno[i].nome);
		printf("matricula:");
		scanf("%d",aluno[i].matricula);
		selectionSort(aluno[i].matricula,TAM);
		
	}
	
}

void mostrar(Aluno aluno[]){
	int i;
	for(i=0;i<=TAM;i++){
		printf("Nome: %s",aluno[i].nome);
		printf("\n");
		printf("Matricula: %d",aluno[i].matricula);
		
		
	}
	
	
}

void swap(int *px,int *y){
	int temp = *px;
	*px = *y;
	*y = temp;
}

int selectionSort(int arr[],int n){
	int i,j, min_idx;
	for(i=0;i<=n-1;i++){
		min_idx = i;
		for(j= i+1;j<n;j++){
			if(arr[j] < arr[min_idx]){
				min_idx = j;
				
				swap(&arr[min_idx],&arr[i]);
			}
		}
	}
}

void printArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	Aluno aluno[TAM];
	receberAluno(aluno);
	mostrar(aluno);
	
	return 0;
}
