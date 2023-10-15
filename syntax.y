%{
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <math.h>
    #include "ts.c"
    #include "ts.h"
	#include "quad.c"
	#include "quad.h"
    #include "optimisation.c"
    #include "optimisation.h"
    #include "code_obj.c"
	#include "code_obj.h"

    

    int yylex();
    int yyerror(char *);

    int vale;
    float valr,vaal;
    int suav;
    char* suavType;
    char* suavTypeval;
	int nbcol = 1;
	int nbligne = 1;
    char * nom;
    char  * sauv_idf;
    int nTemp=1;
    char tempC[12]="";
    char val[12]="";
    int deb_else = 0;
    int fin;
    int d_for,d_while;
    int fin_for,fin_while;
%}

%union{
  int entier;
  char* str; 
  float reel;  
  struct{
    int type;
    char * chaine;
    float vall;
  }garti;
}

%token mc_VAR mc_CODE commentaire mc_CONST mc_ELSE mc_FLOAT mc_FOR mc_IF mc_INTEGER mc_STRUCT mc_WHILE AcF AcO <entier>entier <reel>reel Point And com Verg PrO PrF Plus PVerg DxP CrO CrF Egl Inf Sup Moins Mult Div Ou Neg <str>idf 

%left Plus Moins
%left Mult Div
%left Ou And

%type <garti> X expression condition valeur

%%
S : idf AcO Partie_DefStruct mc_VAR AcO Partie_VAR AcF mc_CODE AcO Partie_CODE AcF AcF {printf("\nProgramme correcte syntaxiquement\n"); YYACCEPT;}
                ;

/***************************************   Definition Struct ***********************************************/

Partie_DefStruct : define_struct Partie_DefStruct
                    | commentaire
                    |
                    ;

define_struct : mc_STRUCT AcO Partie_VAR AcF idf PVerg { if (rechercher2($5) == 1 ) printf ("ligne %d , entite  %s : erreur sementique Double Declaration \n",nbligne,$5);
                                                            else {
                                                                        inserer2(strdup($5),"STRUCT",0,2,0);  
                                                            }              
                                                        }
                    ;

/***************************************   Partie declaration ***********************************************/

Partie_VAR : dec_simple Partie_VAR 
            | dec_tab Partie_VAR
            | dec_const Partie_VAR
            | dec_struct Partie_VAR
            | commentaire Partie_VAR
            |
            ;


dec_simple : TYPE A PVerg
;

A : idf  Verg A {   if (rechercher2($1) == 1 ) printf ("ligne %d , entite  %s : erreur sementique Double Declaration \n",nbligne,$1);
                         else {
                                    inserer2(strdup($1),suavType,0,2,0);  
                         }
                }
    | idf {   if (rechercher2($1) == 1 ) printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,$1);
                         else {
                                    inserer2(strdup($1),suavType,0,2,0);  
                         }
                    }
    | idf Egl valeur {   if (rechercher2($1) == 1 ) printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,$1);
                         else {     if (suavType == "INTEGER" && suavTypeval == "INTEGER" ){
                                            inserer2(strdup($1),suavType,0,2,vale);  
                                        }else { if (suavType == "FLOAT" && suavTypeval == "FLOAT" ){
                                            inserer2(strdup($1),suavType,0,2,valr);
                                                }else {
                                                    printf ("line %d, entite  %s : erreur sementique non compatibilite de type \n",nbligne,$1);
                                                }
                                        }
                                    
                         }
                    }
    | idf Egl PrO valeur PrF {   if (rechercher2($1) == 1 ) printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,$1);
                                    else {     if (suavType == "INTEGER" && suavTypeval == "INTEGER" ){
                                                        inserer2(strdup($1),suavType,0,2,vale);  
                                                    }else { if (suavType == "FLOAT" && suavTypeval == "FLOAT" ){
                                                        inserer2(strdup($1),suavType,0,2,valr);
                                                            }else {
                                                                printf ("line %d, entite  %s : erreur sementique non compatibilite de type \n",nbligne,$1);
                                                            }
                                                    }
                                        }
                                }
    ;

dec_tab : TYPE idf CrO entier CrF E PVerg {   if (rechercher2($2) == 1 ) {printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,$2);
                                                }else {if($4 <= 0) {printf("line %d, entite  %s : erreur sementique taille du tableau doit etre positif \n",nbligne,$2);
                                                        }else{inserer2(strdup($2),suavType,$4,2,0); }
                                                    }
                                         }
