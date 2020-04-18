#include <stdio.h>
#include <stdlib.h>
/*Estruturas para a manipula��o de �rvore*/
struct Elemento{
    //Todos os elementos da minha �rvore;
    //Se for uma �rvore de alunos: nome, matricula, curso,...
    int Valor;
};

struct Nodo{
    Elemento Item;
    Nodo *Esq, *Dir;
};

typedef Nodo *TArvore;


//Inicializar a minha �rvore
void Inicializa(TArvore &p){
    p = NULL;
}

/*Fun��o para inserir um elemento na �rvore*/
void Insere(Elemento x, TArvore &p){
    if (p == NULL){
        p = (Nodo*) malloc(sizeof(Nodo));  //Aloca um n� na mem�ria
        (*p).Item = x;  //Insere um elemento dentro do n� alocado
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
                printf("Elemento presente na �rvore.\n");
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
//chamar a fun��o recursivamente a ESQUERDA
//imprimir o conte�do do n�
//chamar a fun��o recursivamente a DIREITA

//POS-ORDEM
//chamar a fun��o recursivamente a ESQUERDA
//chamar a fun��o recursivamente a DIREITA
//imprimir o conte�do do n�

int main(){
    TArvore p;
    Elemento x;

    Inicializa(p);  //Inicializa a �rvore p
    x.Valor = 10;   Insere (x,p);   //Inserir um elemento na �rvore.
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
