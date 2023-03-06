#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 20

void sectionSort(float vetor[],int max) {
  short i, j, min, aux;
  
    for (i = 0; i < (max - 1); i++) {
        min = i;
        for (j = i+1; j < max; j++) {
            if (vetor[j] < vetor[min]) {
                min = j;
            }
        }
        if(i != min) {
            aux = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = aux;
        }
    }
}

void insertVet(float x[]){    
    for (short i = 0; i < MAX; i++)
    {
        float k = (rand() % 100);
        float l = (rand() % 100);
        x[i] = (rand() % 100)/(k/l);
    }
}

void printVet(float x[]){
    for(short i = 0; i < MAX; i++){
        printf("x[%i] = %.1f ", i, x[i]);
    }
}

void insertSort(float x[])
{
    int i, j, tmp;

    for(i = 1; i < MAX; i++){
        tmp = x[i];
        for(j = i-1; j >= 0 && tmp < x[j]; j--){
            x[j+1] = x[j];
        }
        x[j+1] = tmp;
    }
}

void bubbleSort(float arr[], int n)
{
    int i, j;
    bool spw;
    for (i = 0; i < n-1; i++){
        spw = false;
        float aux;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
                spw = true;
            }
        }
  
       if (spw == false)
            break;
    }
}


void shellSort(float x[], int n) {
  for (int kekw = n / 2; kekw > 0; kekw /= 2) {
    for (int i = kekw; i < n; i += 1) {
      float t = x[i];
      int j;
      for (j = i; j >= kekw && x[j - kekw] > t; j -= kekw) {
        x[j] = x[j - kekw];
      }
      x[j] = t;
    }
  }
}

void main(){
    float vet[MAX];
    while(1){
        int j;
        printf("1 SectionSort\n2 InsertionSort\n3 BubbleSort\n4 ShellSort\n0 Sair\n>> ");
        scanf("%d", &j);
        if(j == 0) break;
        insertVet(vet);
        if(j == 1){
            printf("Vetor desordenado\n");
            printVet(vet);
            puts("");
        
            sectionSort(vet, MAX);
            
            puts("");
            printf("Pos sectionSort\n");
            printVet(vet);
            puts("");
            puts("");
        }
        insertVet(vet);
        if(j == 2){
            printf("Vetor desordenado\n");
            printVet(vet);
            puts("");
        
            insertSort(vet);
        
            puts("");
            printf("Pos insertionSort\n");
            printVet(vet);
            puts("");
            puts("");
            puts("");
        }
        insertVet(vet);
        
        if(j == 3){
            printf("Vetor desordenado\n");
            printVet(vet);
            puts("");

            bubbleSort(vet, MAX);

            puts("");
            printf("Pos bubbleSort\n");
            printVet(vet);
            puts("");
            puts("");
            puts("");
        }

        insertVet(vet);
        if(j == 4){
            printf("Vetor desordenado\n");
            printVet(vet);
            puts("");
        
            shellSort(vet, MAX);

            puts("");
            printf("Pos shellSort\n");
            printVet(vet);
            puts("");
            puts("");
            puts("");
        }       


    }   
}
