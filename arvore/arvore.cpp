#include <stdio.h>
#include <stdlib.h>
/*Estruturas para a manipulação de árvore*/
struct Elemento{
    //Todos os elementos da minha árvore;
    //Se for uma árvore de alunos: nome, matricula, curso,...
    int Valor;
};

struct Nodo{
    Elemento Item;
    Nodo *Esq, *Dir;
};

typedef Nodo *TArvore;


//Inicializar a minha árvore
void Inicializa(TArvore &p){
    p = NULL;
}

/*Função para inserir um elemento na árvore*/
void Insere(Elemento x, TArvore &p){
    if (p == NULL){
        p = (Nodo*) malloc(sizeof(Nodo));  //Aloca um nó na memória
        (*p).Item = x;  //Insere um elemento dentro do nó alocado
        (*p).Esq = NULL;    //define o ponteiro esquerda
        (*p).Dir = NULL;    //define o ponteiro direita
    }
    else{
        if (x.Valor < (*p).Item.Valor)
            Insere(x, (*p).Esq);
        else{
            if (x.Valor > (*p).Item.Valor)
                Insere(x, (*p).Dir);
            else
                printf("Elemento presente na árvore.\n");
        }
    }
}

//PRE-ORDEM
void ImprimePreOrdem(TArvore p){
    if(p != NULL){
        printf("%d | ", (*p).Item.Valor);
    }
    ImprimePreOrdem((*p).Esq);
    ImprimePreOrdem((*p).Dir);
    /*
    if(p != NULL){
        printf("%d | ", (*p).Item.Valor);
        ImprimePreOrdem((*p).Esq);
        ImprimePreOrdem((*p).Dir);
    }
    */
}

//IN-ORDEM
//chamar a função recursivamente a ESQUERDA
//imprimir o conteúdo do nó
//chamar a função recursivamente a DIREITA

//POS-ORDEM
//chamar a função recursivamente a ESQUERDA
//chamar a função recursivamente a DIREITA
//imprimir o conteúdo do nó

int main(){
    TArvore p;
    Elemento x;

    Inicializa(p);  //Inicializa a árvore p
    x.Valor = 10;   Insere (x,p);   //Inserir um elemento na árvore.
    x.Valor = 7;    Insere (x,p);
    x.Valor = 3;    Insere (x,p);
    x.Valor = 15;   Insere (x,p);
    x.Valor = 12;   Insere (x,p);
    x.Valor = 14;   Insere (x,p);
    x.Valor = 18;   Insere (x,p);
    x.Valor = 16;   Insere (x,p);
    x.Valor = 20;   Insere (x,p);

    ImprimePreOrdem(p);
}
