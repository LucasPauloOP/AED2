#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Elemento{
    int Valor;
};

struct Nodo{
    Elemento Item;
    Nodo *Esq, *Dir;
};

typedef Nodo *TArvore;

void Inicializa(TArvore &p){
    p = NULL;
}

void Insere(Elemento x, TArvore &p){
    if (p == NULL){
        p = (Nodo *) malloc(sizeof(Nodo));
        (*p).Item = x;
        (*p).Esq = NULL;
        (*p).Dir = NULL;
    }
    else{
        if (x.Valor < (*p).Item.Valor)
            Insere(x, (*p).Esq);
        else{
            if (x.Valor > (*p).Item.Valor)
                Insere(x, (*p).Dir);
            else
                printf("Elemento presente na arvore.\n");
        }
    }
}

void Pesquisa(Elemento x, TArvore p) {
  if(p == NULL)
       printf("Valor nao encontrado\n");
  else if(x.Valor < (*p).Item.Valor)
       Pesquisa(x, (*p).Esq);
  else if(x.Valor > (*p).Item.Valor)
       Pesquisa(x,(*p).Dir);
  else
      printf("Valor %d encontrado\n",(*p).Item.Valor);
}

void ImprimePreOrdem (TArvore p) {
  if(p != NULL) {
    printf("%d-",(*p).Item.Valor);
    ImprimePreOrdem((*p).Esq);
    ImprimePreOrdem((*p).Dir);
  }
}

void ImprimeInOrdem(TArvore p) {
  if(p != NULL){
    ImprimeInOrdem((*p).Esq);
    printf("%d-",(*p).Item.Valor);
    ImprimeInOrdem((*p).Dir);
  }
}

void ImprimePosOrdem(TArvore p) {
  if(p != NULL) {
    ImprimePosOrdem((*p).Esq);
    ImprimePosOrdem((*p).Dir);
    printf("%d-",(*p).Item.Valor);
  }
}

void TrocaMaior(TArvore r, TArvore &q) {
  TArvore aux;
  if((*q).Dir == NULL) {
    (*r).Item.Valor = (*q).Item.Valor;
    aux = q;
    q = (*q).Esq;
    free(aux);
  }
  else
   TrocaMaior(r,(*q).Dir);
}

void Retira(TArvore &p, Elemento x) {
  TArvore aux;
  
  if(p == NULL)
       printf("Elemento nao encontrado");
  else if(x.Valor < (*p).Item.Valor)
       Retira((*p).Esq, x);
  else if(x.Valor > (*p).Item.Valor)
       Retira((*p).Dir,x);
  else if((*p).Esq == NULL) {
    aux = p;
    p = (*p).Dir;
    free(aux);
  }
  else if((*p).Dir == NULL){
    aux = p;
    p = (*p).Esq;
    free(aux);
  }
  else
      TrocaMaior(p,(*p).Esq);
}

int Menu() {
  int opcao;
    system("cls");
      fflush(stdin);
      printf("#########################################");
      printf("\n#\t1-Inicializar arvore\t\t#");
      printf("\n#\t2-Inserir elemento\t\t#");
      printf("\n#\t3-Pesquisar elemento\t\t#");
      printf("\n#\t4-Caminhamento Pre-Ordem\t#");
      printf("\n#\t5-Caminhamento In-Ordem\t\t#");
      printf("\n#\t6-Caminhamento Pos-Ordem\t#");
      printf("\n#\t7-Retirar elemento\t\t#");
      printf("\n#\t8-Sair\t\t\t\t#");
      printf("\n#########################################\n");
      printf("Digite a opcao escolhida: ");
      scanf("%d",&opcao);
      return opcao;
}

int main(){
    TArvore p;
    Elemento x;
    int opcao=0;
    int inicializada = 0;
    
    while(opcao != 8){
                
      opcao = Menu();
      
      if(opcao == 1){
        system("cls");
        Inicializa(p);
        inicializada = 1;
        printf("Arvore incializada com sucesso.");
        printf("\nAperte enter para continuar\n");                   
        getch();
      }
      else if(opcao == 2) {
        system("cls");
        fflush(stdin);
        
        if(!inicializada){
          printf("Favor escolher a opcao de inicializar arvore primeiro.");          
          printf("\nAperte enter para continuar\n");                   
          getch();
        }
        else{
          int qtde=0;
          int aux =0;
          
          printf("Digite quantos elementos deseja inserir: ");
          scanf("%d",&qtde);
          
          while(aux < qtde){
            printf("Digite um elemento: ");
            scanf("%d",&x);
            Insere(x,p);
            printf("Elemento %d inserido com sucesso.",x);
            printf("\nAperte enter para continuar\n");
            getch();
            aux++;
          }
        }
         
      }
      else if(opcao == 3){
        system("cls");
        fflush(stdin);
        
        if(!inicializada){
          printf("Favor escolher a opcao de inicializar arvore primeiro.");
          printf("\nAperte enter para continuar\n");                   
          getch();
        }
        else{
          printf("Digite o elemento que deseja pesquisar: ");
          scanf("%d",&x);
          Pesquisa(x,p);
          printf("\nAperte enter para continuar\n");
          getch();
        }
        
      }
      else if(opcao == 4) {
         system("cls");
        
        if(!inicializada){
          printf("Favor escolher a opcao de inicializar arvore primeiro."); 
          printf("\nAperte enter para continuar\n");         
          getch();
        }
        else{
          ImprimePreOrdem(p);
          printf("\nAperte enter para continuar\n");
          getch();
        }
      }
      else if(opcao == 5) {
         system("cls");
        
        if(!inicializada){
          printf("Favor escolher a opcao de inicializar arvore primeiro."); 
          printf("\nAperte enter para continuar\n");         
          getch();
        }
        else{
          ImprimeInOrdem(p);
          printf("\nAperte enter para continuar\n");
          getch();
        }
        
      }
      
      else if(opcao == 6) {
         system("cls");
        
        if(!inicializada){
          printf("Favor escolher a opcao de inicializar arvore primeiro."); 
          printf("\nAperte enter para continuar\n");         
          getch();
        }
        else{
          ImprimePosOrdem(p);
          printf("\nAperte enter para continuar\n");
          getch();
        }
      }
      
      else if(opcao == 7) {
        system("cls");
        fflush(stdin);
        
        if(!inicializada){
          printf("Favor escolher a opcao de inicializar arvore primeiro.");
          printf("\nAperte enter para continuar\n");                   
          getch();
        }
        else{
          printf("Digite o elemento que deseja retirar: ");
          scanf("%d",&x);
          Retira(p,x);
          printf("Elemento retirado com sucesso.");
          printf("\nAperte enter para continuar\n");
          getch();
        }
        
      }
      
      else if(opcao == 8){
        printf("Saindo.....");
      }
      
    }
    
}
