
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syntax.y"

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


/* Line 189 of yacc.c  */
#line 111 "syntax.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 38 "syntax.y"

  int entier;
  char* str; 
  float reel;  
  struct{
    int type;
    char * chaine;
    float vall;
  }garti;



/* Line 214 of yacc.c  */
#line 197 "syntax.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 209 "syntax.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   205

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNRULES -- Number of states.  */
#define YYNSTATES  186

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    16,    19,    21,    22,    29,    32,    35,
      38,    41,    44,    45,    49,    53,    55,    59,    65,    73,
      80,    81,    87,    95,    97,    99,   100,   106,   110,   112,
     114,   116,   119,   122,   125,   128,   131,   132,   137,   144,
     152,   160,   162,   166,   170,   174,   178,   180,   182,   186,
     191,   196,   202,   207,   212,   216,   228,   230,   232,   236,
     242,   244,   248,   252,   257,   262,   267,   272,   276,   280,
     283
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      39,     0,    -1,    37,    15,    40,     3,    15,    42,    14,
       4,    15,    53,    14,    14,    -1,    41,    40,    -1,     5,
      -1,    -1,    12,    15,    42,    14,    37,    25,    -1,    43,
      42,    -1,    45,    42,    -1,    47,    42,    -1,    49,    42,
      -1,     5,    42,    -1,    -1,    52,    44,    25,    -1,    37,
      21,    44,    -1,    37,    -1,    37,    29,    48,    -1,    37,
      29,    22,    48,    23,    -1,    52,    37,    27,    16,    28,
      46,    25,    -1,    21,    37,    27,    16,    28,    46,    -1,
      -1,     6,    37,    29,    48,    25,    -1,     6,    37,    29,
      22,    48,    23,    25,    -1,    16,    -1,    17,    -1,    -1,
      12,    37,    50,    51,    25,    -1,    37,    21,    51,    -1,
      37,    -1,    11,    -1,     8,    -1,    54,    53,    -1,    56,
      53,    -1,    59,    53,    -1,    62,    53,    -1,     5,    53,
      -1,    -1,    37,    29,    55,    25,    -1,    37,    18,    37,
      29,    55,    25,    -1,    37,    27,    37,    28,    29,    55,
      25,    -1,    37,    27,    16,    28,    29,    55,    25,    -1,
      37,    -1,    55,    24,    55,    -1,    55,    32,    55,    -1,
      55,    33,    55,    -1,    55,    34,    55,    -1,    17,    -1,
      16,    -1,    22,    55,    23,    -1,    37,    27,    37,    28,
      -1,    37,    27,    16,    28,    -1,    57,     7,    15,    53,
      14,    -1,    58,    15,    53,    14,    -1,    10,    22,    65,
      23,    -1,    60,    53,    14,    -1,     9,    22,    37,    26,
      61,    26,    61,    26,    61,    23,    15,    -1,    16,    -1,
      37,    -1,    63,    53,    14,    -1,    64,    22,    65,    23,
      15,    -1,    13,    -1,    55,    31,    55,    -1,    55,    30,
      55,    -1,    55,    31,    29,    55,    -1,    55,    30,    29,
      55,    -1,    55,    36,    29,    55,    -1,    55,    29,    29,
      55,    -1,    65,    19,    65,    -1,    65,    35,    65,    -1,
      36,    55,    -1,    55,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    63,    64,    65,    68,    77,    78,    79,
      80,    81,    82,    86,    89,    94,    99,   111,   124,   131,
     136,   139,   149,   161,   165,   171,   171,   176,   181,   188,
     189,   194,   195,   196,   197,   198,   199,   202,   227,   258,
     304,   346,   356,   361,   366,   372,   378,   379,   380,   381,
     397,   408,   413,   421,   428,   434,   462,   463,   476,   482,
     487,   492,   494,   496,   498,   500,   502,   504,   506,   508,
     510
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_VAR", "mc_CODE", "commentaire",
  "mc_CONST", "mc_ELSE", "mc_FLOAT", "mc_FOR", "mc_IF", "mc_INTEGER",
  "mc_STRUCT", "mc_WHILE", "AcF", "AcO", "entier", "reel", "Point", "And",
  "com", "Verg", "PrO", "PrF", "Plus", "PVerg", "DxP", "CrO", "CrF", "Egl",
  "Inf", "Sup", "Moins", "Mult", "Div", "Ou", "Neg", "idf", "$accept", "S",
  "Partie_DefStruct", "define_struct", "Partie_VAR", "dec_simple", "A",
  "dec_tab", "E", "dec_const", "valeur", "dec_struct", "$@1", "B", "TYPE",
  "Partie_CODE", "Aff", "expression", "Instruction_IF", "debut_if", "M_if",
  "Instruction_FOR", "debut_for", "X", "Instruction_WHILE", "m_while",
  "debut_while", "condition", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    40,    40,    40,    41,    42,    42,    42,
      42,    42,    42,    43,    44,    44,    44,    44,    45,    46,
      46,    47,    47,    48,    48,    50,    49,    51,    51,    52,
      52,    53,    53,    53,    53,    53,    53,    54,    54,    54,
      54,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    56,    57,    58,    59,    60,    61,    61,    62,    63,
      64,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    12,     2,     1,     0,     6,     2,     2,     2,
       2,     2,     0,     3,     3,     1,     3,     5,     7,     6,
       0,     5,     7,     1,     1,     0,     5,     3,     1,     1,
       1,     2,     2,     2,     2,     2,     0,     4,     6,     7,
       7,     1,     3,     3,     3,     3,     1,     1,     3,     4,
       4,     5,     4,     4,     3,    11,     1,     1,     3,     5,
       1,     3,     3,     4,     4,     4,     4,     3,     3,     2,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     5,     1,     4,     0,     0,     5,    12,
       0,     3,    12,     0,    30,    29,     0,     0,    12,    12,
      12,    12,     0,    12,    11,     0,    25,     0,     7,     8,
       9,    10,    15,     0,     0,     0,     0,     0,     0,     0,
       0,    13,     0,    23,    24,     0,     0,    28,     0,     6,
      15,    14,     0,     0,    16,     0,     0,    21,     0,    26,
      20,     0,    36,     0,    27,     0,     0,    17,    36,     0,
       0,    60,     0,     0,    36,    36,     0,     0,    36,    36,
      36,    36,     0,    22,     0,    18,    35,     0,     0,     0,
       0,     0,     0,    31,    32,     0,    36,    33,     0,    34,
       0,     0,     0,     0,    47,    46,     0,     0,    41,    70,
       0,     0,     0,     0,     0,     2,    36,     0,    54,    58,
       0,     0,     0,     0,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,     0,     0,     0,     0,
      37,     0,    52,     0,    20,    56,    57,     0,    48,     0,
       0,    42,     0,     0,    62,     0,    61,    43,    44,    45,
       0,    67,    68,     0,     0,     0,    51,    59,    19,     0,
      50,    49,    66,    64,    63,    65,    38,     0,     0,     0,
      40,    39,     0,     0,     0,    55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     8,    17,    18,    33,    19,    66,    20,
      46,    21,    36,    48,    22,    73,    74,   109,    75,    76,
      77,    78,    79,   147,    80,    81,    82,   110
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -151
static const yytype_int16 yypact[] =
{
     -20,     6,    56,    40,  -151,  -151,    44,    62,    40,   144,
      64,  -151,   144,    43,  -151,  -151,    60,    70,   144,   144,
     144,   144,    73,   144,  -151,    65,  -151,    75,  -151,  -151,
    -151,  -151,   119,    89,    95,   120,    86,   113,   102,   104,
     137,  -151,   143,  -151,  -151,   -14,   116,   130,   132,  -151,
      -1,  -151,   133,   -14,  -151,   145,   135,  -151,    86,  -151,
     141,   140,    13,   139,  -151,   128,   142,  -151,    13,   146,
     147,  -151,    84,   152,    13,    13,   163,   156,    13,    13,
      13,    13,   150,  -151,   148,  -151,  -151,   136,   -12,   149,
     -10,    41,   160,  -151,  -151,   161,    13,  -151,   164,  -151,
     165,   -12,   166,   151,  -151,  -151,    41,    41,   153,    57,
      47,   154,   157,   159,    83,  -151,    13,   167,  -151,  -151,
      48,   162,    17,    72,   111,    18,    41,   155,    14,    31,
      41,    41,    41,   168,   -12,  -151,   -12,    41,   169,   170,
    -151,   174,  -151,   176,   141,  -151,  -151,   175,  -151,   172,
     177,    42,    41,    41,   111,    41,   111,    42,  -151,  -151,
      41,  -151,  -151,    94,    41,    41,  -151,  -151,  -151,    17,
    -151,  -151,   111,   111,   111,   111,  -151,    97,   100,   178,
    -151,  -151,    17,   171,   180,  -151
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,   181,  -151,    80,  -151,   158,  -151,    49,  -151,
      32,  -151,  -151,   134,  -151,   -67,  -151,   -91,  -151,  -151,
    -151,  -151,  -151,  -150,  -151,  -151,  -151,   -92
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     114,    86,    43,    44,   104,   105,   112,    93,    94,   120,
     106,    97,    98,    99,   100,   123,   124,     1,    68,   179,
      38,     3,    69,    70,   107,   108,    71,   113,    40,   117,
     104,   105,   183,   145,   149,   151,   106,   154,   156,   157,
     158,   159,   161,   153,   162,     5,   163,   104,   105,   141,
      72,   108,     6,   106,   146,   150,     4,   104,   105,     9,
     155,   172,   173,   106,   174,    10,   134,   134,   108,   175,
     135,   143,    54,   177,   178,   131,   132,    56,   108,    23,
      25,   126,   136,   136,    27,    61,   127,   128,   129,   130,
     131,   132,    24,   133,    35,   148,   126,    26,    28,    29,
      30,    31,    89,    34,   130,   131,   132,   126,   140,    42,
      32,    90,    37,    91,    41,   130,   131,   132,   126,   176,
      52,   126,   180,    47,   126,   181,   130,   131,   132,   130,
     131,   132,   130,   131,   132,   126,    43,    44,    49,    50,
      38,    57,    45,   130,   131,   132,    39,    55,    40,    12,
      13,    58,    14,    43,    44,    15,    16,    59,    63,    53,
      62,    60,    65,    67,    83,    84,    92,    85,    87,    88,
      95,    96,   101,   103,   115,   102,   116,   122,   118,   119,
     125,   142,   121,   137,   152,   138,   111,   139,   166,    11,
     144,   167,    64,   168,   184,   185,    51,   160,   164,   165,
     170,   169,     0,     0,   182,   171
};

