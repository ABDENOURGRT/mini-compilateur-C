#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "TS.h"


/*0: la case est libre    1: la case est occupée*/
void initialisation()
{
  int i;

  for (i=0;i<40;i++)
    {tabs[i].state=0;
    tabm[i].state=0;}

}


/***Step 3: insertion des entititées lexicales dans les tables des symboles ***/

int existe (char entite[],int y){
  int i;

  switch(y) 
    {
    
    case 1:/*verifier si le mot cle n'existe pas*/
 
          for (i = 0 ; i < 40 ; i++){
              // printf("la valeur %d",strcmp(tabm[i].name,entite));
              if (strcmp(tabm[i].name,entite) == 0) {
                return 1;
            }
          }
          return 0;
          break; 
      
    case 2:/*verifier si le séparateur n'existe pas*/

          for (i = 0 ; i < 40 ; i++){
              if (strcmp(tabs[i].name,entite) == 0) {
                return 1;
            }
          }
          return 0;
          break; 
    }
}

void inserer (char entite[], char code[],char type[],float val,int i, int y)
{
  switch (y)
 { 
   
   case 1:/*insertion dans la table des mots clés*/
       tabm[i].state=1;
       strcpy(tabm[i].name,entite);
       strcpy(tabm[i].type,code);
       break; 
    
   case 2:/*insertion dans la table des séparateurs*/
      tabs[i].state=1;
      strcpy(tabs[i].name,entite);
      strcpy(tabs[i].type,code);
      break;
 }

}

/***Step 4: La fonction Rechercher permet de verifier  si l'entité existe dèja dans la table des symboles */
void rechercher (char entite[], char code[],char type[],float val,int y)	
{

int j,i;

switch(y) 
  {
   
   case 1:/*verifier si la case dans la tables des mots clés est libre*/
    if (existe(entite,y) == 0){
       for (i=0;((i<40)&&(tabm[i].state==1));i++); 
        // if(i<40 && existe(entite,y) == 0)
          inserer(entite,code,type,val,i,1);
        // else
        //   printf("entite existe deja\n");
        break; 
    }
    
   case 2:/*verifier si la case dans la tables des séparateurs est libre*/
   if (existe(entite,y) == 0) {
         for (i=0;((i<40)&&(tabs[i].state==1));i++); 
        // if(i<40)
         inserer(entite,code,type,val,i,2);
        // else
   	    //    printf("entite existe deja\n");
        break;
   }
  }

}


/***Step 5 L'affichage du contenue de la table des symboles ***/

void afficher()
{int i;
 
printf("\n/*****Table des symboles mots cles*****/\n");

printf("_____________________________________\n");
printf("\t| NomEntite |  CodeEntite | \n");
printf("_____________________________________\n");
  
for(i=0;i<40;i++)
    if(tabm[i].state==1)
      { 
        printf("\t|%10s |%12s | \n",tabm[i].name, tabm[i].type);
               
      }

printf("\n/******Table des symboles separateurs*****/\n");

printf("_____________________________________\n");
printf("\t| NomEntite |  CodeEntite | \n");
printf("_____________________________________\n");
  
for(i=0;i<40;i++)
    if(tabs[i].state==1)
      { 
        printf("\t|%10s |%12s | \n",tabs[i].name,tabs[i].type );
        
      }

}

void init ()
{
    int i;
    for ( i = 0; i < 100 ; i++)
    {
            tess[i]=NULL;
    }
    
}