;

E : Verg idf CrO entier CrF E {   if (rechercher2($2) == 1 ) {printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,$2);
                                                }else {if($4 <= 0) {printf("line %d, entite  %s : erreur sementique taille du tableau doit etre positif \n",nbligne,$2);
                                                        }else{inserer2(strdup($2),suavType,$4,2,0); }
                                                    }
                                         }
    |
    ;

dec_const : mc_CONST idf Egl valeur PVerg {   if (rechercher2($2) == 1 ) {printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,$2);
                                                }else{
                                                    if (suavTypeval == "INTEGER"){
                                                        inserer2(strdup($2),suavTypeval,0,1,vale);  
                                                    }else{
                                                        inserer2(strdup($2),suavTypeval,0,1,valr);
                                                    }
                                                }
                                                
                                            }
            | mc_CONST idf Egl PrO valeur PrF PVerg {   if (rechercher2($2) == 1 ) {printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,$2);
                                                            }else{
                                                                if (suavTypeval == "INTEGER"){
                                                                    inserer2(strdup($2),suavTypeval,0,1,vale);  
                                                                }else{
                                                                    inserer2(strdup($2),suavTypeval,0,1,valr);
                                                                }
                                                            }
                                                            
                                                    }
            ;

valeur : entier {suavTypeval = "INTEGER";
                 vale = $1;
                 vaal = $1;
                    }
        | reel {suavTypeval = "FLOAT";
                valr = $1;
                vaal = $1;
                    }
        ;

dec_struct : mc_STRUCT idf {   if (rechercher2($2) == 0 ) {
                                                printf ("line %d, entite  %s : erreur sementique structure non definie \n",nbligne,$2);
                                        }else {nom=strdup($2);}                        
                                    } B PVerg 
    ;
B : idf Verg B {   if (rechercher2($1) == 1 ) {printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,$1);}
                                                else {
                                                            inserer2(strdup($1),nom,0,2,0);  
                                                }
                                }
    | idf {   if (rechercher2($1) == 1 ) {printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,$1);}
                                                else {
                                                            inserer2(strdup($1),nom,0,2,0);  
                                                }
                                }
    ;

TYPE : mc_INTEGER {suavType = "INTEGER";}
        | mc_FLOAT {suavType = "FLOAT";}
        ;

/***************************************   Partie code ***********************************************/

Partie_CODE : Aff Partie_CODE
            | Instruction_IF Partie_CODE
            | Instruction_FOR Partie_CODE
            | Instruction_WHILE Partie_CODE
            | commentaire Partie_CODE
            |
            ;

