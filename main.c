#include <stdio.h>
#include <stdlib.h>
#define TAILLE 10
#define NombreBateau 5
#define TAILLEFLOTTE 1

typedef struct Cellule{     //type structuré Cellule

int x,y;                    //ligne , colonne

}Cellule;

typedef struct Bateau{      //type structure Bateau

 Cellule Cellule;           //ensemble de cellule

}Bateau;

typedef struct Flotte{     //type structuré

 Bateau Tabbateau [NombreBateau];        //ensemble de bateau
    int restant;
}Flotte;

enum BOOL{                                     //  Enum pour comparer cellules

    True,False,
};

//Prototypes
void initjoueur1(Flotte TabFlotte[]);
void initjoueur2 (Flotte TabFlotte[]);






//programmme principal

int main()
{
    Flotte TabFlotte[TAILLEFLOTTE];

    printf("joueur 1 posé votre bateau");
    initjoueur1(TabFlotte);               //initialisation de la procedure du joueur 1

    printf("joueur 2 posé votre bateau");
    initjoueur2(TabFlotte);               //initialisation de la procedure du joueur 2

    return 0;
}

void initjoueur1 (Flotte Tabflotte[]) {    //procedure qui demande au joueur 1 de rentrer la colonne et la ligne des bateaux
int i;

for(i=0;i<NombreBateau;i++){
        while((Tabflotte[0].Tabbateau[i].Cellule.y<=0) || (Tabflotte[0].Tabbateau[i].Cellule.y>10)){
            printf("Joueur 1, entrez la colonne de votre bateau n'%i\n",i+1);
            scanf("%i",&Tabflotte[0].Tabbateau[i].Cellule.y);
        }
        while((Tabflotte[0].Tabbateau[i].Cellule.x<=0) || (Tabflotte[0].Tabbateau[i].Cellule.x>10)){
            printf("Joueur 1, entrez la ligne de votre bateau n'%i\n",i+1);
            scanf("%i",&Tabflotte[0].Tabbateau[i].Cellule.x);
        }
        system("cls");
    }
    fflush(stdin);
    system("cls");
    Tabflotte[0].restant = NombreBateau;



}

void initjoueur2 (Flotte Tabflotte[]){  //procedure qui demande au joueur 2 de rentrer la colonne et la ligne des bateaux
int i;

for(i=0;i<NombreBateau;i++){
        while((Tabflotte[0].Tabbateau[i].Cellule.y<=0) || (Tabflotte[0].Tabbateau[i].Cellule.y>10)){
            printf("Joueur 2, entrez la colonne de votre bateau n'%i\n",i+1);
            scanf("%i",&Tabflotte[0].Tabbateau[i].Cellule.y);
        }
        while((Tabflotte[0].Tabbateau[i].Cellule.x<=0) || (Tabflotte[0].Tabbateau[i].Cellule.x>10)){
            printf("Joueur 2, entrez la ligne de votre bateau n'%i\n",i+1);
            scanf("%i",&Tabflotte[0].Tabbateau[i].Cellule.x);
        }
        system("cls");
    }
    fflush(stdin);
    system("cls");
    Tabflotte[0].restant = NombreBateau;



}

