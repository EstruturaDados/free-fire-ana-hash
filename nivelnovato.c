#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Item{
   char nome[30];
   char tipo[20];
   int quantidade;
};

struct Item mochila[10];
int totalItens = 0;

void inserirItem(){
   if (totalItens >= 10) {
      printf("Mochila cheia! Não é possível adicionar mais itens.\n");
      return;
}

printf("Digite o nome do item: ");
fgets(mochila[totalItens].nome, sizeof(mochila[totalItens].nome), stdin);
mochila[totalItens].nome[strcspn(mochila[totalItens].nome, "\n")] = '\0'; 

printf("Digite o tipo do item - Exemplo : Arma, Munição, Cura, etc: ");
fgets(mochila[totalItens].tipo, sizeof(mochila[totalItens].tipo), stdin);
mochila[totalItens].tipo[strcspn(mochila[totalItens].tipo, "\n")] = '\0'; 

printf("Digite a quantidade do item: ");
scanf("%d", &mochila[totalItens].quantidade);
getchar(); 
totalItens++;
printf("Item adicionado com sucesso!\n");

}

void listarItens(){
   printf("\nItens na mochila:\n");
   for (int i = 0; i < totalItens; i++) {
      printf("%d. Nome: %s | Tipo: %s | Quantidade: %d\n",
       i + 1, mochila[i].nome, mochila[i].tipo, mochila[i].quantidade);
      }

      if (totalItens == 0) {
        printf("Mochila vazia.\n");
      }
}

void buscarItem(){
char nomeBusca[30];

printf("Digite o nome do item que deseja buscar: ");
fgets(nomeBusca, sizeof(nomeBusca), stdin);
nomeBusca[strcspn(nomeBusca, "\n")] = '\0';

 for (int i = 0; i < totalItens; i++) {
        if (strcmp(mochila[i].nome, nomeBusca) == 0) {
            printf("Item encontrado!\n");
            printf("Nome: %s | Tipo: %s | Quantidade: %d\n", mochila[i].nome, mochila[i].tipo, mochila[i].quantidade);
            return;

        }
      }

      printf("Item não encontrado.\n");

      void removerItem(){
 char nomeRemover[30];
 printf("Digite o nome do item que deseja remover: ");
    fgets(nomeRemover, sizeof(nomeRemover), stdin);
    nomeRemover[strcspn(nomeRemover, "\n")] = '\0'; 



    for (int i = 0; i < totalItens; i++) {
        if (strcmp(mochila[i].nome, nomeRemover) == 0) {
         for (int j = i; j < totalItens - 1; j++) {
         mochila[j] = mochila[j + 1];
         }
         totalItens--;
            printf("Item removido com sucesso!\n");
            return;
      }
   }
    printf("Item não encontrado.\n");
}

int main() {
    int opcao;

    do {
        printf("\n### Mochila de Loot ###\n");
        printf("1. Adicionar item\n");
        printf("2. Remover item\n");
        printf("3. Listar itens\n");
        printf("4. Buscar item\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d"),[&"opcao"];
        getchar(); 
        switch ("opcao") {

          case 1: inserirItem();
             break;
            case 2: removerItem(); 
            break;
            case 3: listarItens();
             break;
            case 4: buscarItem(); 
            
        } 

return 0;

        }