Aff : idf Egl expression PVerg {
                                    suavType = GetType($1);
                                    if(!rechercher2($1)) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,$1);
                                    }else{
                                        if (GetConst($1) == 1){
                                            printf ("ligne %d , entite %s : erreur sementique une constante ne peut pas etre modifie \n",nbligne,$1);
                                        }else{
                                            if ($3.vall == floor($3.vall)){
                                                if (GetType($1) == "INTEGER"){
                                                    SetVal(strdup($1),$3.vall); 
                                                }else{
                                                    printf ("ligne %d , entite %s : erreur sementique non compatibilite de type \n",nbligne,$1);
                                                } 
                                            }else{
                                                if (GetType($1) == "FLOAT"){
                                                    SetVal(strdup($1),$3.vall);
                                                }else{
                                                    printf ("ligne %d , entite %s : erreur sementique non compatibilite de type \n",nbligne,$1);
                                                } 
                                            } 
                                        }
                                        //SetVal(strdup($1),$3.vall);
                                    }
                                    quad (":=",$3.chaine,"",$1);
                                } 
        | idf Point idf Egl expression PVerg {
            suavType = GetType($3);
            if(!rechercher2($1)) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,$1);
            }else{
                 if(GetType($1) == "INTEGER" || GetType($1) == "FLOAT" || GetType($1) == "STRUCT"){
                    printf ("ligne %d , entite %s : erreur sementique premier idf doit etre une instance d'une structure \n",nbligne,$1);
                 }else{
                    if(!rechercher2($3)) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,$3);
                    }else{
                        if (GetConst($3) == 1){
                            printf ("ligne %d , entite %s : erreur sementique une constante ne peut pas etre modifie \n",nbligne,$3);
                        }else{
                            if ($5.vall == floor($5.vall)){
                                if (GetType($3) == "INTEGER"){
                                    SetVal(strdup($3),$5.vall); 
                                }else{
                                    printf ("ligne %d , entite %s : erreur sementique non compatibilite de type \n",nbligne,$3);
                                } 
                            }else{
                                if (GetType($3) == "FLOAT"){
                                    SetVal(strdup($3),$5.vall);
                                }else{
                                    printf ("ligne %d , entite %s : erreur sementique non compatibilite de type \n",nbligne,$3);
                                } 
                            }
                        }
                    }
                }
            }
            quad (":=",$5.chaine,"",$3);
        }
        | idf CrO idf CrF Egl expression PVerg {
            suavType = GetType($1);
            if(!rechercher2($1)) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,$1);
            }else{
                if(isTab($1) == 0){
                    printf ("ligne %d , entite %s : erreur sementique l'idf n'est pas un tableau \n",nbligne,$1);
                }else{
                    if(!rechercher2($3)) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,$3);
                    }else{
                        if(GetType($3) != "INTEGER" || isTab($3)){
                            printf ("ligne %d , entite %s : erreur sementique l'indice doit etre un entier \n",nbligne,$3);
                        }else{
                            if(GetValeur($3) <= 0 || GetValeur($3) > isTab($1)){
                                printf ("ligne %d , entite %s : erreur sementique l'indice doit etre dans l'intervalle de tableau \n",nbligne,$3);
                            }else{
                                if ($6.vall == floor($6.vall)){
                                    if (suavType == "INTEGER"){
                                        sprintf(val, "%s[%d]",$1,GetValeur($3));
                                        quad (":=",$6.chaine,"",val);
                                        if (rechercher2(val) == 1 ) {
                                            SetVal(val,$6.vall);
                                        }else {
                                            inserer2(val,GetType($1),0,2,$6.vall);  
                                        }
                                    }else{
                                        printf ("ligne %d , entite %s : erreur sementique non compatibilite de type \n",nbligne,$1);
                                    } 
                                }else{
                                    if (suavType == "FLOAT"){
                                        sprintf(val, "%s[%d]",$1,GetValeur($3));
                                        quad (":=",$6.chaine,"",val);
                                        if (rechercher2(val) == 1 ) {
                                            SetVal(val,$6.vall);
                                        }else {
                                            inserer2(val,GetType($1),0,2,$6.vall);  
                                        }
                                    }else{
                                        printf ("ligne %d , entite %s : erreur sementique non compatibilite de type \n",nbligne,$1);
                                    } 
                                }
                            }
                        }
                    }
                }
            }
        }
        | idf CrO entier CrF Egl expression PVerg{ 
            suavType = GetType($1);
            sprintf(val, "%s[%d]",$1,$3);
            if(!rechercher2($1)) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,$1);
            }else{
                if(isTab($1) == 0){
                    printf ("ligne %d , entite %s : erreur sementique l'idf n'est pas un tableau \n",nbligne,$1);
                }else{
                            if($3 <= 0 || $3 > isTab($1)){
                                printf ("ligne %d , entite %s : erreur sementique l'indice doit etre dans l'intervalle de tableau \n",nbligne,$3);
                            }else{
                                if ($6.vall == floor($6.vall)){
                                    if (suavType == "INTEGER"){
                                        sprintf(val, "%s[%d]",$1,$3);
                                        quad (":=",$6.chaine,"",val);
                                        if (rechercher2(val) == 1 ) {
                                            SetVal(val,$6.vall);
                                        }else {
                                            inserer2(val,GetType($1),0,2,$6.vall);
                                        }
                                    }else{
                                        printf ("ligne %d , entite %s : erreur sementique non compatibilite de type \n",nbligne,$1);
                                    } 
                                }else{
                                    if (suavType == "FLOAT"){
                                        sprintf(val, "%s[%d]",$1,$3);
                                        quad (":=",$6.chaine,"",val);
                                        if (rechercher2(val) == 1 ) {
                                            SetVal(val,$6.vall);
                                        }else {
                                            inserer2(val,GetType($1),0,2,$6.vall);  
                                        }
                                    }
                                }
                            }
                        
                       
                }
            }
        }
        ;

