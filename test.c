#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
 
void fonction1(void);
void fonction2(void);
 
int main(void)
{
    fonction1();
    fonction2();
}
void fonction1(void)
{
    printf("Bonjour bienvenue sur le programme de test de péremption de vos produits\n");
    printf("Entrez la date d'aujourd'hui :\n");
    int p1 = 0;
    int p2 = 0;
    int p3 = 0;
    int p4 = 0;
    int p5 = 0;
    int calannée = 0;
    int calmois = 0;
    int caljour = 0;
    int calannée2 = 0;
    int calmois2 = 0;
    int caljour2 = 0;
    int calannée3 = 0;
    int calmois3 = 0;
    int caljour3 = 0;
    int calannée4 = 0;
    int calmois4 = 0;
    int caljour4 = 0;
    int calannée5 = 0;
    int calmois5 = 0;
    int caljour5 = 0;
    int jourauj = get_int("Entrez le jour de la date d'aujourd'hui sous forme (00)\n"); //on demande la date d'aujourdh'hui
    int moisauj = get_int("Entrez le mois de la date d'aujourd'hui sous forme (00)\n");
    int annéeauj = get_int("Entrez l'année de la date d'aujourd'hui sous forme (0000)\n");
    int x = get_int("Combien de produits alimentaires voulez-vous tester ? (1-5)\n");   //on demande combien de produit on veux tester
    if (x == 1)
    {
        string x1 = get_string("Entrez le nom de votre produit numéro1 : \n");  // on demande le nom du produit
        int jourx1 = get_int("Entrez le jour de la date de peremption de %s sous forme (00)\n",
                             x1); //on demande la date de péremption du produit
        int moisx1 = get_int("Entrez le mois de la date de peremption de %s sous forme (00)\n", x1);
        int annéex1 = get_int("Entrez l'année de la date de peremption de %s sous forme (0000)\n", x1);
        if (annéex1 >= annéeauj && moisx1 >= moisauj && jourx1 >= jourauj)
        {    
            //test SI le produit est perimé ou non
            p1 = 1;   //bon
        }
        else if (annéex1 > annéeauj)
        {
            p1 = 1;   //bon
        }
        else if (moisx1 > moisauj && annéex1 >= annéeauj)
        {
            p1 = 1;   //bon
        }
        else if (annéex1 >= annéeauj && moisx1 >= moisauj && jourx1 > jourauj)
        {
            p1 = 1;   //bon
        }
        else
        {
            p1 = 2;   //périmé
        }
        if (p1 == 1)
        {
            printf("Le produit %s n'est pas périmé\n", x1);
        }
        else
        {
            printf("Le produit %s est périmé\n", x1);
        }
        if (p1 == 1)
        {
            calannée = annéex1 - annéeauj;   //calcule du nombre de jour restant avant péremption
            calmois = moisx1 - moisauj;
            caljour = jourx1 - jourauj;
            printf("il reste %i année et %i mois et %i jours pour le produit %s avant péremption \n", calannée, calmois, caljour, x1);
        }
    }
    if (x == 2)
    {   
        //on recommence la même demarche si l'utilisateur a demander 2 produit
        string x1 = get_string("Entrez le nom de votre produit numéro1 : \n");
        string x2 = get_string("Entrez le nom de votre produit numéro2 : \n");
        int jourx1 = get_int("Entrez le jour de la date de peremption de %s sous forme (00)\n", x1);
        int moisx1 = get_int("Entrez le mois de la date de peremption de %s sous forme (00)\n", x1);
        int annéex1 = get_int("Entrez l'année de la date de peremption de %s sous forme (0000)\n", x1);
        int jourx2 = get_int("Entrez le jour de la date de peremption de %s sous forme (00)\n", x2);
        int moisx2 = get_int("Entrez le mois de la date de peremption de %s sous forme (00)\n", x2);
        int annéex2 = get_int("Entrez l'année de la date de peremption de %s sous forme (0000)\n", x2);
        if (annéex1 >= annéeauj && moisx1 >= moisauj && jourx1 >= jourauj)
        {
            p1 = 1;   //bon
        }
        else if (annéex1 > annéeauj)
        {
            p1 = 1;   //bon
        }
        else if (moisx1 > moisauj && annéex1 >= annéeauj)
        {
            p1 = 1;   //bon
        }
        else if (annéex1 >= annéeauj && moisx1 >= moisauj && jourx1 > jourauj)
        {
            p1 = 1;   //bon
        }
        else
        {
            p1 = 2;   //périmé
        }
        if (p1 == 1)
        {
            printf("Le produit %s n'est pas périmé\n", x1);
        }
        else
        {
            printf("Le produit %s est périmé\n", x1);
        }
        if (annéex2 >= annéeauj && moisx2 >= moisauj && jourx2 >= jourauj)
        {
            p2 = 1;   //bon
        }
        else if (annéex2 > annéeauj)
        {
            p2 = 1;   //bon
        }
        else if (moisx2 > moisauj && annéex2 >= annéeauj)
        {
            p2 = 1;   //bon
        }
        else if (annéex2 >= annéeauj && moisx2 >= moisauj && jourx2 > jourauj)
        {
            p2 = 1;   //bon
        }
        else
        {
            p2 = 2;   //périmé
        }
        if (p2 == 1)
        {
            printf("Le produit %s n'est pas périmé\n", x2);
        }
        else
        {
            printf("Le produit %s est périmé\n", x2);
        }
        if (p1 == 1)
        {
            calannée = annéex1 - annéeauj;
            calmois = moisx1 - moisauj;
            caljour = jourx1 - jourauj;
            printf("il reste %i année et %i mois et %i jours pour le produit %s avant péremption \n", calannée, calmois, caljour, x1);
        }
        if (p2 == 1)
        {
            calannée2 = annéex2 - annéeauj;
            calmois2 = moisx2 - moisauj;
            caljour2 = jourx2 - jourauj;
            printf("il reste %i année et %i mois et %i jours pour le produit %s avant péremption \n", calannée2, calmois2, caljour2, x2);
        }
    }
    if (x == 3)
    {  
        //on recommence la même demarche si l'utilisateur a demander 3 produit
        string x1 = get_string("Entrez le nom de votre produit numéro1 : \n");
        string x2 = get_string("Entrez le nom de votre produit numéro2 : \n");
        string x3 = get_string("Entrez le nom de votre produit numéro3 : \n");
        int jourx1 = get_int("Entrez le jour de la date de peremption de %s sous forme (00)\n", x1);
        int moisx1 = get_int("Entrez le mois de la date de peremption de %s sous forme (00)\n", x1);
        int annéex1 = get_int("Entrez l'année de la date de peremption de %s sous forme (0000)\n", x1);
        int jourx2 = get_int("Entrez le jour de la date de peremption de %s sous forme (00)\n", x2);
        int moisx2 = get_int("Entrez le mois de la date de peremption de %s sous forme (00)\n", x2);
        int annéex2 = get_int("Entrez l'année de la date de peremption de %s sous forme (0000)\n", x2);
        int jourx3 = get_int("Entrez le jour de la date de peremption de %s sous forme (00)\n", x3);
        int moisx3 = get_int("Entrez le mois de la date de peremption de %s sous forme (00)\n", x3);
        int annéex3 = get_int("Entrez l'année de la date de peremption de %s sous forme (0000)\n", x3);
        if (annéex1 >= annéeauj && moisx1 >= moisauj && jourx1 >= jourauj)
        {
            p1 = 1;   //bon
        }
        else if (annéex1 > annéeauj)
        {
            p1 = 1;   //bon
        }
        else if (moisx1 > moisauj && annéex1 >= annéeauj)
        {
            p1 = 1;   //bon
        }
        else if (annéex1 >= annéeauj && moisx1 >= moisauj && jourx1 > jourauj)
        {
            p1 = 1;   //bon
        }
        else
        {
            p1 = 2;   //périmé
        }
        if (p1 == 1)
        {
            printf("Le produit %s n'est pas périmé\n", x1);
        }
        else
        {
            printf("Le produit %s est périmé\n", x1);
        }
        if (annéex2 >= annéeauj && moisx2 >= moisauj && jourx2 >= jourauj)
        {
            p2 = 1;   //bon
        }
        else if (annéex2 > annéeauj)
        {
            p2 = 1;   //bon
        }
        else if (moisx2 > moisauj && annéex2 >= annéeauj)
        {
            p2 = 1;   //bon
        }
        else if (annéex2 >= annéeauj && moisx2 >= moisauj && jourx2 > jourauj)
        {
            p2 = 1;   //bon
        }
        else
        {
            p2 = 2;   //périmé
        }
        if (p2 == 1)
        {
            printf("Le produit %s n'est pas périmé\n", x2);
        }
        else
        {
            printf("Le produit %s est périmé\n", x2);
        }
        if (annéex3 >= annéeauj && moisx3 >= moisauj && jourx3 >= jourauj)
        {
            p3 = 1;   //bon
        }
        else if (annéex3 > annéeauj)
        {
            p3 = 1;   //bon
        }
        else if (moisx3 > moisauj && annéex3 >= annéeauj)
        {
            p3 = 1;   //bon
        }
        else if (annéex3 >= annéeauj && moisx3 >= moisauj && jourx3 > jourauj)
        {
            p3 = 1;   //bon
        }
        else
        {
            p3 = 2;   //périmé
        }
        if (p3 == 1)
        {
            printf("Le produit %s n'est pas périmé\n", x3);
        }
        else
        {
            printf("Le produit %s est périmé\n", x3);
        }
        if (p1 == 1)
        {
            calannée = annéex1 - annéeauj;
            calmois = moisx1 - moisauj;
            caljour = jourx1 - jourauj;
            printf("il reste %i année et %i mois et %i jours pour le produit %s avant péremption \n", calannée, calmois, caljour, x1);
        }
        if (p2 == 1)
        {
            calannée2 = annéex2 - annéeauj;
            calmois2 = moisx2 - moisauj;
            caljour2 = jourx2 - jourauj;
            printf("il reste %i année et %i mois et %i jours pour le produit %s avant péremption \n", calannée2, calmois2, caljour2, x2);
        }
        if (p3 == 1)
        {
            calannée3 = annéex3 - annéeauj;
            calmois3 = moisx3 - moisauj;
            caljour3 = jourx3 - jourauj;
            printf("il reste %i année et %i mois et %i jours pour le produit %s avant péremption \n", calannée3, calmois3, caljour3, x3);
        }
    }
    if (x == 4)
    { 
        //on recommence la même demarche si l'utilisateur a demander 4 produit
        string x1 = get_string("Entrez le nom de votre produit numéro1 : \n");
        string x2 = get_string("Entrez le nom de votre produit numéro2 : \n");
        string x3 = get_string("Entrez le nom de votre produit numéro3 : \n");
        string x4 = get_string("Entrez le nom de votre produit numéro4 : \n");
        int jourx1 = get_int("Entrez le jour de la date de peremption de %s sous forme (00)\n", x1);
        int moisx1 = get_int("Entrez le mois de la date de peremption de %s sous forme (00)\n", x1);
        int annéex1 = get_int("Entrez l'année de la date de peremption de %s sous forme (0000)\n", x1);
        int jourx2 = get_int("Entrez le jour de la date de peremption de %s sous forme (00)\n", x2);
        int moisx2 = get_int("Entrez le mois de la date de peremption de %s sous forme (00)\n", x2);
        int annéex2 = get_int("Entrez l'année de la date de peremption de %s sous forme (0000)\n", x2);
        int jourx3 = get_int("Entrez le jour de la date de peremption de %s sous forme (00)\n", x3);
        int moisx3 = get_int("Entrez le mois de la date de peremption de %s sous forme (00)\n", x3);
        int annéex3 = get_int("Entrez l'année de la date de peremption de %s sous forme (0000)\n", x3);
        int jourx4 = get_int("Entrez le jour de la date de peremption de %s sous forme (00)\n", x4);
        int moisx4 = get_int("Entrez le mois de la date de peremption de %s sous forme (00)\n", x4);
        int annéex4 = get_int("Entrez l'année de la date de peremption de %s sous forme (0000)\n", x4);
        if (annéex1 >= annéeauj && moisx1 >= moisauj && jourx1 >= jourauj)
        {
            p1 = 1;   //bon
        }
        else if (annéex1 > annéeauj)
        {
            p1 = 1;   //bon
        }
        else if (moisx1 > moisauj && annéex1 >= annéeauj)
        {
            p1 = 1;   //bon
        }
        else if (annéex1 >= annéeauj && moisx1 >= moisauj && jourx1 > jourauj)
        {
            p1 = 1;   //bon
        }
        else
        {
            p1 = 2;   //périmé
        }
        if (p1 == 1)
        {
            printf("Le produit %s n'est pas périmé\n", x1);
        }
        else
        {
            printf("Le produit %s est périmé\n", x1);
        }
        if (annéex2 >= annéeauj && moisx2 >= moisauj && jourx2 >= jourauj)
        {
            p2 = 1;   //bon
        }
        else if (annéex2 > annéeauj)
        {
            p2 = 1;   //bon
        }
        else if (moisx2 > moisauj && annéex2 >= annéeauj)
        {
            p2 = 1;   //bon
        }
        else if (annéex2 >= annéeauj && moisx2 >= moisauj && jourx2 > jourauj)
        {
            p2 = 1;   //bon
        }
        else
        {
            p2 = 2;   //périmé
        }
        if (p2 == 1)
        {
            printf("Le produit %s n'est pas périmé\n", x2);
        }
        else
        {
            printf("Le produit %s est périmé\n", x2);
        }
        if (annéex3 >= annéeauj && moisx3 >= moisauj && jourx3 >= jourauj)
        {
            p3 = 1;   //bon
        }
        else if (annéex3 > annéeauj)
        {
            p3 = 1;   //bon
        }
        else if (moisx3 > moisauj && annéex3 >= annéeauj)
        {
            p3 = 1;   //bon
        }
        else if (annéex3 >= annéeauj && moisx3 >= moisauj && jourx3 > jourauj)
        {
            p3 = 1;   //bon
        }
        else
        {
            p3 = 2;   //périmé
        }
        if (p3 == 1)
        {
            printf("Le produit %s n'est pas périmé\n", x3);
        }
        else
        {
            printf("Le produit %s est périmé\n", x3);
        }
        if (annéex4 >= annéeauj && moisx4 >= moisauj && jourx4 >= jourauj)
        {
            p4 = 1;   //bon
        }
        else if (annéex4 > annéeauj)
        {
            p4 = 1;   //bon
        }
        else if (moisx4 > moisauj && annéex4 >= annéeauj)
        {
            p4 = 1;   //bon
        }
        else if (annéex4 >= annéeauj && moisx4 >= moisauj && jourx4 > jourauj)
        {
            p4 = 1;   //bon
        }
        else
        {
            p4 = 2;   //périmé
        }
        if (p4 == 1)
        {
            printf("Le produit %s n'est pas périmé\n", x4);
        }
        else
        {
            printf("Le produit %s est périmé\n", x4);
        }
        if (p1 == 1)
        {
            calannée = annéex1 - annéeauj;
            calmois = moisx1 - moisauj;
            caljour = jourx1 - jourauj;
            printf("il reste %i année et %i mois et %i jours pour le produit %s avant péremption \n", calannée, calmois, caljour, x1);
        }
        if (p2 == 1)
        {
            calannée2 = annéex2 - annéeauj;
            calmois2 = moisx2 - moisauj;
            caljour2 = jourx2 - jourauj;
            printf("il reste %i année et %i mois et %i jours pour le produit %s avant péremption \n", calannée2, calmois2, caljour2, x2);
        }
        if (p3 == 1)
        {
            calannée3 = annéex3 - annéeauj;
            calmois3 = moisx3 - moisauj;
            caljour3 = jourx3 - jourauj;
            printf("il reste %i année et %i mois et %i jours pour le produit %s avant péremption \n", calannée3, calmois3, caljour3, x3);
        }
        if (p4 == 1)
        {
            calannée4 = annéex4 - annéeauj;
            calmois4 = moisx4 - moisauj;
            caljour4 = jourx4 - jourauj;
            printf("il reste %i année et %i mois et %i jours pour le produit %s avant péremption \n", calannée4, calmois4, caljour4, x4);
        }
    }
    if (x == 5)
    { 
        //on recommence la même demarche si l'utilisateur a demander 5 produit
        string x1 = get_string("Entrez le nom de votre produit numéro1 : \n");
        string x2 = get_string("Entrez le nom de votre produit numéro2 : \n");
        string x3 = get_string("Entrez le nom de votre produit numéro3 : \n");
        string x4 = get_string("Entrez le nom de votre produit numéro4 : \n");
        string x5 = get_string("Entrez le nom de votre produit numéro5 : \n");
        int jourx1 = get_int("Entrez le jour de la date de peremption de %s sous forme (00)\n", x1);
        int moisx1 = get_int("Entrez le mois de la date de peremption de %s sous forme (00)\n", x1);
        int annéex1 = get_int("Entrez l'année de la date de peremption de %s sous forme (0000)\n", x1);
        int jourx2 = get_int("Entrez le jour de la date de peremption de %s sous forme (00)\n", x2);
        int moisx2 = get_int("Entrez le mois de la date de peremption de %s sous forme (00)\n", x2);
        int annéex2 = get_int("Entrez l'année de la date de peremption de %s sous forme (0000)\n", x2);
        int jourx3 = get_int("Entrez le jour de la date de peremption de %s sous forme (00)\n", x3);
        int moisx3 = get_int("Entrez le mois de la date de peremption de %s sous forme (00)\n", x3);
        int annéex3 = get_int("Entrez l'année de la date de peremption de %s sous forme (0000)\n", x3);
        int jourx4 = get_int("Entrez le jour de la date de peremption de %s sous forme (00)\n", x4);
        int moisx4 = get_int("Entrez le mois de la date de peremption de %s sous forme (00)\n", x4);
        int annéex4 = get_int("Entrez l'année de la date de peremption de %s sous forme (0000)\n", x4);
        int jourx5 = get_int("Entrez le jour de la date de peremption de %s sous forme (00)\n", x5);
        int moisx5 = get_int("Entrez le mois de la date de peremption de %s sous forme (00)\n", x5);
        int annéex5 = get_int("Entrez l'année de la date de peremption de %s sous forme (0000)\n", x5);
        if (annéex1 >= annéeauj && moisx1 >= moisauj && jourx1 >= jourauj)
        {
            p1 = 1;   //bon
        }
        else if (annéex1 > annéeauj)
        {
            p1 = 1;   //bon
        }
        else if (moisx1 > moisauj && annéex1 >= annéeauj)
        {
            p1 = 1;   //bon
        }
        else if (annéex1 >= annéeauj && moisx1 >= moisauj && jourx1 > jourauj)
        {
            p1 = 1;   //bon
        }
        else
        {
            p1 = 2;   //périmé
        }
        if (p1 == 1)
        {
            printf("Le produit %s n'est pas périmé\n", x1);
        }
        else
        {
            printf("Le produit %s est périmé\n", x1);
        }
        if (annéex2 >= annéeauj && moisx2 >= moisauj && jourx2 >= jourauj)
        {
            p2 = 1;   //bon
        }
        else if (annéex2 > annéeauj)
        {
            p2 = 1;   //bon
        }
        else if (moisx2 > moisauj && annéex2 >= annéeauj)
        {
            p2 = 1;   //bon
        }
        else if (annéex2 >= annéeauj && moisx2 >= moisauj && jourx2 > jourauj)
        {
            p2 = 1;   //bon
        }
        else
        {
            p2 = 2;   //périmé
        }
        if (p2 == 1)
        {
            printf("Le produit %s n'est pas périmé\n", x2);
        }
        else
        {
            printf("Le produit %s est périmé\n", x2);
        }
        if (annéex3 >= annéeauj && moisx3 >= moisauj && jourx3 >= jourauj)
        {
            p3 = 1;   //bon
        }
        else if (annéex3 > annéeauj)
        {
            p3 = 1;   //bon
        }
        else if (moisx3 > moisauj && annéex3 >= annéeauj)
        {
            p3 = 1;   //bon
        }
        else if (annéex3 >= annéeauj && moisx3 >= moisauj && jourx3 > jourauj)
        {
            p3 = 1;   //bon
        }
        else
        {
            p3 = 2;   //périmé
        }
        if (p3 == 1)
        {
            printf("Le produit %s n'est pas périmé\n", x3);
        }
        else
        {
            printf("Le produit %s est périmé\n", x3);
        }
        if (annéex4 >= annéeauj && moisx4 >= moisauj && jourx4 >= jourauj)
        {
            p4 = 1;   //bon
        }
        else if (annéex4 > annéeauj)
        {
            p4 = 1;   //bon
        }
        else if (moisx4 > moisauj && annéex4 >= annéeauj)
        {
            p4 = 1;   //bon
        }
        else if (annéex4 >= annéeauj && moisx4 >= moisauj && jourx4 > jourauj)
        {
            p4 = 1;   //bon
        }
        else
        {
            p4 = 2;   //périmé
        }
        if (p4 == 1)
        {
            printf("Le produit %s n'est pas périmé\n", x4);
        }
        else
        {
            printf("Le produit %s est périmé\n", x4);
        }
        if (annéex5 >= annéeauj && moisx5 >= moisauj && jourx5 >= jourauj)
        {
            p5 = 1;   //bon
        }
        else if (annéex5 > annéeauj)
        {
            p5 = 1;   //bon
        }
        else if (moisx5 > moisauj && annéex5 >= annéeauj)
        {
            p5 = 1;   //bon
        }
        else if (annéex5 >= annéeauj && moisx5 >= moisauj && jourx5 > jourauj)
        {
            p5 = 1;   //bon
        }
        else
        {
            p5 = 2;   //périmé
        }
        if (p5 == 1)
        {
            printf("Le produit %s n'est pas périmé\n", x5);
        }
        else
        {
            printf("Le produit %s est périmé\n", x5);
        }
        if (p1 == 1)
        {
            calannée = annéex1 - annéeauj;
            calmois = moisx1 - moisauj;
            caljour = jourx1 - jourauj;
            printf("il reste %i année et %i mois et %i jours pour le produit %s avant péremption \n", calannée, calmois, caljour, x1);
        }
        if (p2 == 1)
        {
            calannée2 = annéex2 - annéeauj;
            calmois2 = moisx2 - moisauj;
            caljour2 = jourx2 - jourauj;
            printf("il reste %i année et %i mois et %i jours pour le produit %s avant péremption \n", calannée2, calmois2, caljour2, x2);
        }
        if (p3 == 1)
        {
            calannée3 = annéex3 - annéeauj;
            calmois3 = moisx3 - moisauj;
            caljour3 = jourx3 - jourauj;
            printf("il reste %i année et %i mois et %i jours pour le produit %s avant péremption \n", calannée3, calmois3, caljour3, x3);
        }
        if (p4 == 1)
        {
            calannée4 = annéex4 - annéeauj;
            calmois4 = moisx4 - moisauj;
            caljour4 = jourx4 - jourauj;
            printf("il reste %i année et %i mois et %i jours pour le produit %s avant péremption \n", calannée4, calmois4, caljour4, x4);
        }
        if (p5 == 1)
        {
            calannée5 = annéex5 - annéeauj;
            calmois5 = moisx5 - moisauj;
            caljour5 = jourx5 - jourauj;
            printf("il reste %i année et %i mois et %i jours pour le produit %s avant péremption \n", calannée5, calmois5, caljour5, x5);
        }
    }
}
void fonction2(void)
{
    //sensibilisation et aide pour la conservation des aliments
    int a = get_int("Si un produit alimentaire est périmé est ce que vous le jeter ? oui = 1 non = 2\n");
    if (a == 1)
    {
        printf("C'est bien il faut toujour jeter les aliments perimé car les bactéries pathogènes rendent malade et n'ont pas d'odeur et ne sont pas visible !!\n");
    }
    else
    {
        printf("Attention il faut toujour jeter les aliments perimé car les bactéries pathogènes rendent malade et n'ont pas d'odeur et ne sont pas visible !!\n");
    }
    printf("\nDatez vos produits alimentaires lors de l’ouverture, Dégivrez et nettoyez une à deux fois par mois votre réfrigérateur à l’eau savonneuse. Puis rincez-le à l’eau\n");
    int b = 0;
    do
    {
        b = get_int("\nvoulez vous savoir la durée de conservation de certain aliments ? oui = 1 non = 2\n");
        if (b == 1)
        {
            int c = get_int("demandez moi 1 aliment parmis ceux la (tape le numero correspondant) :\n 1 miel  , 2 sel, 3 sucre, 4 vinaigre, \n  5 riz, 6 pates,  7 soda , 8 farine\n");
            if (c == 1)
            {
                printf("le miel se conserve pour toujours\n");
            }
            if (c == 2 || c == 3)
            {
                printf("le sel et le sucre se conserve 40 ans\n");
            }
            if (c == 4)
            {
                printf("le vinaigre se conserve 30 ans \n");
            }
            if (c == 5 || c == 6)
            {
                printf("le riz et les pates se conserve 3 ans \n");
            }
            if (c == 7 || c == 8)
            {
                printf("le soda et la farine se conserve 1 an \n");
            }
        }
    }
    while (b == 1);
}
 