int fhach (char* e)
{
    int i=0, count=0;
    while (e[i]!='\0')
    {
        count+=e[i]*i*(10*(i+1));
        i++;
    }
    return (count%100);
    
}
int hash(char *name){
    int lenght=strlen(name);
    int hash_value=0;
    int i=0;
    for( i; i<lenght; i++){
      hash_value+= name[i];
      hash_value=(hash_value * name[i])% 100;
    }
return hash_value;
}
int rechercher2(char *name){
    int index = hash(name);
    elem *tmp = tess[index];
    while (tmp!=NULL && strcmp(tmp->nom,name)!=0)
    {
        tmp=tmp->svt;
    }
	if(tmp==NULL) {return 0;} // 0 si n'existe pas 
	else{
		return 1; // 1 si existe
	}
     
}
void inserer2(char * NomEntite , char* type, int Taille, int cst, float z)
{
	int k= rechercher2(NomEntite);
	if(k==0){

    int index = hash(NomEntite);
    elem * p;
    p= (elem*) malloc( sizeof(elem));
    p->nom=NomEntite;
    p->taille_tab=Taille;	
    p->type=type;
    p->isconst = cst;
    p->valeur =z;
    if (tess[index]==NULL) {p->svt=NULL; tess[index]=p;} // case vide donc insertion en premier  
    else {p->svt=tess[index]; tess[index]=p;}
	}

}



char* GetType(char* entite){
    elem* p= (elem*) malloc( sizeof(elem));
  if (rechercher2(entite)==1)
  {
   int index = hash(entite);
   p=tess[index];
   if (!strcmp(p->nom,entite)){ 
      
         return p->type;
       }else {
       p= p->svt; 
          while (p!=NULL && strcmp(p->nom,entite)) p=p->svt; 
      return p->type;
    }
}
}

float GetValeur(char* entite){
    elem* p= (elem*) malloc( sizeof(elem));
  if (rechercher2(entite)==1)
  {
   int index = hash(entite);
   p=tess[index];
   if (!strcmp(p->nom,entite)){ 
      
         return p->valeur;
       }else {
       p= p->svt; 
          while (p!=NULL && strcmp(p->nom,entite)) p=p->svt; 
      return p->valeur;
    }
}
}

int isTab(char* entite){
    elem* p= (elem*) malloc( sizeof(elem));
  if (rechercher2(entite)==1)
  {
   int index = hash(entite);
   p=tess[index];
   if (!strcmp(p->nom,entite)){ 
      
         return p->taille_tab;
       }else {
       p= p->svt; 
          while (p!=NULL && strcmp(p->nom,entite)) p=p->svt; 
      return p->taille_tab;
    }
}
}

int GetConst(char* entite){
    elem* p= (elem*) malloc( sizeof(elem));
  if (rechercher2(entite)==1)
  {
   int index = hash(entite);
   p=tess[index];
   if (!strcmp(p->nom,entite)){ 
      
         return p->isconst;
       }else {
       p= p->svt; 
          while (p!=NULL && strcmp(p->nom,entite)) p=p->svt; 
      return p->isconst;
    }
}
}

void SetVal(char* entite, float z){
    elem* p= (elem*) malloc( sizeof(elem));
  if (rechercher2(entite)==1)
  {
   int index = hash(entite);
   p=tess[index];
   p->valeur = z; 
    }
}


void printList(elem* l);
void countSpaces(char s[8]) {
    int i;
    for (i = strlen(s); i < 8; i++) {
        s[i] = ' ';
    }
    s[8] = '\0';
}

void printHachTable(){
    int i;
    printf("__________________________________________________________________________________________________________________ \n");
    printf("------------------------------------------------TABLE DES IDF----------------------------------------------------- \n");
    printf("__________________________________________________________________________________________________________________ \n");


    printf("          IDF          |      CodeEntite     |         Type           |      taille_tab     |        valeur       |\n");      
    printf("__________________________________________________________________________________________________________________ \n");


    for ( i = 0; i <100; i++)
    {
        if (tess[i]!=NULL)
        { 
            char str[15];
            for ( tess[i] ; tess[i]!=NULL; tess[i]=tess[i]->svt)
            {  
                strcpy(str,tess[i]->nom); countSpaces(str);
                printf("  %-10s           |",str);
                printf("  %-8s           |",tess[i]->isconst == 1?"CONST   ":"VARIABLE");
                printf("  %-10s            |",tess[i]->type);
                printf("  %d                  |",tess[i]->taille_tab);
                printf("  %f           |\n",tess[i]->valeur);
                printf("__________________________________________________________________________________________________________________ \n");
            }
        //printList(tess[i]);
        }
    }
}
