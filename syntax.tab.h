
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_VAR = 258,
     mc_CODE = 259,
     commentaire = 260,
     mc_CONST = 261,
     mc_ELSE = 262,
     mc_FLOAT = 263,
     mc_FOR = 264,
     mc_IF = 265,
     mc_INTEGER = 266,
     mc_STRUCT = 267,
     mc_WHILE = 268,
     AcF = 269,
     AcO = 270,
     entier = 271,
     reel = 272,
     Point = 273,
     And = 274,
     com = 275,
     Verg = 276,
     PrO = 277,
     PrF = 278,
     Plus = 279,
     PVerg = 280,
     DxP = 281,
     CrO = 282,
     CrF = 283,
     Egl = 284,
     Inf = 285,
     Sup = 286,
     Moins = 287,
     Mult = 288,
     Div = 289,
     Ou = 290,
     Neg = 291,
     idf = 292
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 38 "syntax.y"

  int entier;
  char* str; 
  float reel;  
  struct{
    int type;
    char * chaine;
    float vall;
  }garti;



/* Line 1676 of yacc.c  */
#line 102 "syntax.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


