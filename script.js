"use strict";
function start(){
console.log("Bonjour bienvenue sur le programme de test de péremption de vos produits\n");
console.log("Entrez la date d'aujourd'hui :\n");

let p1 = 0;
let p2 = 0;
let p3 = 0;
let p4 = 0;
let p5 = 0;
let calannée = 0;
let calmois = 0;
let caljour = 0;
let calannée2 = 0;
let calmois2 = 0;
let caljour2 = 0;
let calannée3 = 0;
let calmois3 = 0;
let caljour3 = 0;
let calannée4 = 0;
let calmois4 = 0;
let caljour4 = 0;
let calannée5 = 0;
let calmois5 = 0;
let caljour5 = 0;
let jourauj = prompt("Entrez le jour de la date d'aujourd'hui sous forme (00)\n"); //on demande la date d'aujourdh'hui
let moisauj = prompt("Entrez le mois de la date d'aujourd'hui sous forme (00)\n");
let annéeauj = prompt("Entrez l'année de la date d'aujourd'hui sous forme (0000)\n");
let x = prompt("Combien de produits alimentaires voulez-vous tester ? (ecrire 1 car en dev)\n");   //on demande combien de produit on veux tester

if (x == 1)
    {
        let x1 = prompt("Entrez le nom de votre produit numéro1 : \n");  // on demande le nom du produit
        let jourx1 = prompt("Entrez le jour de la date de peremption de" + x1 +  "sous forme (00)\n"); //on demande la date de péremption du produit
        let moisx1 = prompt("Entrez le mois de la date de peremption de" + x1 +  "sous forme (00)\n");
        let annéex1 = prompt("Entrez l'année de la date de peremption de" + x1 +  "sous forme (0000)\n");
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
            console.log("Le produit " + x1 +  " n'est pas périmé\n");
            alert(x1);
            let print = document.querySelector('#display');
            print.setAttribute('value', x1);
        }
        else
        {
            console.log("Le produit " + x1 +  " est périmé\n");
            alert("Le produit " + x1 +  " est périmé\n");
            let print = document.querySelector('#display');
            print.setAttribute('value', "Le produit " + x1 +  " est périmé\n");
        }
        if (p1 == 1)
        {
            calannée = annéex1 - annéeauj;   //calcule du nombre de jour restant avant péremption
            calmois = moisx1 - moisauj;
            caljour = jourx1 - jourauj;
            console.log("il reste " + calannée +  " année et " + calmois +  " mois et " + caljour +  " jours pour le produit " + x1 +  " avant péremption \n");
            alert("il reste " + calannée +  " année et " + calmois +  " mois et " + caljour +  " jours pour le produit " + x1 +  " avant péremption \n");
            let print = document.querySelector('#display');
            print.setAttribute('value', "il reste " + calannée +  " année et " + calmois +  " mois et " + caljour +  " jours pour le produit " + x1 +  " avant péremption \n");
        }
    }

    if (x == 2)
    {   
        //on recommence la même demarche si l'utilisateur a demander 2 produit
        let x1 = prompt("Entrez le nom de votre produit numéro1 : \n");
        let x2 = prompt("Entrez le nom de votre produit numéro2 : \n");
        let jourx1 = prompt("Entrez le jour de la date de peremption de " + x1 +  " sous forme (00)\n");
        let moisx1 = prompt("Entrez le mois de la date de peremption de " + x1 +  " sous forme (00)\n");
        let annéex1 = prompt("Entrez l'année de la date de peremption de " + x1 +  " sous forme (0000)\n");
        let jourx2 = prompt("Entrez le jour de la date de peremption de " + x2 +  " sous forme (00)\n");
        let moisx2 = prompt("Entrez le mois de la date de peremption de " + x2 +  " sous forme (00)\n");
        let annéex2 = prompt("Entrez l'année de la date de peremption de " + x2 +  " sous forme (0000)\n");
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
            console.log("Le produit " + x1 +  " n'est pas périmé\n");
        }
        else
        {
            console.log("Le produit " + x1 +  " est périmé\n");
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
            console.log("Le produit " + x2 +  " n'est pas périmé\n");
        }
        else
        {
            console.log("Le produit " + x2 +  " est périmé\n");
        }
        if (p1 == 1)
        {
            calannée = annéex1 - annéeauj;
            calmois = moisx1 - moisauj;
            caljour = jourx1 - jourauj;
            printf("il reste " + calannée +  " année et " + calmois +  " mois et " + caljour +  " jours pour le produit " + x1 +  " avant péremption \n");
        }
        if (p2 == 1)
        {
            calannée2 = annéex2 - annéeauj;
            calmois2 = moisx2 - moisauj;
            caljour2 = jourx2 - jourauj;
            printf("il reste " + calannée2 +  " année et " + calmois2 +  " mois et " + caljour2 +  " jours pour le produit " + x2 +  " avant péremption \n");
        }
    }
    if (x == 3)
    {  
        //on recommence la même demarche si l'utilisateur a demander 3 produit
        let x1 = prompt("Entrez le nom de votre produit numéro1 : \n");
        let x2 = prompt("Entrez le nom de votre produit numéro2 : \n");
        let x3 = prompt("Entrez le nom de votre produit numéro3 : \n");
        let jourx1 = prompt("Entrez le jour de la date de peremption de " + x1 +  " sous forme (00)\n");
        let moisx1 = prompt("Entrez le mois de la date de peremption de " + x1 +  " sous forme (00)\n");
        let annéex1 = prompt("Entrez l'année de la date de peremption de " + x1 +  " sous forme (0000)\n");
        let jourx2 = prompt("Entrez le jour de la date de peremption de " + x2 +  " sous forme (00)\n");
        let moisx2 = prompt("Entrez le mois de la date de peremption de " + x2 +  " sous forme (00)\n");
        let annéex2 = prompt("Entrez l'année de la date de peremption de " + x2 +  " sous forme (0000)\n");
        let jourx3 = prompt("Entrez le jour de la date de peremption de " + x3 +  " sous forme (00)\n");
        let moisx3 = prompt("Entrez le mois de la date de peremption de " + x3 +  " sous forme (00)\n");
        let annéex3 = prompt("Entrez l'année de la date de peremption de " + x3 +  " sous forme (0000)\n");
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
            console.log("Le produit " + x1 +  " n'est pas périmé\n");
        }
        else
        {
            console.log("Le produit " + x1 +  " est périmé\n");
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
            console.log("Le produit " + x2 +  " n'est pas périmé\n");
        }
        else
        {
            console.log("Le produit " + x2 +  " est périmé\n");
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
            console.log("Le produit " + x3 +  " n'est pas périmé\n");
        }
        else
        {
            console.log("Le produit " + x3 +  " est périmé\n");
        }
        if (p1 == 1)
        {
            calannée = annéex1 - annéeauj;
            calmois = moisx1 - moisauj;
            caljour = jourx1 - jourauj;
            console.log("il reste " + calannée +  " année et " + calmois +  " mois et " + caljour +  " jours pour le produit " + x1 +  " avant péremption \n");
        }
        if (p2 == 1)
        {
            calannée2 = annéex2 - annéeauj;
            calmois2 = moisx2 - moisauj;
            caljour2 = jourx2 - jourauj;
            console.log("il reste " + calannée2 +  " année et " + calmois2 +  " mois et " + caljour2 +  " jours pour le produit " + x2 +  " avant péremption \n");
        }
        if (p3 == 1)
        {
            calannée3 = annéex3 - annéeauj;
            calmois3 = moisx3 - moisauj;
            caljour3 = jourx3 - jourauj;
            console.log("il reste " + calannée3 +  " année et " + calmois3 +  " mois et " + caljour3 +  " jours pour le produit " + x3 +  " avant péremption \n");
        }
    }
    if (x == 4)
    { 
        //on recommence la même demarche si l'utilisateur a demander 4 produit
        let x1 = get_string("Entrez le nom de votre produit numéro1 : \n");
        let x2 = get_string("Entrez le nom de votre produit numéro2 : \n");
        let x3 = get_string("Entrez le nom de votre produit numéro3 : \n");
        let x4 = get_string("Entrez le nom de votre produit numéro4 : \n");
        let jourx1 = get_int("Entrez le jour de la date de peremption de " + x1 +  " sous forme (00)\n");
        let moisx1 = get_int("Entrez le mois de la date de peremption de " + x1 +  " sous forme (00)\n");
        let annéex1 = get_int("Entrez l'année de la date de peremption de " + x1 +  " sous forme (0000)\n");
        let jourx2 = get_int("Entrez le jour de la date de peremption de " + x2 +  " sous forme (00)\n");
        let moisx2 = get_int("Entrez le mois de la date de peremption de " + x2 +  " sous forme (00)\n");
        let annéex2 = get_int("Entrez l'année de la date de peremption de " + x2 +  " sous forme (0000)\n");
        let jourx3 = get_int("Entrez le jour de la date de peremption de " + x3 +  " sous forme (00)\n");
        let moisx3 = get_int("Entrez le mois de la date de peremption de " + x3 +  " sous forme (00)\n");
        let annéex3 = get_int("Entrez l'année de la date de peremption de " + x3 +  " sous forme (0000)\n");
        let jourx4 = get_int("Entrez le jour de la date de peremption de " + x4 +  " sous forme (00)\n");
        let moisx4 = get_int("Entrez le mois de la date de peremption de " + x4 +  " sous forme (00)\n");
        let annéex4 = get_int("Entrez l'année de la date de peremption de " + x4 +  " sous forme (0000)\n");
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
            console.log("Le produit " + x1 +  " n'est pas périmé\n");
        }
        else
        {
            console.log("Le produit " + x1 +  " est périmé\n");
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
            console.log("Le produit " + x2 +  " n'est pas périmé\n");
        }
        else
        {
            console.log("Le produit " + x2 +  " est périmé\n");
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
            console.log("Le produit " + x3 +  " n'est pas périmé\n");
        }
        else
        {
            console.log("Le produit " + x3 +  " est périmé\n");
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
            console.log("Le produit " + x4 +  " n'est pas périmé\n");
        }
        else
        {
            console.log("Le produit " + x4 +  " est périmé\n");
        }
        if (p1 == 1)
        {
            calannée = annéex1 - annéeauj;
            calmois = moisx1 - moisauj;
            caljour = jourx1 - jourauj;
            console.log("il reste " + calannée +  " année et " + calmois +  " mois et " + caljour +  " jours pour le produit " + x1 +  " avant péremption \n");
        }
        if (p2 == 1)
        {
            calannée2 = annéex2 - annéeauj;
            calmois2 = moisx2 - moisauj;
            caljour2 = jourx2 - jourauj;
            console.log("il reste " + calannée2 +  " année et " + calmois2 +  " mois et " + caljour2 +  " jours pour le produit " + x2 +  " avant péremption \n");
        }
        if (p3 == 1)
        {
            calannée3 = annéex3 - annéeauj;
            calmois3 = moisx3 - moisauj;
            caljour3 = jourx3 - jourauj;
            console.log("il reste " + calannée3 +  " année et " + calmois3 +  " mois et " + caljour3 +  " jours pour le produit " + x3 +  " avant péremption \n");
        }
        if (p4 == 1)
        {
            calannée4 = annéex4 - annéeauj;
            calmois4 = moisx4 - moisauj;
            caljour4 = jourx4 - jourauj;
            console.log("il reste " + calannée4 +  " année et " + calmois4 +  " mois et " + caljour4 +  " jours pour le produit " + x4 +  " avant péremption \n");
        }
    }
    if (x == 5)
    { 
        //on recommence la même demarche si l'utilisateur a demander 5 produit
        let x1 = prompt("Entrez le nom de votre produit numéro1 : \n");
        let x2 = prompt("Entrez le nom de votre produit numéro2 : \n");
        let x3 = prompt("Entrez le nom de votre produit numéro3 : \n");
        let x4 = prompt("Entrez le nom de votre produit numéro4 : \n");
        let x5 = prompt("Entrez le nom de votre produit numéro5 : \n");
        let jourx1 = prompt("Entrez le jour de la date de peremption de " + x1 +  " sous forme (00)\n");
        let moisx1 = prompt("Entrez le mois de la date de peremption de " + x1 +  " sous forme (00)\n");
        let annéex1 = prompt("Entrez l'année de la date de peremption de " + x1 +  " sous forme (0000)\n");
        let jourx2 = prompt("Entrez le jour de la date de peremption de " + x2 +  " sous forme (00)\n");
        let moisx2 = prompt("Entrez le mois de la date de peremption de " + x2 +  " sous forme (00)\n");
        let annéex2 = prompt("Entrez l'année de la date de peremption de " + x2 +  " sous forme (0000)\n");
        let jourx3 = prompt("Entrez le jour de la date de peremption de " + x3 +  " sous forme (00)\n");
        let moisx3 = prompt("Entrez le mois de la date de peremption de " + x3 +  " sous forme (00)\n");
        let annéex3 = prompt("Entrez l'année de la date de peremption de " + x3 +  " sous forme (0000)\n");
        let jourx4 = prompt("Entrez le jour de la date de peremption de " + x4 +  " sous forme (00)\n");
        let moisx4 = prompt("Entrez le mois de la date de peremption de " + x4 +  " sous forme (00)\n");
        let annéex4 = prompt("Entrez l'année de la date de peremption de " + x4 +  " sous forme (0000)\n");
        let jourx5 = prompt("Entrez le jour de la date de peremption de " + x5 +  " sous forme (00)\n");
        let moisx5 = prompt("Entrez le mois de la date de peremption de " + x5 +  " sous forme (00)\n");
        let annéex5 = prompt("Entrez l'année de la date de peremption de " + x5 +  " sous forme (0000)\n");
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
            console.log("Le produit " + x1 +  " n'est pas périmé\n");
        }
        else
        {
            console.log("Le produit " + x1 +  " est périmé\n");
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
            console.log("Le produit " + x2 +  " n'est pas périmé\n");
        }
        else
        {
            console.log("Le produit " + x2 +  " est périmé\n");
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
            console.log("Le produit " + x3 +  " n'est pas périmé\n");
        }
        else
        {
            console.log("Le produit " + x3 +  " est périmé\n");
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
            console.log("Le produit " + x4 +  " n'est pas périmé\n");
        }
        else
        {
            console.log("Le produit " + x4+  " est périmé\n");
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
            console.log("Le produit " + x5 +  " n'est pas périmé\n");
        }
        else
        {
            console.log("Le produit " + x5 +  " est périmé\n");
        }
        if (p1 == 1)
        {
            calannée = annéex1 - annéeauj;
            calmois = moisx1 - moisauj;
            caljour = jourx1 - jourauj;
            console.log("il reste " + calannée +  " année et " + calmois +  " mois et " + caljour +  " jours pour le produit " + x1 +  " avant péremption \n");
        }
        if (p2 == 1)
        {
            calannée2 = annéex2 - annéeauj;
            calmois2 = moisx2 - moisauj;
            caljour2 = jourx2 - jourauj;
            console.log("il reste " + calannée2 +  " année et " + calmois2 +  " mois et " + caljour2 +  " jours pour le produit " + x2 +  " avant péremption \n");
        }
        if (p3 == 1)
        {
            calannée3 = annéex3 - annéeauj;
            calmois3 = moisx3 - moisauj;
            caljour3 = jourx3 - jourauj;
            console.log("il reste " + calannée3 +  " année et " + calmois3 +  " mois et " + caljour3 +  " jours pour le produit " + x3 +  " avant péremption \n");
        }
        if (p4 == 1)
        {
            calannée4 = annéex4 - annéeauj;
            calmois4 = moisx4 - moisauj;
            caljour4 = jourx4 - jourauj;
            console.log("il reste " + calannée4 +  " année et " + calmois4 +  " mois et " + caljour4 +  " jours pour le produit " + x4 +  " avant péremption \n");
        }
        if (p5 == 1)
        {
            calannée5 = annéex5 - annéeauj;
            calmois5 = moisx5 - moisauj;
            caljour5 = jourx5 - jourauj;
            console.log("il reste " + calannée5 +  " année et " + calmois5 +  " mois et " + caljour5 +  " jours pour le produit " + x5 +  " avant péremption \n");
        }
    }
    
}