#include <stdio.h>
#include <stdlib.h>
#include <string.h>>
#define TAM 100

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
		selectionSort(aluno[i].nome,TAM);
		
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

void selectionSort(char arr[][TAM], int n) 
{ 
    int i, j, min_idx; 
   
    // One by one move boundary of unsorted subarray 
    char minStr[TAM]; 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        int min_idx = i; 
        strcpy(minStr, arr[i]); 
        for (j = i+1; j < n; j++) 
        { 
            // If min is greater than arr[j] 
            if (strcmp(minStr, arr[j]) > 0) 
            { 
                // Make arr[j] as minStr and update min_idx 
                strcpy(minStr, arr[j]); 
                min_idx = j; 
            } 
        } 
   
        // Swap the found minimum element with the first element 
        if (min_idx != i) 
        { 
            char temp[TAM]; 
            strcpy(temp, arr[i]); //swap item[pos] and item[i] 
            strcpy(arr[i], arr[min_idx]); 
            strcpy(arr[min_idx], temp); 
        } 
    } 
} 

void 
   
// Driver code 
int main() 
{ 

                                                    "Ana"}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int i; 
   
    printf("Given array is\n"); 
    for (i = 0; i < n; i++) 
        printf("%d: %s \n", i, arr[i]); 
   
    selectionSort(arr, n); 
   
    printf("\nSorted array is\n"); 
    for (i = 0; i < n; i++) 
        printf("%d: %s \n", i, arr[i]); 
   
   
    return 0; 
} 

