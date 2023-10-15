%{
	#include "syntax.tab.h"
	extern YYSTYPE yylval;
	extern nbcol;
	extern nbligne;
%}
IDF [a-zA-Z]([a-z]|[0-9])*
entier  ([1-9][0-9]*|0)|([-+]?[1-9][0-9]*)  
reel  ([0-9]+\.[0-9]+)|([-+]?[0-9]+\.[0-9]+)
commentaire "%%"(.)*
chiffr [0-9]+

%%

"VAR" {		printf("%s",yytext);
	
			rechercher(yytext,"Mot cle"," ",0, 1);
			
			nbcol = nbcol + strlen(yytext);
			return mc_VAR;}
"CODE" {	
			printf("%s",yytext);
			rechercher(yytext,"Mot cle"," ",0, 1);
			
			nbcol = nbcol + strlen(yytext);
			return mc_CODE;}
"INTEGER" {	
			printf("%s",yytext);
			rechercher(yytext,"Mot cle"," ",0, 1);
			
			nbcol = nbcol + strlen(yytext);
			return mc_INTEGER;}
"FLOAT" {	
			printf("%s",yytext);
			rechercher(yytext,"Mot cle"," ",0, 1);
			
			nbcol = nbcol + strlen(yytext);
			return mc_FLOAT;}
"CONST" {	
			printf("%s",yytext);
			rechercher(yytext,"Mot cle"," ",0, 1);
			
			nbcol = nbcol + strlen(yytext);
			return mc_CONST;}
"STRUCT" {	printf("%s",yytext);
			rechercher(yytext,"Mot cle"," ",0, 1);
			
			nbcol = nbcol + strlen(yytext);
			return mc_STRUCT;}
"IF" {		printf("%s",yytext);
			rechercher(yytext,"Mot cle"," ",0, 1);
			
			nbcol = nbcol + strlen(yytext);
			return mc_IF;}
"ELSE" {	printf("%s",yytext);
			rechercher(yytext,"Mot cle"," ",0, 1);
			
			nbcol = nbcol + strlen(yytext);
			return mc_ELSE;}
"FOR" {		printf("%s",yytext);
			rechercher(yytext,"Mot cle"," ",0, 1);
			
			nbcol = nbcol + strlen(yytext);
			return mc_FOR;}
"WHILE" {	printf("%s",yytext);
			rechercher(yytext,"Mot cle"," ",0, 1);
			
			nbcol = nbcol + strlen(yytext);
			return mc_WHILE;}
			
"{" { 	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return AcO;}
"}" {  	printf("%s",yytext);	
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return AcF;}
"%" {  	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return com;}
"," {  	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return Verg;}
";" {  	printf("%s",yytext);	
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return PVerg;}
"[" {  	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return CrO;}
"]" {  	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return CrF;}
"(" {  	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return PrO;}
")" {  	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return PrF;}
"=" {  	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return Egl;}
":" {  	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return DxP;}
"<" {  	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return Inf;}
">" {  	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return Sup;}
"+" {  	printf("%s",yytext);	
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return Plus;}
"-" {  	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return Moins;}
"*" {  	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return Mult;}
"/" {  	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return Div;}
"&&" {  	
	
		printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return And;}
"||" {  	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return Ou;}
"!" {  	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return Neg;}
"." {  	printf("%s",yytext);
		rechercher(yytext,"Separateur",0,0, 2);
		
		nbcol= nbcol+strlen(yytext);
		return Point;}
		
{IDF} {	printf("%s",yytext);
		if (yyleng > 8) printf ("erreur lexicale : idf trop long") ;
		nbcol = nbcol + strlen(yytext);
		yylval.str = strdup(yytext);
		return idf;}

{entier} {	printf("%s",yytext);
		yylval.entier = atoi(yytext);
		if(yylval.entier > -32768 && yylval.entier < 32768){
			rechercher (yytext,"CONST","INTEGER",atoi(yytext), 0); 
			nbcol = nbcol + strlen(yytext);
			return entier;
		}else{
			printf("Depassement de capacite la ligne %d , la colone %d\n",nbligne,nbcol);
		}
		}

{reel} {
		printf("%s",yytext);	
		yylval.reel = atof(yytext);
		rechercher (yytext,"CONST","FLOAT",atof(yytext), 0); 
		nbcol = nbcol + strlen(yytext);
		return reel;}
		
[ \t] { printf("%s",yytext);
		nbcol= nbcol+strlen(yytext);}
[\n] {  
	printf("%s",yytext);
	nbligne++; nbcol=1;}	

{commentaire} {
	printf("%s",yytext);
	nbcol= nbcol+strlen(yytext);}

. {printf("Erreur lexicale la ligne %d , la colone %d\n",nbligne,nbcol);}