static const yytype_int16 yycheck[] =
{
      91,    68,    16,    17,    16,    17,    16,    74,    75,   101,
      22,    78,    79,    80,    81,   106,   107,    37,     5,   169,
      21,    15,     9,    10,    36,    37,    13,    37,    29,    96,
      16,    17,   182,    16,    16,   126,    22,   128,   129,   130,
     131,   132,   134,    29,   136,     5,   137,    16,    17,   116,
      37,    37,    12,    22,    37,    37,     0,    16,    17,    15,
      29,   152,   153,    22,   155,     3,    19,    19,    37,   160,
      23,    23,    40,   164,   165,    33,    34,    45,    37,    15,
      37,    24,    35,    35,    14,    53,    29,    30,    31,    32,
      33,    34,    12,    36,    29,    23,    24,    37,    18,    19,
      20,    21,    18,    23,    32,    33,    34,    24,    25,    14,
      37,    27,    37,    29,    25,    32,    33,    34,    24,    25,
      16,    24,    25,    37,    24,    25,    32,    33,    34,    32,
      33,    34,    32,    33,    34,    24,    16,    17,    25,    37,
      21,    25,    22,    32,    33,    34,    27,     4,    29,     5,
       6,    21,     8,    16,    17,    11,    12,    25,    23,    22,
      15,    28,    21,    23,    25,    37,    14,    25,    22,    22,
       7,    15,    22,    37,    14,    27,    15,    26,    14,    14,
      27,    14,    16,    29,    29,    28,    37,    28,    14,     8,
      28,    15,    58,   144,    23,    15,    38,    29,    29,    29,
      28,    26,    -1,    -1,    26,    28
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    39,    15,     0,     5,    12,    40,    41,    15,
       3,    40,     5,     6,     8,    11,    12,    42,    43,    45,
      47,    49,    52,    15,    42,    37,    37,    14,    42,    42,
      42,    42,    37,    44,    42,    29,    50,    37,    21,    27,
      29,    25,    14,    16,    17,    22,    48,    37,    51,    25,
      37,    44,    16,    22,    48,     4,    48,    25,    21,    25,
      28,    48,    15,    23,    51,    21,    46,    23,     5,     9,
      10,    13,    37,    53,    54,    56,    57,    58,    59,    60,
      62,    63,    64,    25,    37,    25,    53,    22,    22,    18,
      27,    29,    14,    53,    53,     7,    15,    53,    53,    53,
      53,    22,    27,    37,    16,    17,    22,    36,    37,    55,
      65,    37,    16,    37,    55,    14,    15,    53,    14,    14,
      65,    16,    26,    55,    55,    27,    24,    29,    30,    31,
      32,    33,    34,    36,    19,    23,    35,    29,    28,    28,
      25,    53,    14,    23,    28,    16,    37,    61,    23,    16,
      37,    55,    29,    29,    55,    29,    55,    55,    55,    55,
      29,    65,    65,    55,    29,    29,    14,    15,    46,    26,
      28,    28,    55,    55,    55,    55,    25,    55,    55,    61,
      25,    25,    26,    61,    23,    15
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 58 "syntax.y"
    {printf("\nProgramme correcte syntaxiquement\n"); YYACCEPT;;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 68 "syntax.y"
    { if (rechercher2((yyvsp[(5) - (6)].str)) == 1 ) printf ("ligne %d , entite  %s : erreur sementique Double Declaration \n",nbligne,(yyvsp[(5) - (6)].str));
                                                            else {
                                                                        inserer2(strdup((yyvsp[(5) - (6)].str)),"STRUCT",0,2,0);  
                                                            }              
                                                        ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 89 "syntax.y"
    {   if (rechercher2((yyvsp[(1) - (3)].str)) == 1 ) printf ("ligne %d , entite  %s : erreur sementique Double Declaration \n",nbligne,(yyvsp[(1) - (3)].str));
                         else {
                                    inserer2(strdup((yyvsp[(1) - (3)].str)),suavType,0,2,0);  
                         }
                ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 94 "syntax.y"
    {   if (rechercher2((yyvsp[(1) - (1)].str)) == 1 ) printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,(yyvsp[(1) - (1)].str));
                         else {
                                    inserer2(strdup((yyvsp[(1) - (1)].str)),suavType,0,2,0);  
                         }
                    ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 99 "syntax.y"
    {   if (rechercher2((yyvsp[(1) - (3)].str)) == 1 ) printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,(yyvsp[(1) - (3)].str));
                         else {     if (suavType == "INTEGER" && suavTypeval == "INTEGER" ){
                                            inserer2(strdup((yyvsp[(1) - (3)].str)),suavType,0,2,vale);  
                                        }else { if (suavType == "FLOAT" && suavTypeval == "FLOAT" ){
                                            inserer2(strdup((yyvsp[(1) - (3)].str)),suavType,0,2,valr);
                                                }else {
                                                    printf ("line %d, entite  %s : erreur sementique non compatibilite de type \n",nbligne,(yyvsp[(1) - (3)].str));
                                                }
                                        }
                                    
                         }
                    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 111 "syntax.y"
    {   if (rechercher2((yyvsp[(1) - (5)].str)) == 1 ) printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,(yyvsp[(1) - (5)].str));
                                    else {     if (suavType == "INTEGER" && suavTypeval == "INTEGER" ){
                                                        inserer2(strdup((yyvsp[(1) - (5)].str)),suavType,0,2,vale);  
                                                    }else { if (suavType == "FLOAT" && suavTypeval == "FLOAT" ){
                                                        inserer2(strdup((yyvsp[(1) - (5)].str)),suavType,0,2,valr);
                                                            }else {
                                                                printf ("line %d, entite  %s : erreur sementique non compatibilite de type \n",nbligne,(yyvsp[(1) - (5)].str));
                                                            }
                                                    }
                                        }
                                ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 124 "syntax.y"
    {   if (rechercher2((yyvsp[(2) - (7)].str)) == 1 ) {printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,(yyvsp[(2) - (7)].str));
                                                }else {if((yyvsp[(4) - (7)].entier) <= 0) {printf("line %d, entite  %s : erreur sementique taille du tableau doit etre positif \n",nbligne,(yyvsp[(2) - (7)].str));
                                                        }else{inserer2(strdup((yyvsp[(2) - (7)].str)),suavType,(yyvsp[(4) - (7)].entier),2,0); }
                                                    }
                                         ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 131 "syntax.y"
    {   if (rechercher2((yyvsp[(2) - (6)].str)) == 1 ) {printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,(yyvsp[(2) - (6)].str));
                                                }else {if((yyvsp[(4) - (6)].entier) <= 0) {printf("line %d, entite  %s : erreur sementique taille du tableau doit etre positif \n",nbligne,(yyvsp[(2) - (6)].str));
                                                        }else{inserer2(strdup((yyvsp[(2) - (6)].str)),suavType,(yyvsp[(4) - (6)].entier),2,0); }
                                                    }
                                         ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 139 "syntax.y"
    {   if (rechercher2((yyvsp[(2) - (5)].str)) == 1 ) {printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,(yyvsp[(2) - (5)].str));
                                                }else{
                                                    if (suavTypeval == "INTEGER"){
                                                        inserer2(strdup((yyvsp[(2) - (5)].str)),suavTypeval,0,1,vale);  
                                                    }else{
                                                        inserer2(strdup((yyvsp[(2) - (5)].str)),suavTypeval,0,1,valr);
                                                    }
                                                }
                                                
                                            ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 149 "syntax.y"
    {   if (rechercher2((yyvsp[(2) - (7)].str)) == 1 ) {printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,(yyvsp[(2) - (7)].str));
                                                            }else{
                                                                if (suavTypeval == "INTEGER"){
                                                                    inserer2(strdup((yyvsp[(2) - (7)].str)),suavTypeval,0,1,vale);  
                                                                }else{
                                                                    inserer2(strdup((yyvsp[(2) - (7)].str)),suavTypeval,0,1,valr);
                                                                }
                                                            }
                                                            
                                                    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 161 "syntax.y"
    {suavTypeval = "INTEGER";
                 vale = (yyvsp[(1) - (1)].entier);
                 vaal = (yyvsp[(1) - (1)].entier);
                    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 165 "syntax.y"
    {suavTypeval = "FLOAT";
                valr = (yyvsp[(1) - (1)].reel);
                vaal = (yyvsp[(1) - (1)].reel);
                    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 171 "syntax.y"
    {   if (rechercher2((yyvsp[(2) - (2)].str)) == 0 ) {
                                                printf ("line %d, entite  %s : erreur sementique structure non definie \n",nbligne,(yyvsp[(2) - (2)].str));
                                        }else {nom=strdup((yyvsp[(2) - (2)].str));}                        
                                    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 176 "syntax.y"
    {   if (rechercher2((yyvsp[(1) - (3)].str)) == 1 ) {printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,(yyvsp[(1) - (3)].str));}
                                                else {
                                                            inserer2(strdup((yyvsp[(1) - (3)].str)),nom,0,2,0);  
                                                }
                                ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 181 "syntax.y"
    {   if (rechercher2((yyvsp[(1) - (1)].str)) == 1 ) {printf ("line %d, entite  %s : erreur sementique Double Declaration \n",nbligne,(yyvsp[(1) - (1)].str));}
                                                else {
                                                            inserer2(strdup((yyvsp[(1) - (1)].str)),nom,0,2,0);  
                                                }
                                ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 188 "syntax.y"
    {suavType = "INTEGER";;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 189 "syntax.y"
    {suavType = "FLOAT";;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 202 "syntax.y"
    {
                                    suavType = GetType((yyvsp[(1) - (4)].str));
                                    if(!rechercher2((yyvsp[(1) - (4)].str))) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,(yyvsp[(1) - (4)].str));
                                    }else{
                                        if (GetConst((yyvsp[(1) - (4)].str)) == 1){
                                            printf ("ligne %d , entite %s : erreur sementique une constante ne peut pas etre modifie \n",nbligne,(yyvsp[(1) - (4)].str));
                                        }else{
                                            if ((yyvsp[(3) - (4)].garti).vall == floor((yyvsp[(3) - (4)].garti).vall)){
                                                if (GetType((yyvsp[(1) - (4)].str)) == "INTEGER"){
                                                    SetVal(strdup((yyvsp[(1) - (4)].str)),(yyvsp[(3) - (4)].garti).vall); 
                                                }else{
                                                    printf ("ligne %d , entite %s : erreur sementique non compatibilite de type \n",nbligne,(yyvsp[(1) - (4)].str));
                                                } 
                                            }else{
                                                if (GetType((yyvsp[(1) - (4)].str)) == "FLOAT"){
                                                    SetVal(strdup((yyvsp[(1) - (4)].str)),(yyvsp[(3) - (4)].garti).vall);
                                                }else{
                                                    printf ("ligne %d , entite %s : erreur sementique non compatibilite de type \n",nbligne,(yyvsp[(1) - (4)].str));
                                                } 
                                            } 
                                        }
                                        //SetVal(strdup($1),$3.vall);
                                    }
                                    quad (":=",(yyvsp[(3) - (4)].garti).chaine,"",(yyvsp[(1) - (4)].str));
                                ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 227 "syntax.y"
    {
            suavType = GetType((yyvsp[(3) - (6)].str));
            if(!rechercher2((yyvsp[(1) - (6)].str))) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,(yyvsp[(1) - (6)].str));
            }else{
                 if(GetType((yyvsp[(1) - (6)].str)) == "INTEGER" || GetType((yyvsp[(1) - (6)].str)) == "FLOAT" || GetType((yyvsp[(1) - (6)].str)) == "STRUCT"){
                    printf ("ligne %d , entite %s : erreur sementique premier idf doit etre une instance d'une structure \n",nbligne,(yyvsp[(1) - (6)].str));
                 }else{
                    if(!rechercher2((yyvsp[(3) - (6)].str))) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,(yyvsp[(3) - (6)].str));
                    }else{
                        if (GetConst((yyvsp[(3) - (6)].str)) == 1){
                            printf ("ligne %d , entite %s : erreur sementique une constante ne peut pas etre modifie \n",nbligne,(yyvsp[(3) - (6)].str));
                        }else{
                            if ((yyvsp[(5) - (6)].garti).vall == floor((yyvsp[(5) - (6)].garti).vall)){
                                if (GetType((yyvsp[(3) - (6)].str)) == "INTEGER"){
                                    SetVal(strdup((yyvsp[(3) - (6)].str)),(yyvsp[(5) - (6)].garti).vall); 
                                }else{
                                    printf ("ligne %d , entite %s : erreur sementique non compatibilite de type \n",nbligne,(yyvsp[(3) - (6)].str));
                                } 
                            }else{
                                if (GetType((yyvsp[(3) - (6)].str)) == "FLOAT"){
                                    SetVal(strdup((yyvsp[(3) - (6)].str)),(yyvsp[(5) - (6)].garti).vall);
                                }else{
                                    printf ("ligne %d , entite %s : erreur sementique non compatibilite de type \n",nbligne,(yyvsp[(3) - (6)].str));
                                } 
                            }
                        }
                    }
                }
            }
            quad (":=",(yyvsp[(5) - (6)].garti).chaine,"",(yyvsp[(3) - (6)].str));
        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 258 "syntax.y"
    {
            suavType = GetType((yyvsp[(1) - (7)].str));
            if(!rechercher2((yyvsp[(1) - (7)].str))) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,(yyvsp[(1) - (7)].str));
            }else{
                if(isTab((yyvsp[(1) - (7)].str)) == 0){
                    printf ("ligne %d , entite %s : erreur sementique l'idf n'est pas un tableau \n",nbligne,(yyvsp[(1) - (7)].str));
                }else{
                    if(!rechercher2((yyvsp[(3) - (7)].str))) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,(yyvsp[(3) - (7)].str));
                    }else{
                        if(GetType((yyvsp[(3) - (7)].str)) != "INTEGER" || isTab((yyvsp[(3) - (7)].str))){
                            printf ("ligne %d , entite %s : erreur sementique l'indice doit etre un entier \n",nbligne,(yyvsp[(3) - (7)].str));
                        }else{
                            if(GetValeur((yyvsp[(3) - (7)].str)) <= 0 || GetValeur((yyvsp[(3) - (7)].str)) > isTab((yyvsp[(1) - (7)].str))){
                                printf ("ligne %d , entite %s : erreur sementique l'indice doit etre dans l'intervalle de tableau \n",nbligne,(yyvsp[(3) - (7)].str));
                            }else{
                                if ((yyvsp[(6) - (7)].garti).vall == floor((yyvsp[(6) - (7)].garti).vall)){
                                    if (suavType == "INTEGER"){
                                        sprintf(val, "%s[%d]",(yyvsp[(1) - (7)].str),GetValeur((yyvsp[(3) - (7)].str)));
                                        quad (":=",(yyvsp[(6) - (7)].garti).chaine,"",val);
                                        if (rechercher2(val) == 1 ) {
                                            SetVal(val,(yyvsp[(6) - (7)].garti).vall);
                                        }else {
                                            inserer2(val,GetType((yyvsp[(1) - (7)].str)),0,2,(yyvsp[(6) - (7)].garti).vall);  
                                        }
                                    }else{
                                        printf ("ligne %d , entite %s : erreur sementique non compatibilite de type \n",nbligne,(yyvsp[(1) - (7)].str));
                                    } 
                                }else{
                                    if (suavType == "FLOAT"){
                                        sprintf(val, "%s[%d]",(yyvsp[(1) - (7)].str),GetValeur((yyvsp[(3) - (7)].str)));
                                        quad (":=",(yyvsp[(6) - (7)].garti).chaine,"",val);
                                        if (rechercher2(val) == 1 ) {
                                            SetVal(val,(yyvsp[(6) - (7)].garti).vall);
                                        }else {
                                            inserer2(val,GetType((yyvsp[(1) - (7)].str)),0,2,(yyvsp[(6) - (7)].garti).vall);  
                                        }
                                    }else{
                                        printf ("ligne %d , entite %s : erreur sementique non compatibilite de type \n",nbligne,(yyvsp[(1) - (7)].str));
                                    } 
                                }
                            }
                        }
                    }
                }
            }
        ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 304 "syntax.y"
    { 
            suavType = GetType((yyvsp[(1) - (7)].str));
            sprintf(val, "%s[%d]",(yyvsp[(1) - (7)].str),(yyvsp[(3) - (7)].entier));
            if(!rechercher2((yyvsp[(1) - (7)].str))) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,(yyvsp[(1) - (7)].str));
            }else{
                if(isTab((yyvsp[(1) - (7)].str)) == 0){
                    printf ("ligne %d , entite %s : erreur sementique l'idf n'est pas un tableau \n",nbligne,(yyvsp[(1) - (7)].str));
                }else{
                            if((yyvsp[(3) - (7)].entier) <= 0 || (yyvsp[(3) - (7)].entier) > isTab((yyvsp[(1) - (7)].str))){
                                printf ("ligne %d , entite %s : erreur sementique l'indice doit etre dans l'intervalle de tableau \n",nbligne,(yyvsp[(3) - (7)].entier));
                            }else{
                                if ((yyvsp[(6) - (7)].garti).vall == floor((yyvsp[(6) - (7)].garti).vall)){
                                    if (suavType == "INTEGER"){
                                        sprintf(val, "%s[%d]",(yyvsp[(1) - (7)].str),(yyvsp[(3) - (7)].entier));
                                        quad (":=",(yyvsp[(6) - (7)].garti).chaine,"",val);
                                        if (rechercher2(val) == 1 ) {
                                            SetVal(val,(yyvsp[(6) - (7)].garti).vall);
                                        }else {
                                            inserer2(val,GetType((yyvsp[(1) - (7)].str)),0,2,(yyvsp[(6) - (7)].garti).vall);
                                        }
                                    }else{
                                        printf ("ligne %d , entite %s : erreur sementique non compatibilite de type \n",nbligne,(yyvsp[(1) - (7)].str));
                                    } 
                                }else{
                                    if (suavType == "FLOAT"){
                                        sprintf(val, "%s[%d]",(yyvsp[(1) - (7)].str),(yyvsp[(3) - (7)].entier));
                                        quad (":=",(yyvsp[(6) - (7)].garti).chaine,"",val);
                                        if (rechercher2(val) == 1 ) {
                                            SetVal(val,(yyvsp[(6) - (7)].garti).vall);
                                        }else {
                                            inserer2(val,GetType((yyvsp[(1) - (7)].str)),0,2,(yyvsp[(6) - (7)].garti).vall);  
                                        }
                                    }
                                }
                            }
                        
                       
                }
            }
        ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 346 "syntax.y"
    {
                    if(!rechercher2((yyvsp[(1) - (1)].str))) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,(yyvsp[(1) - (1)].str));}
                    else{
                        if(isTab((yyvsp[(1) - (1)].str))){
                            printf ("ligne %d , entite %s : erreur sementique l'idf est un tableau \n",nbligne,(yyvsp[(1) - (1)].str));
                        }
                    }
                    (yyval.garti).chaine=strdup((yyvsp[(1) - (1)].str));      
                    (yyval.garti).vall=GetValeur((yyvsp[(1) - (1)].str));
                ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 357 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;
                (yyval.garti).chaine=strdup(tempC);tempC[0]='\0'; quad ("+",(yyvsp[(1) - (3)].garti).chaine,(yyvsp[(3) - (3)].garti).chaine,(yyval.garti).chaine);
                (yyval.garti).vall = (yyvsp[(1) - (3)].garti).vall + (yyvsp[(3) - (3)].garti).vall ;
                ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 362 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;
                (yyval.garti).chaine=strdup(tempC);tempC[0]='\0'; quad ("-",(yyvsp[(1) - (3)].garti).chaine,(yyvsp[(3) - (3)].garti).chaine,(yyval.garti).chaine);
                (yyval.garti).vall = (yyvsp[(1) - (3)].garti).vall - (yyvsp[(3) - (3)].garti).vall;
                ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 367 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;
                (yyval.garti).chaine=strdup(tempC);tempC[0]='\0'; quad ("*",(yyvsp[(1) - (3)].garti).chaine,(yyvsp[(3) - (3)].garti).chaine,(yyval.garti).chaine);
                (yyval.garti).vall = (yyvsp[(1) - (3)].garti).vall * (yyvsp[(3) - (3)].garti).vall;
                ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 373 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;
                (yyval.garti).chaine=strdup(tempC);tempC[0]='\0'; quad ("/",(yyvsp[(1) - (3)].garti).chaine,(yyvsp[(3) - (3)].garti).chaine,(yyval.garti).chaine);
                (yyval.garti).vall = (yyvsp[(1) - (3)].garti).vall / (yyvsp[(3) - (3)].garti).vall;
                  if ((yyvsp[(3) - (3)].garti).vall==0){  printf( " erreur sementique ---- division sur 0 -----",(yyvsp[(3) - (3)].garti).vall);}
              ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 378 "syntax.y"
    {  (yyval.garti).chaine=ToSTR((yyvsp[(1) - (1)].reel)); (yyval.garti).vall=(yyvsp[(1) - (1)].reel); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 379 "syntax.y"
    {  (yyval.garti).chaine=ToSTR((yyvsp[(1) - (1)].entier)); (yyval.garti).vall=(yyvsp[(1) - (1)].entier); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 380 "syntax.y"
    {(yyval.garti).chaine = (yyvsp[(2) - (3)].garti).chaine; (yyval.garti).vall = (yyvsp[(2) - (3)].garti).vall;;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 381 "syntax.y"
    {
                    if(!rechercher2((yyvsp[(1) - (4)].str))) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,(yyvsp[(1) - (4)].str));
                    }else{
                        if(!rechercher2((yyvsp[(3) - (4)].str))) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,(yyvsp[(3) - (4)].str));
                        }else{
                                    if(GetType((yyvsp[(3) - (4)].str)) != "INTEGER"){printf ("ligne %d , entite %s : erreur sementique indice doit etre un entier \n",nbligne,(yyvsp[(3) - (4)].str));
                                    }else{
                                        if(GetValeur((yyvsp[(3) - (4)].str)) <= 0 || GetValeur((yyvsp[(3) - (4)].str))>isTab((yyvsp[(1) - (4)].str))){
                                            printf ("ligne %d , entite %s : erreur sementique indice doit etre dans l'intervalle de la taille du tableau \n",nbligne,(yyvsp[(3) - (4)].str));
                                        }
                                    }
                            }
                    }
                    sprintf(val, "%s[%d]",(yyvsp[(1) - (4)].str),GetValeur((yyvsp[(3) - (4)].str))); (yyval.garti).chaine=strdup(val); (yyval.garti).vall=GetValeur(val);
                    printf("%f----",GetValeur(val));
            ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 397 "syntax.y"
    {
                    if(!rechercher2((yyvsp[(1) - (4)].str))) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,(yyvsp[(1) - (4)].str));}
                        else{
                            if((yyvsp[(3) - (4)].entier) <= 0 || (yyvsp[(3) - (4)].entier) > isTab((yyvsp[(1) - (4)].str))){
                                printf ("ligne %d , entite %s : erreur sementique indice doit etre dans l'intervalle de la taille du tableau \n",nbligne,(yyvsp[(1) - (4)].str));
                            }
                    }
                    sprintf(val, "%s[%d]",(yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].entier)); (yyval.garti).chaine=strdup(val); (yyval.garti).vall=GetValeur(val);
            ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 408 "syntax.y"
    {q[fin].op1 = ToSTR(indq);
                                                      printf("%s",q[fin].op1);
                                                      printf("%d",fin);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 413 "syntax.y"
    { 
                                    q[deb_else].op1 = ToSTR(indq);
                                    fin = indq;
                                    quad("BR","","","");
                                    printf("%s",q[deb_else].op1);
                                    
                                    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 421 "syntax.y"
    {
    
    deb_else = indq;
    quad("BZ","",strdup((yyvsp[(3) - (4)].garti).chaine),"");
;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 428 "syntax.y"
    {
    quad("BR",ToSTR(d_for),"","");
    q[d_for].op1 = ToSTR(indq);
;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 434 "syntax.y"
    { 
                                                    if(!rechercher2((yyvsp[(3) - (11)].str))) {printf ("ligne %d , entite %s : erreur semantique idf non-declare \n",nbligne,(yyvsp[(3) - (11)].str));
                                                        }else{
                                                            if (GetConst((yyvsp[(3) - (11)].str)) == 1){
                                                                printf ("ligne %d , entite %s : erreur semantique une constante ne peut pas etre modifie \n",nbligne,(yyvsp[(3) - (11)].str));
                                                            }else{
                                                                if(GetType((yyvsp[(3) - (11)].str)) != "INTEGER" || isTab((yyvsp[(3) - (11)].str))){
                                                                    printf ("ligne %d , entite %s : erreur semantique l'indice doit etre un entier \n",nbligne,(yyvsp[(3) - (11)].str));
                                                                }else{
                                                                    if((yyvsp[(9) - (11)].garti).type > 0){
                                                                        if((yyvsp[(5) - (11)].garti).type >= (yyvsp[(9) - (11)].garti).type){
                                                                            printf ("ligne %d , entite %s : erreur semantique initialisation invalide \n",nbligne,(yyvsp[(3) - (11)].str));
                                                                        }else{
                                                                            if ((yyvsp[(7) - (11)].garti).type <= 0){
                                                                                printf ("ligne %d , entite %s : erreur semantique pas ne doit pas eter nul \n",nbligne,(yyvsp[(7) - (11)].garti));
                                                                            }
                                                                        }
                                                                    }else printf ("ligne %d , entite %s : erreur semantique la borne sup de la boucle for doit etre sup a 0 \n",nbligne,(yyvsp[(3) - (11)].str));
                                                                }
                                                                
                                                            }
                                                            SetVal(strdup((yyvsp[(3) - (11)].str)),(yyvsp[(5) - (11)].garti).type);
                                                        }
                                                        d_for = indq;
                                                      quad("BG","",(yyvsp[(3) - (11)].str),(yyvsp[(9) - (11)].garti).chaine);
                                                      ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 462 "syntax.y"
    { (yyval.garti).type = (yyvsp[(1) - (1)].entier); suavType = "INTEGER";(yyval.garti).chaine = ToSTR((yyvsp[(1) - (1)].entier));;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 463 "syntax.y"
    {
                if(!rechercher2((yyvsp[(1) - (1)].str))) {printf ("ligne %d , entite %s : erreur sementique idf non-declare \n",nbligne,(yyvsp[(1) - (1)].str));}
                else{
                    if(GetType((yyvsp[(1) - (1)].str)) == "INTEGER"){
                        (yyval.garti).type = GetValeur((yyvsp[(1) - (1)].str));  
                    }else{
                        printf ("ligne %d , entite %s : erreur sementique idf doit etre un entier \n",nbligne,(yyvsp[(1) - (1)].str));
                    }
                }
                (yyval.garti).chaine = strdup((yyvsp[(1) - (1)].str));
            ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 476 "syntax.y"
    {
                                                        quad("BR",ToSTR(d_while),"","");
                                                        q[fin_while].op1 = ToSTR(indq);
;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 482 "syntax.y"
    {
    fin_while = indq;
    quad("BZ","",(yyvsp[(3) - (5)].garti).chaine,"");
;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 487 "syntax.y"
    {
                            d_while = indq;
;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 493 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.garti).chaine=strdup(tempC);tempC[0]='\0'; createQuadCompare (6,(yyvsp[(1) - (3)].garti).chaine,(yyvsp[(3) - (3)].garti).chaine,(yyval.garti).chaine);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 495 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.garti).chaine=strdup(tempC);tempC[0]='\0'; createQuadCompare (5,(yyvsp[(1) - (3)].garti).chaine,(yyvsp[(3) - (3)].garti).chaine,(yyval.garti).chaine);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 497 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.garti).chaine=strdup(tempC);tempC[0]='\0'; createQuadCompare (3,(yyvsp[(1) - (4)].garti).chaine,(yyvsp[(4) - (4)].garti).chaine,(yyval.garti).chaine);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 499 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.garti).chaine=strdup(tempC);tempC[0]='\0'; createQuadCompare (4,(yyvsp[(1) - (4)].garti).chaine,(yyvsp[(4) - (4)].garti).chaine,(yyval.garti).chaine);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 501 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.garti).chaine=strdup(tempC);tempC[0]='\0'; createQuadCompare (2,(yyvsp[(1) - (4)].garti).chaine,(yyvsp[(4) - (4)].garti).chaine,(yyval.garti).chaine);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 503 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.garti).chaine=strdup(tempC);tempC[0]='\0'; createQuadCompare (1,(yyvsp[(1) - (4)].garti).chaine,(yyvsp[(4) - (4)].garti).chaine,(yyval.garti).chaine);;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 505 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.garti).chaine=strdup(tempC);tempC[0]='\0'; createQuadLogic (3,(yyvsp[(1) - (3)].garti).chaine,(yyvsp[(3) - (3)].garti).chaine,(yyval.garti).chaine);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 507 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.garti).chaine=strdup(tempC);tempC[0]='\0'; createQuadLogic (2,(yyvsp[(1) - (3)].garti).chaine,(yyvsp[(3) - (3)].garti).chaine,(yyval.garti).chaine);;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 509 "syntax.y"
    {sprintf(tempC, "T%d",nTemp);nTemp++;(yyval.garti).chaine=strdup(tempC);tempC[0]='\0'; createQuadLogic (1,(yyvsp[(2) - (2)].garti).chaine,"",(yyval.garti).chaine);;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 511 "syntax.y"
    {(yyval.garti).chaine = (yyvsp[(1) - (1)].garti).chaine; (yyval.garti).vall = (yyvsp[(1) - (1)].garti).vall;;}
    break;



/* Line 1455 of yacc.c  */
#line 2229 "syntax.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 514 "syntax.y"


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