expression : idf {
                    if(!rechercher2($1)) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,$1);}
                    else{
                        if(isTab($1)){
                            printf ("ligne %d , entite %s : erreur sementique l'idf est un tableau \n",nbligne,$1);
                        }
                    }
                    $$.chaine=strdup($1);      
                    $$.vall=GetValeur($1);
                } 
            | expression Plus expression 
              {sprintf(tempC, "T%d",nTemp);nTemp++;
                $$.chaine=strdup(tempC);tempC[0]='\0'; quad ("+",$1.chaine,$3.chaine,$$.chaine);
                $$.vall = $1.vall + $3.vall ;
                }
            | expression Moins expression
              {sprintf(tempC, "T%d",nTemp);nTemp++;
                $$.chaine=strdup(tempC);tempC[0]='\0'; quad ("-",$1.chaine,$3.chaine,$$.chaine);
                $$.vall = $1.vall - $3.vall;
                }
            | expression Mult expression
              {sprintf(tempC, "T%d",nTemp);nTemp++;
                $$.chaine=strdup(tempC);tempC[0]='\0'; quad ("*",$1.chaine,$3.chaine,$$.chaine);
                $$.vall = $1.vall * $3.vall;
                }
                
            | expression Div expression
              {sprintf(tempC, "T%d",nTemp);nTemp++;
                $$.chaine=strdup(tempC);tempC[0]='\0'; quad ("/",$1.chaine,$3.chaine,$$.chaine);
                $$.vall = $1.vall / $3.vall;
                  if ($3.vall==0){  printf( " erreur sementique ---- division sur 0 -----",$3.vall);}
              }
            | reel {  $$.chaine=ToSTR($1); $$.vall=$1; }
            | entier {  $$.chaine=ToSTR($1); $$.vall=$1; }
            | PrO expression PrF {$$.chaine = $2.chaine; $$.vall = $2.vall;}
            | idf CrO idf CrF {
                    if(!rechercher2($1)) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,$1);
                    }else{
                        if(!rechercher2($3)) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,$3);
                        }else{
                                    if(GetType($3) != "INTEGER"){printf ("ligne %d , entite %s : erreur sementique indice doit etre un entier \n",nbligne,$3);
                                    }else{
                                        if(GetValeur($3) <= 0 || GetValeur($3)>isTab($1)){
                                            printf ("ligne %d , entite %s : erreur sementique indice doit etre dans l'intervalle de la taille du tableau \n",nbligne,$3);
                                        }
                                    }
                            }
                    }
                    sprintf(val, "%s[%d]",$1,GetValeur($3)); $$.chaine=strdup(val); $$.vall=GetValeur(val);
                    printf("%f----",GetValeur(val));
            }
            | idf CrO entier CrF {
                    if(!rechercher2($1)) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,$1);}
                        else{
                            if($3 <= 0 || $3 > isTab($1)){
                                printf ("ligne %d , entite %s : erreur sementique indice doit etre dans l'intervalle de la taille du tableau \n",nbligne,$1);
                            }
                    }
                    sprintf(val, "%s[%d]",$1,$3); $$.chaine=strdup(val); $$.vall=GetValeur(val);
            }
            ;

Instruction_IF : debut_if mc_ELSE AcO Partie_CODE AcF {q[fin].op1 = ToSTR(indq);
                                                      printf("%s",q[fin].op1);
                                                      printf("%d",fin);}
;   
				
debut_if : M_if AcO Partie_CODE AcF { 
                                    q[deb_else].op1 = ToSTR(indq);
                                    fin = indq;
                                    quad("BR","","","");
                                    printf("%s",q[deb_else].op1);
                                    
                                    }
;
M_if : mc_IF PrO condition PrF {
    
    deb_else = indq;
    quad("BZ","",strdup($3.chaine),"");
}
;

Instruction_FOR : debut_for Partie_CODE AcF {
    quad("BR",ToSTR(d_for),"","");
    q[d_for].op1 = ToSTR(indq);
}
;
			
