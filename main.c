#include <stdio.h>
#include <stdbool.h>

/*******************déclaration des variables globales******************/
int itab[10];
/***********************prototype***************************************/
void saisieNombre();
void affichageTableau();
void menu();
void tricroissant();
void tridecroissant();
void echanger(int indice1,int indice2);
/*******************definitions*******************************************/
void saisieNombre() {
int chiffre=0;
int cpt=0;
while(cpt<10)
{
    printf("Veuillez saisir un chiffre");
    scanf("%d",&chiffre);
    itab[cpt]=chiffre; // on met dans la case le chiffre
    cpt++;
}
}

void affichageTableau() {
for(int i=0;i<10;i++) //l'indice varie de 0 à 9
{
    printf("%d\n",itab[i]); //affichage de l'indice i
}
}

void menu() {
    int choix=0;
    printf("1-tri ordre croissant\n");
    printf("2-tri ordre decroissant\n");
    scanf("%d",&choix);
    switch (choix) {
        case 1:
            tricroissant();
            break;
        case 2:
            tridecroissant();
            break;

    }
    affichageTableau();

}

void tricroissant() {
    int borne=10;
    bool tri=false;
    while(tri==false)
    {
        tri=true;
        for(int i=0;i<borne-1;i++)
        {
            if(itab[i]>itab[i+1])
            {
            echanger(i,i+1);
            tri=false;
            }
        }
        borne--;
    }


}

void tridecroissant() {

}

void echanger(int indice1, int indice2) {
int buffer=0;
buffer=itab[indice1];
itab[indice1]=itab[indice2];
itab[indice2]=buffer;

}


int main() {
    saisieNombre(); //appel de la fonction
    menu();
    return 0;
}
