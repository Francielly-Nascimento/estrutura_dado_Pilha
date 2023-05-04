#include <stdio.h> 

  int cont = 0;
  int pilha[100];

void adicionarPilha(int valor){
  pilha[cont++] = valor;
}

void verificarPilha(){
  if(cont<=0){
    printf("Pilha Vazia");
  }
}

int removerPilha(){
  verificarPilha();
  cont--;
return pilha[cont];
}

void imprimirPilha(){
  verificarPilha();
  for(int i=cont-1; i>=0; i--){
    printf("%d,", pilha[i]);
  }
  printf("\n\n");
}
  
int main(void){
   printf("\n---CENÁRIO 1 --- \n\n");
   adicionarPilha(1);
   adicionarPilha(2);
   adicionarPilha(3);
   adicionarPilha(7);
   adicionarPilha(9);
   imprimirPilha();  //: 9, 7, 3, 2, 1;
   adicionarPilha(8);
   removerPilha();
   removerPilha();
   removerPilha();
   imprimirPilha(); // : 3, 2, 1;
   removerPilha();
   removerPilha();
   removerPilha();
   removerPilha(); //Pilha Vazia
   

   printf("\n\n\n---CENÁRIO 2 --- \n\n");
    cont = 0;
   adicionarPilha(6);
   adicionarPilha(7);
   adicionarPilha(6);
   adicionarPilha(9);
   adicionarPilha(1);
   adicionarPilha(6);
   adicionarPilha(7);
   adicionarPilha(6);
   adicionarPilha(9);
   adicionarPilha(1);
   imprimirPilha(); //1, 9, 6, 7, 6, 1, 9, 6, 7, 6  
   adicionarPilha(8);
   imprimirPilha(); //8, 1, 9, 6, 7, 6, 1, 9, 6, 7, 6
   removerPilha();
   removerPilha();
   removerPilha();
   removerPilha();
   removerPilha();
   removerPilha();
   imprimirPilha();// 1, 9, 6, 7, 6

   printf("\n\n---CENÁRIO 3 ---\n\n");
    cont = 0;
    adicionarPilha(6);
    removerPilha();
    imprimirPilha(); // Pilha Vazia
    adicionarPilha(6);
    removerPilha();
    imprimirPilha(); // Pilha Vazia
    adicionarPilha(6);
    removerPilha();
    imprimirPilha(); // Pilha Vazia
    adicionarPilha(6);
    removerPilha();
    imprimirPilha(); // Pilha Vazia
    adicionarPilha(6);
    removerPilha();
    imprimirPilha(); // Pilha Vazia
    adicionarPilha(6);
    removerPilha();
    imprimirPilha(); // Pilha Vazia
    adicionarPilha(6);
    removerPilha();
    imprimirPilha(); // Pilha Vazia
    adicionarPilha(6);
    removerPilha();
    imprimirPilha(); // Pilha Vazia
    adicionarPilha(6);
    imprimirPilha(); //6 
   
   
  

}