debut_for : mc_FOR PrO idf DxP X DxP X DxP X PrF AcO { 
                                                    if(!rechercher2($3)) {printf ("ligne %d , entite %s : erreur semantique idf non-declare \n",nbligne,$3);
                                                        }else{
                                                            if (GetConst($3) == 1){
                                                                printf ("ligne %d , entite %s : erreur semantique une constante ne peut pas etre modifie \n",nbligne,$3);
                                                            }else{
                                                                if(GetType($3) != "INTEGER" || isTab($3)){
                                                                    printf ("ligne %d , entite %s : erreur semantique l'indice doit etre un entier \n",nbligne,$3);
                                                                }else{
                                                                    if($9.type > 0){
                                                                        if($5.type >= $9.type){
                                                                            printf ("ligne %d , entite %s : erreur semantique initialisation invalide \n",nbligne,$3);
                                                                        }else{
                                                                            if ($7.type <= 0){
                                                                                printf ("ligne %d , entite %s : erreur semantique pas ne doit pas eter nul \n",nbligne,$7);
                                                                            }
                                                                        }
                                                                    }else printf ("ligne %d , entite %s : erreur semantique la borne sup de la boucle for doit etre sup a 0 \n",nbligne,$3);
                                                                }
                                                                
                                                            }
                                                            SetVal(strdup($3),$5.type);
                                                        }
                                                        d_for = indq;
                                                      quad("BG","",$3,$9.chaine);
                                                      }
;

X : entier { $$.type = $1; suavType = "INTEGER";$$.chaine = ToSTR($1);}
    | idf {
                if(!rechercher2($1)) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,$1);}
                else{
                    if(GetType($1) == "INTEGER"){
                        $$.type = GetValeur($1);  
                    }else{
                        printf ("ligne %d , entite %s : erreur sementique idf doit etre un entier \n",nbligne,$1);
                    }
                }
                $$.chaine = strdup($1);
            }
    ;

Instruction_WHILE : m_while Partie_CODE AcF {
                                                        quad("BR",ToSTR(d_while),"","");
                                                        q[fin_while].op1 = ToSTR(indq);
}
;

m_while : debut_while PrO condition PrF AcO {
    fin_while = indq;
    quad("BZ","",$3.chaine,"");
}

debut_while : mc_WHILE {
                            d_while = indq;
}
;

condition :   expression Sup expression
                {sprintf(tempC, "T%d",nTemp);nTemp++;$$.chaine=strdup(tempC);tempC[0]='\0'; createQuadCompare (6,$1.chaine,$3.chaine,$$.chaine);}
            | expression Inf expression
                {sprintf(tempC, "T%d",nTemp);nTemp++;$$.chaine=strdup(tempC);tempC[0]='\0'; createQuadCompare (5,$1.chaine,$3.chaine,$$.chaine);}
            | expression Sup Egl expression
                {sprintf(tempC, "T%d",nTemp);nTemp++;$$.chaine=strdup(tempC);tempC[0]='\0'; createQuadCompare (3,$1.chaine,$4.chaine,$$.chaine);}
            | expression Inf Egl expression
                {sprintf(tempC, "T%d",nTemp);nTemp++;$$.chaine=strdup(tempC);tempC[0]='\0'; createQuadCompare (4,$1.chaine,$4.chaine,$$.chaine);}
            | expression Neg Egl expression
                {sprintf(tempC, "T%d",nTemp);nTemp++;$$.chaine=strdup(tempC);tempC[0]='\0'; createQuadCompare (2,$1.chaine,$4.chaine,$$.chaine);}
            | expression Egl Egl expression 
                {sprintf(tempC, "T%d",nTemp);nTemp++;$$.chaine=strdup(tempC);tempC[0]='\0'; createQuadCompare (1,$1.chaine,$4.chaine,$$.chaine);}
            | condition And condition
                {sprintf(tempC, "T%d",nTemp);nTemp++;$$.chaine=strdup(tempC);tempC[0]='\0'; createQuadLogic (3,$1.chaine,$3.chaine,$$.chaine);}
            | condition Ou condition
                {sprintf(tempC, "T%d",nTemp);nTemp++;$$.chaine=strdup(tempC);tempC[0]='\0'; createQuadLogic (2,$1.chaine,$3.chaine,$$.chaine);}
            | Neg expression
                {sprintf(tempC, "T%d",nTemp);nTemp++;$$.chaine=strdup(tempC);tempC[0]='\0'; createQuadLogic (1,$2.chaine,"",$$.chaine);}
            | expression
                {$$.chaine = $1.chaine; $$.vall = $1.vall;}
            ;

%%

int yyerror (char *msg)
{
    printf(" %s ligne %d cologne %d \n",msg,nbligne,nbcol);
    exit (0);
    
}

int main()
{
    initialisation();
   
	yyparse();
    //afficher();
    printHachTable();
    afficherQuad();
    optimisation();
    printf("----------------------------------------\n");
    afficherQuad();

    assembler();
}

int yywrap() {
    return 1; 
}