
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
#line 1 "miniJava.y"

	

#include <stdio.h>
#include <string.h>
#include <stdbool.h>	
#include <stdlib.h>
#include "semantic.c"
#include "genCode.c"
 			
int yyerror(char const *msg);	
int yylex(void);
extern int line;

int nbr_args = 0;
int nbr_param = 0;



/* Line 189 of yacc.c  */
#line 93 "miniJava.tab.c"

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
     PSVM = 258,
     CLASS = 259,
     PUBLIC = 260,
     STATIC = 261,
     VOID = 262,
     MAIN = 263,
     EXTENDS = 264,
     RETURN = 265,
     IF = 266,
     ELSE = 267,
     WHILE = 268,
     PRINT = 269,
     LENGTH = 270,
     THIS = 271,
     NEW = 272,
     POINT = 273,
     POINT_VIRGULE = 274,
     VIRGULE = 275,
     BOOLEAN = 276,
     INT = 277,
     STRING = 278,
     PAR_OUVRANTE = 279,
     PAR_FERMANTE = 280,
     ACO_OUVRANTE = 281,
     ACO_FERMANTE = 282,
     TAB_FERMANTE = 283,
     TAB_OUVRANTE = 284,
     AFFECTATION = 285,
     OPERATOR = 286,
     ID = 287,
     NUMBER = 288,
     BOOL = 289,
     NOT = 290
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 170 "miniJava.tab.c"

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1007

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNRULES -- Number of states.  */
#define YYNSTATES  391

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

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
      35
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    19,    27,    35,    43,
      51,    54,    56,    59,    62,    65,    67,    70,    72,    75,
      77,    81,    85,    89,    92,    94,    98,   102,   106,   110,
     112,   126,   140,   154,   168,   182,   196,   210,   224,   238,
     242,   246,   250,   252,   254,   256,   258,   269,   280,   291,
     302,   313,   324,   335,   342,   349,   356,   363,   370,   377,
     384,   386,   391,   396,   401,   406,   411,   416,   421,   426,
     428,   437,   444,   451,   460,   465,   468,   474,   480,   486,
     492,   498,   503,   508,   513,   518,   526,   534,   542,   550,
     558,   566,   570,   574,   579,   584,   589,   593,   597,   601,
     608,   615,   622,   629,   636,   638,   640,   642,   644,   646,
     652,   658,   664,   670,   676,   681,   686,   691,   696,   701,
     704,   707,   711,   715,   719,   722,   724,   728,   732,   734
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      37,     0,    -1,    50,    38,    -1,    39,    38,    -1,    59,
      -1,     4,    32,    40,    26,    41,    42,    27,    -1,     1,
      32,    40,    26,    41,    42,    27,    -1,     4,     1,    40,
      26,    41,    42,    27,    -1,     4,    32,    40,     1,    41,
      42,    27,    -1,     4,    32,    40,    26,    41,    42,     1,
      -1,     9,    32,    -1,    59,    -1,     1,    32,    -1,     4,
       1,    -1,    44,    41,    -1,    59,    -1,    48,    42,    -1,
      59,    -1,    55,    43,    -1,    59,    -1,    49,    32,    19,
      -1,    49,     1,    19,    -1,    49,    32,     1,    -1,    46,
      45,    -1,    59,    -1,    20,    49,    32,    -1,     1,    49,
      32,    -1,    20,    49,     1,    -1,    49,    32,    45,    -1,
      59,    -1,     5,    49,    32,    24,    47,    25,    26,    41,
      43,    10,    56,    19,    27,    -1,     1,    49,    32,    24,
      47,    25,    26,    41,    43,    10,    56,    19,    27,    -1,
       5,    49,     1,    24,    47,    25,    26,    41,    43,    10,
      56,    19,    27,    -1,     5,    49,    32,     1,    47,    25,
      26,    41,    43,    10,    56,    19,    27,    -1,     5,    49,
      32,    24,    47,     1,    26,    41,    43,    10,    56,    19,
      27,    -1,     5,    49,    32,    24,    47,    25,     1,    41,
      43,    10,    56,    19,    27,    -1,     5,    49,    32,    24,
      47,    25,    26,    41,    43,     1,    56,    19,    27,    -1,
       5,    49,    32,    24,    47,    25,    26,    41,    43,    10,
      56,     1,    27,    -1,     5,    49,    32,    24,    47,    25,
      26,    41,    43,    10,    56,    19,     1,    -1,    22,    29,
      28,    -1,    22,     1,    28,    -1,    22,    29,     1,    -1,
      21,    -1,    22,    -1,    32,    -1,     1,    -1,     4,    32,
      26,     3,    51,    26,    41,    55,    27,    27,    -1,     1,
      32,    26,     3,    51,    26,    41,    55,    27,    27,    -1,
       4,     1,    26,     3,    51,    26,    41,    55,    27,    27,
      -1,     4,    32,     1,     3,    51,    26,    41,    55,    27,
      27,    -1,     4,    32,    26,     3,    51,     1,    41,    55,
      27,    27,    -1,     4,    32,    26,     3,    51,    26,    41,
      55,     1,    27,    -1,     4,    32,    26,     3,    51,    26,
      41,    55,    27,     1,    -1,    24,    23,    29,    28,    32,
      25,    -1,     1,    23,    29,    28,    32,    25,    -1,    24,
       1,    29,    28,    32,    25,    -1,    24,    23,     1,    28,
      32,    25,    -1,    24,    23,    29,     1,    32,    25,    -1,
      24,    23,    29,    28,     1,    25,    -1,    24,    23,    29,
      28,    32,     1,    -1,    12,    -1,    11,    24,    56,    25,
      -1,     1,    24,    56,    25,    -1,    11,     1,    56,    25,
      -1,    11,    24,    56,     1,    -1,    13,    24,    56,    25,
      -1,     1,    24,    56,    25,    -1,    13,     1,    56,    25,
      -1,    13,    24,    56,     1,    -1,    43,    -1,    53,    26,
      55,    27,    52,    26,    55,    27,    -1,    53,    26,    55,
      27,    52,    55,    -1,    53,    55,    52,    26,    55,    27,
      -1,    53,    26,    55,    27,     1,    26,    55,    27,    -1,
      54,    26,    55,    27,    -1,    54,    55,    -1,    14,    24,
      56,    25,    19,    -1,     1,    24,    56,    25,    19,    -1,
      14,     1,    56,    25,    19,    -1,    14,    24,    56,     1,
      19,    -1,    14,    24,    56,    25,     1,    -1,    32,    30,
      56,    19,    -1,     1,    30,    56,    19,    -1,    32,     1,
      56,    19,    -1,    32,    30,    56,     1,    -1,    32,    29,
      56,    28,    30,    56,    19,    -1,     1,    29,    56,    28,
      30,    56,    19,    -1,    32,     1,    56,    28,    30,    56,
      19,    -1,    32,    29,    56,     1,    30,    56,    19,    -1,
      32,    29,    56,    28,     1,    56,    19,    -1,    32,    29,
      56,    28,    30,    56,     1,    -1,    56,    31,    56,    -1,
      56,     1,    56,    -1,    56,    29,    56,    28,    -1,    56,
       1,    56,    28,    -1,    56,    29,    56,     1,    -1,    56,
      18,    15,    -1,    56,     1,    15,    -1,    56,    18,     1,
      -1,    56,    18,    32,    24,    57,    25,    -1,    56,     1,
      32,    24,    57,    25,    -1,    56,    18,     1,    24,    57,
      25,    -1,    56,    18,    32,     1,    57,    25,    -1,    56,
      18,    32,    24,    57,     1,    -1,    33,    -1,    34,    -1,
      32,    -1,    16,    -1,     1,    -1,    17,    22,    26,    56,
      27,    -1,     1,    22,    26,    56,    27,    -1,    17,     1,
      26,    56,    27,    -1,    17,    22,     1,    56,    27,    -1,
      17,    22,    26,    56,     1,    -1,    17,    32,    24,    25,
      -1,     1,    32,    24,    25,    -1,    17,     1,    24,    25,
      -1,    17,    32,     1,    25,    -1,    17,    32,    24,     1,
      -1,    35,    56,    -1,     1,    56,    -1,    24,    56,    25,
      -1,     1,    56,    25,    -1,    24,    56,     1,    -1,    56,
      58,    -1,    59,    -1,    20,    56,    58,    -1,     1,    56,
      58,    -1,    59,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    72,    73,    76,    82,    83,    84,    85,
      87,    88,    89,    90,    93,    94,    96,    97,    99,   100,
     102,   106,   107,   109,   110,   112,   117,   118,   120,   125,
     127,   133,   134,   135,   136,   137,   138,   139,   140,   145,
     146,   147,   148,   149,   150,   151,   154,   155,   156,   157,
     158,   159,   160,   163,   164,   165,   166,   167,   168,   169,
     171,   176,   180,   181,   182,   184,   188,   189,   190,   192,
     193,   195,   197,   199,   201,   205,   210,   211,   212,   213,
     214,   216,   222,   223,   224,   226,   232,   233,   234,   235,
     236,   239,   252,   254,   255,   256,   258,   259,   260,   262,
     268,   269,   270,   271,   274,   278,   279,   280,   281,   283,
     284,   285,   286,   287,   289,   290,   291,   292,   293,   295,
     296,   298,   299,   300,   303,   307,   309,   314,   315,   318
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PSVM", "CLASS", "PUBLIC", "STATIC",
  "VOID", "MAIN", "EXTENDS", "RETURN", "IF", "ELSE", "WHILE", "PRINT",
  "LENGTH", "THIS", "NEW", "POINT", "POINT_VIRGULE", "VIRGULE", "BOOLEAN",
  "INT", "STRING", "PAR_OUVRANTE", "PAR_FERMANTE", "ACO_OUVRANTE",
  "ACO_FERMANTE", "TAB_FERMANTE", "TAB_OUVRANTE", "AFFECTATION",
  "OPERATOR", "ID", "NUMBER", "BOOL", "NOT", "$accept", "program",
  "ClassDeclarationG", "ClassDeclaration", "EXTENDSIDG", "VarDeclarationG",
  "MethodDeclarationG", "STATEMENTG", "VarDeclaration", "VTIG", "VTI",
  "TIVTIG", "MethodDeclaration", "Type", "MainClass", "ARG",
  "ELSESTATEMENT", "IFSTATEMENT", "WHILESTATEMENT", "STATEMENT",
  "EXPRESSION", "EVEXPRESSION", "VEXPRESSION", "epsilon", 0
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
     285,   286,   287,   288,   289,   290
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    39,    39,
      40,    40,    40,    40,    41,    41,    42,    42,    43,    43,
      44,    44,    44,    45,    45,    46,    46,    46,    47,    47,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    49,
      49,    49,    49,    49,    49,    49,    50,    50,    50,    50,
      50,    50,    50,    51,    51,    51,    51,    51,    51,    51,
      52,    53,    53,    53,    53,    54,    54,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    57,    57,    58,    58,    58,    59
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     7,     7,     7,     7,     7,
       2,     1,     2,     2,     2,     1,     2,     1,     2,     1,
       3,     3,     3,     2,     1,     3,     3,     3,     3,     1,
      13,    13,    13,    13,    13,    13,    13,    13,    13,     3,
       3,     3,     1,     1,     1,     1,    10,    10,    10,    10,
      10,    10,    10,     6,     6,     6,     6,     6,     6,     6,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     1,
       8,     6,     6,     8,     4,     2,     5,     5,     5,     5,
       5,     4,     4,     4,     4,     7,     7,     7,     7,     7,
       7,     3,     3,     4,     4,     4,     3,     3,     3,     6,
       6,     6,     6,     6,     1,     1,     1,     1,     1,     5,
       5,     5,     5,     5,     4,     4,     4,     4,     4,     2,
       2,     3,     3,     3,     2,     1,     3,     3,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     2,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,    42,     0,    44,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,    19,     0,     0,     0,     0,    40,    41,    39,     0,
       0,     6,    16,    21,    22,    20,     7,     8,     9,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    55,    56,    57,    58,    59,    53,
       0,   107,     0,     0,   106,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    60,     0,     0,    47,    48,    49,    50,    51,    52,
      46,     0,     0,     0,     0,     0,   106,     0,     0,     0,
       0,     0,     0,     0,     0,    62,     0,     0,     0,    82,
      63,     0,    61,    67,     0,    65,     0,     0,     0,    83,
       0,     0,     0,     0,    81,     0,     0,    74,     0,     0,
      29,     0,     0,     0,     0,     0,   122,     0,     0,     0,
       0,     0,     0,     0,   121,    97,   106,     0,    98,    96,
       0,    77,     0,     0,     0,    78,    79,    80,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,   116,     0,     0,     0,   117,   118,
     114,     0,    94,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,    72,     0,     0,     0,
      28,     0,    24,     0,     0,     0,     0,     0,   110,   111,
     112,     0,   109,     0,     0,   125,     0,     0,     0,    86,
      87,    88,    89,     0,    85,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,   124,   128,
     100,   101,   102,   103,    99,    73,    70,    69,    26,    27,
      25,    69,    69,    69,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   127,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,    12,    29,    58,    78,   143,    59,   300,
     301,   228,    79,    60,     4,    35,   182,    98,    99,   144,
     247,   314,   338,   101
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -338
static const yytype_int16 yypact[] =
{
     319,    -8,    34,   118,   434,    43,   131,   202,  -338,    82,
      61,  -338,   434,  -338,   232,   240,   310,   321,   236,   236,
     236,  -338,    80,    80,    80,    80,   329,   367,   338,   355,
    -338,   356,   248,   373,   162,   371,   380,   381,   249,  -338,
    -338,  -338,   324,   324,   324,   324,   404,   440,     0,   577,
     577,   577,   577,   577,  -338,  -338,    36,  -338,   204,   530,
      69,  -338,   204,   204,   204,   389,   408,   462,    52,   330,
     330,   330,   330,   330,   463,    71,    29,    29,   382,   204,
    -338,  -338,   474,     8,   468,   471,   169,   467,   469,   478,
     481,   119,   -12,   331,   407,   415,    27,  -338,   600,   553,
     623,  -338,   629,   638,   646,   653,  -338,  -338,  -338,   482,
     139,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
     496,   497,   507,   508,   509,   161,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   330,   429,
     330,   353,   489,  -338,   583,   493,   511,   512,   212,   171,
     518,   521,   444,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
      78,  -338,    20,   495,  -338,  -338,  -338,   495,   775,   779,
     228,   794,   795,   810,   813,   828,   829,   759,   833,   814,
     661,  -338,   510,   668,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,    42,    42,    42,    42,   522,   529,   708,   252,   291,
     464,   847,   723,   120,   160,   490,   495,   495,   525,  -338,
    -338,   272,  -338,  -338,   388,  -338,   537,   237,   315,  -338,
     528,   178,     6,   443,  -338,   107,   330,  -338,   534,   543,
    -338,   535,   544,   233,   495,   551,  -338,   552,   495,   495,
     495,   556,   289,   114,  -338,  -338,   558,   739,   559,  -338,
     465,  -338,   851,   754,   495,  -338,  -338,  -338,  -338,   495,
     495,   495,   495,   563,   560,   676,   574,   412,   576,   579,
     580,   332,   865,  -338,  -338,   866,   872,   873,  -338,  -338,
    -338,   394,  -338,   394,   394,   394,   149,  -338,   887,   906,
     909,   912,   928,   330,   330,   606,  -338,    12,    29,    29,
    -338,   412,  -338,    12,    12,    12,    12,    12,  -338,  -338,
    -338,   359,  -338,   774,   578,  -338,   596,   597,   334,  -338,
    -338,  -338,  -338,   470,  -338,   683,   691,   536,   591,   159,
    -338,   536,   536,   536,   536,   536,   120,   495,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,   598,  -338,  -338,
    -338,   615,   617,   618,   619,   706,   290,   774,   495,   495,
     495,   495,   495,   495,   495,  -338,  -338,   931,   935,   950,
     954,   957,   973,   976,   604,   608,   614,   621,   626,   631,
     491,   203,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
    -338
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -338,  -338,   632,  -338,   187,    33,   400,   -67,  -338,   344,
    -338,   -70,  -338,   -66,  -338,   176,   421,  -338,  -338,    18,
      88,   189,  -337,    -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -130
static const yytype_int16 yytable[] =
{
      13,    67,    97,    97,    97,    97,    97,   261,    13,   114,
     109,   110,   126,    54,    30,    30,    30,   127,   128,   365,
     366,   198,  -129,  -129,     5,  -129,  -129,   115,   135,    68,
      54,    97,    97,    55,    56,     6,   262,    74,    61,    61,
      61,    61,   199,    54,    57,    61,    61,    61,    61,    61,
      55,    56,   200,    90,    80,    61,   136,   137,    80,    80,
      80,    57,    19,    55,    56,    75,     7,  -129,   -43,    14,
      82,    97,   107,    97,    57,    80,    62,    63,    64,   160,
      91,    33,    69,    70,    71,    72,    73,   100,   102,   103,
     104,   105,    81,    20,   161,   162,  -108,  -108,  -108,   108,
     195,    83,   163,  -108,    34,  -108,  -108,  -108,   263,  -108,
     196,   165,   166,   167,    18,   160,   139,   141,     8,   181,
     124,   160,   231,   232,   233,   229,   229,   229,   229,   245,
     161,   162,  -123,  -123,  -123,   245,   161,   162,   163,  -123,
     151,  -123,  -123,  -123,   163,  -123,   246,   165,   166,   167,
     160,   125,   246,   165,   166,   167,   180,    15,   183,    97,
     349,   248,   158,    47,   245,   161,   162,   -95,   -95,   -95,
     118,   152,   189,   163,   -95,   249,   -95,   -95,   -95,   160,
     -95,   246,   165,   166,   167,    48,   159,   230,   230,   230,
     230,   350,   250,   245,   161,   162,   119,    97,   190,    36,
      37,    38,   163,    16,   389,    76,    31,    32,   260,    77,
     246,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,    97,    97,    17,   203,
     390,  -129,   328,   329,   270,    22,   126,    26,   160,   188,
      27,   127,   128,    23,   265,    28,   204,   209,   197,    44,
      52,   201,   245,   161,   162,   202,   256,   206,   271,   207,
     347,   163,  -129,   302,   351,   352,   353,   354,   355,   246,
     165,   166,   167,   160,    45,    53,   237,   315,   238,   315,
     315,   315,   295,   -64,   -64,   -64,   -64,   245,   161,   162,
     279,   336,   239,    61,   252,   253,   163,   302,   -64,    61,
      61,    61,    61,    61,   246,   165,   166,   167,   204,   339,
     337,   325,   326,    24,   280,   -92,   257,   240,   282,   206,
       1,   207,   272,     2,    25,    54,   275,   276,   277,  -129,
     327,    92,   129,   306,   258,   343,   331,   332,   333,   334,
     335,    93,   288,    94,    95,    55,    56,   289,   290,   291,
     292,  -129,   339,   339,    92,   130,    57,  -129,   307,   344,
     160,    39,    96,   -75,    93,   -75,    94,    95,    40,   313,
      41,   313,   313,   313,   245,   161,   162,  -113,  -113,  -113,
     -75,    42,    43,   163,  -113,    96,  -113,  -113,  -113,   160,
    -113,   246,   165,   166,   167,   160,    46,    49,   -68,   -68,
     -68,   -68,   -68,   245,   161,   162,    50,    51,   131,   111,
     161,   162,   163,   298,   -68,   -68,   133,    87,   163,  -129,
     246,   165,   166,   167,   356,   357,   164,   165,   166,   167,
      92,   132,   299,    65,  -129,     9,    88,  -129,    10,   134,
      93,   181,    94,    95,   160,   193,   367,   368,   369,   370,
     371,   372,   373,   -84,   -84,   -84,   -84,   -84,   245,   161,
     162,    96,    84,    85,    86,   241,   284,   163,   194,    66,
     -84,   160,   316,   317,   318,   246,   165,   166,   167,   112,
     -90,   -90,   -90,   -90,   -90,   245,   161,   162,   242,   285,
      89,   106,   160,   113,   163,   116,   160,   -90,   117,   120,
     -66,   121,   246,   165,   166,   167,   245,   161,   162,   251,
     122,   161,   162,   123,   150,   163,   184,   -66,   388,   163,
     185,   153,   154,   246,   165,   166,   167,   164,   165,   166,
     167,    54,   155,   156,   157,  -129,   226,    92,   186,   187,
    -129,  -129,   191,  -129,  -129,   192,  -129,    93,   234,    94,
      95,    55,    56,   235,    92,   254,   255,  -129,   259,   266,
     268,    92,    57,  -129,    93,  -129,    94,    95,    96,   269,
    -129,    93,  -129,    94,    95,   267,   273,   274,    54,   140,
    -129,   278,   281,   283,    92,    96,   294,  -129,  -129,   293,
    -129,  -129,    96,  -129,    93,  -129,    94,    95,    55,    56,
     297,    92,   303,   340,  -129,   304,   305,    92,   358,    57,
    -129,    93,  -129,    94,    95,    96,   -71,    93,   -71,    94,
      95,   341,   342,   348,    92,   359,   138,   360,   361,   362,
      92,   382,    96,   -71,    93,   383,    94,    95,    96,    92,
      93,   384,    94,    95,    21,   330,   264,    92,   385,    93,
     142,    94,    95,   386,   148,    96,   145,    93,   387,    94,
      95,    96,    92,     0,    93,   146,    94,    95,     0,    92,
      96,     0,    93,   147,    94,    95,     0,    92,    96,    93,
     149,    94,    95,     0,    92,    96,     0,    93,   225,    94,
      95,     0,    92,    96,    93,   227,    94,    95,     0,     0,
      96,     0,    93,   296,    94,    95,     0,   363,    96,   203,
     345,     0,     0,     0,     0,    96,   364,   -69,   346,   -69,
     -69,     0,     0,    96,   203,     0,   204,  -120,  -120,     0,
       0,     0,     0,   236,     0,  -120,  -120,   206,   -69,   207,
     203,   204,  -119,  -119,     0,     0,     0,     0,  -119,     0,
    -119,  -119,   206,     0,   207,   203,     0,   204,   -92,   -92,
     203,     0,     0,     0,   -92,     0,   -92,   282,   206,     0,
     207,     0,   204,   -91,   -91,   336,   203,   204,   219,   -91,
     203,   -91,   -91,   206,     0,   207,     0,   220,   206,     0,
     207,     0,   204,   204,   337,   203,   211,   204,     0,  -129,
     205,     0,     0,   206,   206,   207,   207,   208,   206,     0,
     207,   203,   204,   204,   214,   223,     0,     0,     0,   210,
     212,     0,     0,   206,   206,   207,   207,     0,   204,   203,
     217,   204,   204,   224,   221,   213,     0,     0,   215,   206,
       0,   207,   206,   206,   207,   207,   204,   204,   243,     0,
       0,   204,   286,   216,   218,     0,     0,   206,   206,   207,
     207,   222,   206,     0,   207,   204,   203,   203,     0,   204,
       0,     0,   244,   203,   311,     0,   206,     0,   207,   287,
     206,     0,   207,   204,   204,     0,     0,     0,   203,     0,
     204,   204,   308,   309,   206,   206,   207,   207,     0,   310,
     312,   206,   206,   207,   207,   204,   319,   203,     0,     0,
     203,     0,     0,   203,     0,     0,   206,     0,   207,     0,
       0,     0,     0,     0,   204,   320,     0,   204,   321,   323,
     204,   322,   203,     0,     0,   206,   203,   207,   206,     0,
     207,   206,     0,   207,     0,     0,   204,   324,     0,   204,
     374,   203,     0,   204,   375,   203,     0,   206,   203,   207,
     206,     0,   207,     0,   206,     0,   207,     0,   204,   376,
       0,     0,   204,   377,   203,   204,   378,   380,     0,   206,
       0,   207,     0,   206,     0,   207,   206,     0,   207,     0,
       0,   204,   379,     0,   204,   381,     0,     0,     0,     0,
       0,     0,   206,     0,   207,   206,     0,   207
};

static const yytype_int16 yycheck[] =
{
       4,     1,    69,    70,    71,    72,    73,     1,    12,     1,
      76,    77,    24,     1,    18,    19,    20,    29,    30,   356,
     357,     1,    10,    11,    32,    13,    14,    19,     1,    29,
       1,    98,    99,    21,    22,     1,    30,     1,    42,    43,
      44,    45,    22,     1,    32,    49,    50,    51,    52,    53,
      21,    22,    32,     1,    58,    59,    29,    30,    62,    63,
      64,    32,     1,    21,    22,    29,    32,    25,    32,    26,
       1,   138,     1,   140,    32,    79,    43,    44,    45,     1,
      28,     1,    49,    50,    51,    52,    53,    69,    70,    71,
      72,    73,    59,    32,    16,    17,    18,    19,    20,    28,
      22,    32,    24,    25,    24,    27,    28,    29,     1,    31,
      32,    33,    34,    35,    32,     1,    98,    99,     0,    12,
       1,     1,   192,   193,   194,   191,   192,   193,   194,    15,
      16,    17,    18,    19,    20,    15,    16,    17,    24,    25,
       1,    27,    28,    29,    24,    31,    32,    33,    34,    35,
       1,    32,    32,    33,    34,    35,   138,    26,   140,   226,
       1,     1,     1,     1,    15,    16,    17,    18,    19,    20,
       1,    32,     1,    24,    25,    15,    27,    28,    29,     1,
      31,    32,    33,    34,    35,    23,    25,   191,   192,   193,
     194,    32,    32,    15,    16,    17,    27,   264,    27,    23,
      24,    25,    24,     1,     1,     1,    19,    20,    30,     5,
      32,    33,    34,    35,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   293,   294,    26,     1,
      27,    27,   298,   299,     1,     3,    24,     1,     1,    27,
       4,    29,    30,     3,   226,     9,    18,    19,   160,     1,
       1,   163,    15,    16,    17,   167,    19,    29,    25,    31,
     327,    24,    26,   267,   331,   332,   333,   334,   335,    32,
      33,    34,    35,     1,    26,    26,    24,   281,    26,   283,
     284,   285,   264,    11,    12,    13,    14,    15,    16,    17,
       1,     1,     1,   297,   206,   207,    24,   301,    26,   303,
     304,   305,   306,   307,    32,    33,    34,    35,    18,   313,
      20,   293,   294,     3,    25,    25,     1,    26,    28,    29,
       1,    31,   234,     4,     3,     1,   238,   239,   240,     5,
     297,     1,     1,     1,    19,     1,   303,   304,   305,   306,
     307,    11,   254,    13,    14,    21,    22,   259,   260,   261,
     262,    27,   356,   357,     1,    24,    32,    27,    26,    25,
       1,    32,    32,    10,    11,    12,    13,    14,     1,   281,
      32,   283,   284,   285,    15,    16,    17,    18,    19,    20,
      27,    26,    26,    24,    25,    32,    27,    28,    29,     1,
      31,    32,    33,    34,    35,     1,    23,    26,    10,    11,
      12,    13,    14,    15,    16,    17,    26,    26,     1,    27,
      16,    17,    24,     1,    26,    27,     1,    28,    24,    25,
      32,    33,    34,    35,   336,   337,    32,    33,    34,    35,
       1,    24,    20,    29,     0,     1,    28,    25,     4,    24,
      11,    12,    13,    14,     1,     1,   358,   359,   360,   361,
     362,   363,   364,    10,    11,    12,    13,    14,    15,    16,
      17,    32,    62,    63,    64,     1,     1,    24,    24,    29,
      27,     1,   283,   284,   285,    32,    33,    34,    35,    79,
      10,    11,    12,    13,    14,    15,    16,    17,    24,    24,
      28,    28,     1,    19,    24,    27,     1,    27,    27,    32,
      10,    32,    32,    33,    34,    35,    15,    16,    17,    19,
      32,    16,    17,    32,    32,    24,    27,    27,    27,    24,
      27,    25,    25,    32,    33,    34,    35,    32,    33,    34,
      35,     1,    25,    25,    25,     5,    26,     1,    27,    27,
      10,    11,    24,    13,    14,    24,    10,    11,    26,    13,
      14,    21,    22,    24,     1,    30,    19,    27,    30,    25,
      25,     1,    32,    10,    11,    12,    13,    14,    32,    25,
      10,    11,    12,    13,    14,    32,    25,    25,     1,    26,
      27,    25,    24,    24,     1,    32,    26,    27,    11,    26,
      13,    14,    32,    10,    11,    12,    13,    14,    21,    22,
      26,     1,    26,    25,    27,    26,    26,     1,    10,    32,
      27,    11,    12,    13,    14,    32,    10,    11,    12,    13,
      14,    25,    25,    32,     1,    10,    26,    10,    10,    10,
       1,    27,    32,    27,    11,    27,    13,    14,    32,     1,
      11,    27,    13,    14,    12,   301,   225,     1,    27,    11,
      27,    13,    14,    27,     1,    32,    27,    11,    27,    13,
      14,    32,     1,    -1,    11,    27,    13,    14,    -1,     1,
      32,    -1,    11,    27,    13,    14,    -1,     1,    32,    11,
      27,    13,    14,    -1,     1,    32,    -1,    11,    27,    13,
      14,    -1,     1,    32,    11,    27,    13,    14,    -1,    -1,
      32,    -1,    11,    27,    13,    14,    -1,     1,    32,     1,
      27,    -1,    -1,    -1,    -1,    32,    10,    11,    27,    13,
      14,    -1,    -1,    32,     1,    -1,    18,    19,    20,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    32,    31,
       1,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    -1,    31,     1,    -1,    18,    19,    20,
       1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    -1,
      31,    -1,    18,    19,    20,     1,     1,    18,    19,    25,
       1,    27,    28,    29,    -1,    31,    -1,    28,    29,    -1,
      31,    -1,    18,    18,    20,     1,     1,    18,    -1,    25,
      25,    -1,    -1,    29,    29,    31,    31,    28,    29,    -1,
      31,     1,    18,    18,     1,     1,    -1,    -1,    -1,    25,
      25,    -1,    -1,    29,    29,    31,    31,    -1,    18,     1,
       1,    18,    18,    19,     1,    25,    -1,    -1,    25,    29,
      -1,    31,    29,    29,    31,    31,    18,    18,     1,    -1,
      -1,    18,     1,    25,    25,    -1,    -1,    29,    29,    31,
      31,    28,    29,    -1,    31,    18,     1,     1,    -1,    18,
      -1,    -1,    25,     1,     1,    -1,    29,    -1,    31,    28,
      29,    -1,    31,    18,    18,    -1,    -1,    -1,     1,    -1,
      18,    18,    27,    27,    29,    29,    31,    31,    -1,    27,
      27,    29,    29,    31,    31,    18,    19,     1,    -1,    -1,
       1,    -1,    -1,     1,    -1,    -1,    29,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    18,    19,    -1,    18,    19,     1,
      18,    19,     1,    -1,    -1,    29,     1,    31,    29,    -1,
      31,    29,    -1,    31,    -1,    -1,    18,    19,    -1,    18,
      19,     1,    -1,    18,    19,     1,    -1,    29,     1,    31,
      29,    -1,    31,    -1,    29,    -1,    31,    -1,    18,    19,
      -1,    -1,    18,    19,     1,    18,    19,     1,    -1,    29,
      -1,    31,    -1,    29,    -1,    31,    29,    -1,    31,    -1,
      -1,    18,    19,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    29,    -1,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    37,    50,    32,     1,    32,     0,     1,
       4,    38,    39,    59,    26,    26,     1,    26,    32,     1,
      32,    38,     3,     3,     3,     3,     1,     4,     9,    40,
      59,    40,    40,     1,    24,    51,    51,    51,    51,    32,
       1,    32,    26,    26,     1,    26,    23,     1,    23,    26,
      26,    26,     1,    26,     1,    21,    22,    32,    41,    44,
      49,    59,    41,    41,    41,    29,    29,     1,    29,    41,
      41,    41,    41,    41,     1,    29,     1,     5,    42,    48,
      59,    41,     1,    32,    42,    42,    42,    28,    28,    28,
       1,    28,     1,    11,    13,    14,    32,    43,    53,    54,
      55,    59,    55,    55,    55,    55,    28,     1,    28,    49,
      49,    27,    42,    19,     1,    19,    27,    27,     1,    27,
      32,    32,    32,    32,     1,    32,    24,    29,    30,     1,
      24,     1,    24,     1,    24,     1,    29,    30,    26,    55,
      26,    55,    27,    43,    55,    27,    27,    27,     1,    27,
      32,     1,    32,    25,    25,    25,    25,    25,     1,    25,
       1,    16,    17,    24,    32,    33,    34,    35,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      55,    12,    52,    55,    27,    27,    27,    27,    27,     1,
      27,    24,    24,     1,    24,    22,    32,    56,     1,    22,
      32,    56,    56,     1,    18,    25,    29,    31,    28,    19,
      25,     1,    25,    25,     1,    25,    25,     1,    25,    19,
      28,     1,    28,     1,    19,    27,    26,    27,    47,    49,
      59,    47,    47,    47,    26,    24,    25,    24,    26,     1,
      26,     1,    24,     1,    25,    15,    32,    56,     1,    15,
      32,    19,    56,    56,    30,    19,    19,     1,    19,    30,
      30,     1,    30,     1,    52,    55,    25,    32,    25,    25,
       1,    25,    56,    25,    25,    56,    56,    56,    25,     1,
      25,    24,    28,    24,     1,    24,     1,    28,    56,    56,
      56,    56,    56,    26,    26,    55,    27,    26,     1,    20,
      45,    46,    59,    26,    26,    26,     1,    26,    27,    27,
      27,     1,    27,    56,    57,    59,    57,    57,    57,    19,
      19,    19,    19,     1,    19,    55,    55,    41,    49,    49,
      45,    41,    41,    41,    41,    41,     1,    20,    58,    59,
      25,    25,    25,     1,    25,    27,    27,    43,    32,     1,
      32,    43,    43,    43,    43,    43,    56,    56,    10,    10,
      10,    10,    10,     1,    10,    58,    58,    56,    56,    56,
      56,    56,    56,    56,    19,    19,    19,    19,    19,    19,
       1,    19,    27,    27,    27,    27,    27,    27,    27,     1,
      27
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
        case 5:

/* Line 1455 of yacc.c  */
#line 77 "miniJava.y"
    {       
                                verif_var_used();
                                insert_code("SORTIE",-1, "");
                                print_code();
                        ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 82 "miniJava.y"
    {yyerror (" erreur mot cle class errone dans la line : "); YYABORT;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 83 "miniJava.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 84 "miniJava.y"
    {yyerror (" erreur acolade ouvarnte  manquant dans la line : "); YYABORT;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 85 "miniJava.y"
    {yyerror ("  erreur acolade FERMANT  manquant dans la line : "); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 89 "miniJava.y"
    {yyerror (" mot cle EXTENDS manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 90 "miniJava.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 103 "miniJava.y"
    {
                                insert_declaration((yyvsp[(2) - (3)]), "global", (yyvsp[(1) - (3)]), 0, 0 , 0);
                        ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 106 "miniJava.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 107 "miniJava.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 113 "miniJava.y"
    {
                                insert_declaration((yyvsp[(3) - (3)]),"args","variable",0,0,0);
                                nbr_args++;
                        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 117 "miniJava.y"
    {yyerror ("VIRGULE manquant dans la line :"); YYABORT;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 118 "miniJava.y"
    {yyerror ("identifier errone dans la line :"); YYABORT;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 121 "miniJava.y"
    {
                                insert_declaration((yyvsp[(2) - (3)]),"args","variable",0,0,0);
                                nbr_args++;
                        ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 128 "miniJava.y"
    {
                                insert_declaration((yyvsp[(3) - (13)]),"global","methode",0,0,nbr_args);
                                nbr_args = 0;

                        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 133 "miniJava.y"
    {yyerror ("mot clee class manquant ou errone dans la line :"); YYABORT;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 134 "miniJava.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 135 "miniJava.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 136 "miniJava.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 137 "miniJava.y"
    {yyerror ("acolade ouvrant  manquant dans la line :"); YYABORT;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 138 "miniJava.y"
    {yyerror ("mot clee return manquant ou errone dans la line :"); YYABORT;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 139 "miniJava.y"
    {yyerror ("POINT_VIRGULE manquant  dans la line :"); YYABORT;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 140 "miniJava.y"
    {yyerror ("acolade fermant  manquante dans la line :"); YYABORT;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 146 "miniJava.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 147 "miniJava.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 151 "miniJava.y"
    {yyerror ("erreur de type dans la line :"); YYABORT;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 155 "miniJava.y"
    {yyerror ("mot cle CLASS errone ou bien manquant on line : "); YYABORT;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 156 "miniJava.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 157 "miniJava.y"
    {yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 158 "miniJava.y"
    {yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 159 "miniJava.y"
    {yyerror ("acolade fermant  manquant dans la line:"); YYABORT;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 160 "miniJava.y"
    {yyerror ("acolade fermant  manquant dans la line: "); YYABORT;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 164 "miniJava.y"
    {yyerror (" parenthese ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 165 "miniJava.y"
    {yyerror (" erreur mot cle String errone dans la line:  "); YYABORT;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 166 "miniJava.y"
    {yyerror (" tabulation ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 167 "miniJava.y"
    {yyerror (" tabulation fermante manquante dans la line: "); YYABORT;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 168 "miniJava.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 169 "miniJava.y"
    {yyerror (" parenthese  fermant manquant dans la line: "); YYABORT;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 172 "miniJava.y"
    {
                                insert_code("ALORS", -1, "");
                        ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 177 "miniJava.y"
    {
                                insert_code("SI", -1, "");
                        ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 180 "miniJava.y"
    {yyerror ("mot cle IF errone ou bien manquant on line : "); YYABORT;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 181 "miniJava.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 182 "miniJava.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 185 "miniJava.y"
    {
                                insert_code( "TANTQUE",-1, "");
                        ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 188 "miniJava.y"
    {yyerror ("mot cle WHILE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 189 "miniJava.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 190 "miniJava.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 199 "miniJava.y"
    {yyerror ("mot cle ELSE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 202 "miniJava.y"
    {
                                insert_code( "SORTIE TANT QUE",-1, "");
                        ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 206 "miniJava.y"
    {
                                insert_code( "SORTIE TANT QUE",-1, "");
                        ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 211 "miniJava.y"
    {yyerror ("system.out.println errone ou bien manquant on line : "); YYABORT;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 212 "miniJava.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 213 "miniJava.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 214 "miniJava.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 217 "miniJava.y"
    {
                                int index = init_var((yyvsp[(1) - (4)]));
                                index = use_var((yyvsp[(1) - (4)]));
                                insert_code("STORE", index, "");
                        ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 222 "miniJava.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 223 "miniJava.y"
    {yyerror ("AFFECTATION errone dans la line :"); YYABORT;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 224 "miniJava.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 227 "miniJava.y"
    {
                                int index = init_var((yyvsp[(1) - (7)]));
                                insert_code("STORE", index, "");
                                index = use_var((yyvsp[(1) - (7)]));
                        ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 232 "miniJava.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 233 "miniJava.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 234 "miniJava.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 235 "miniJava.y"
    {yyerror ("AFFECTATION errone dans la line :"); YYABORT;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 236 "miniJava.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 240 "miniJava.y"
    {
                                int index = use_var((yyvsp[(1) - (3)]));
                                if (index > -1)
                                        insert_code("LDV", index, "");

                                index = use_var((yyvsp[(3) - (3)]));
                                if (index > -1)
                                        insert_code("LDV", index, "");
                                
                                insert_op((yyvsp[(2) - (3)]));

                        ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 252 "miniJava.y"
    {yyerror ("operateur manquant dans la line :"); YYABORT;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 255 "miniJava.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 256 "miniJava.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 259 "miniJava.y"
    {yyerror ("POINT manquant dans la line :"); YYABORT;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 260 "miniJava.y"
    {yyerror ("mot cle LENGTH manquant dans la line :"); YYABORT;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 263 "miniJava.y"
    {
                                verif_args((yyvsp[(3) - (6)]),nbr_param);
                                nbr_param = 0;
                        ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 268 "miniJava.y"
    {yyerror ("POINT manquant dans la line :"); YYABORT;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 269 "miniJava.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 270 "miniJava.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 271 "miniJava.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 275 "miniJava.y"
    {
                                insert_code("LCD", atoi( (yyvsp[(1) - (1)]) ), "");
                        ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 281 "miniJava.y"
    {yyerror ("erreur dans la line :"); YYABORT;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 284 "miniJava.y"
    {yyerror (" mot cle NEW manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 285 "miniJava.y"
    {yyerror (" mot cle int manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 286 "miniJava.y"
    {yyerror (" erreur acolade ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 287 "miniJava.y"
    {yyerror (" erreur acolade fermante  manquante dans la line : "); YYABORT;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 290 "miniJava.y"
    {yyerror (" mot cle NEW manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 291 "miniJava.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 292 "miniJava.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 293 "miniJava.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 296 "miniJava.y"
    {yyerror ("erreur dans la line :"); YYABORT;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 299 "miniJava.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 300 "miniJava.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 304 "miniJava.y"
    {
                                nbr_param++;
                        ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 310 "miniJava.y"
    {
                                nbr_param++;
                        ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 314 "miniJava.y"
    {yyerror ("erreur VIRGULE manquante dans la line :"); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 2496 "miniJava.tab.c"
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
#line 326 "miniJava.y"
 

int yyerror(char const *msg) {
	fprintf(stderr, "%s %d\n", msg,line);
	return 0;	
}

extern FILE *yyin;

main()
{
 yyparse();
 
}
