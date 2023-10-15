#ifndef TS_H
#define TS_H
#define taille 100

typedef struct elt {
    char* nom;
    char* type;
    int taille_tab;
    int isconst;
    struct elt* svt;
    float valeur ;
}elem;

elem* tess[100];

void init ();
int fhach (char* e);
int hash(char *name);
int rechercher2(char *name);
void inserer2(char * NomEntite , char* type, int Taille, int cst, float z);
char* GetType(char* entite);
float GetValeur(char* entite);
int isTab(char* entite);
int GetConst(char* entite);
void SetVal(char* entite, float z);
void countSpaces(char s[8]);
void printHachTable();



typedef struct
{ 
   int state; 
   char name[20];
   char type[20];
} elt;

elt tabs[40],tabm[40];
extern char sav[20];

void initialisation();
int existe (char entite[],int y);
void inserer (char entite[], char code[],char type[],float val,int i, int y);
void rechercher (char entite[], char code[],char type[],float val,int y);
void afficher();



#endif //TS_H





