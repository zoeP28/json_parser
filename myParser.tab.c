/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_INT = 258,
     TOK_REAL = 259,
     TOK_BOOL = 260,
     TOK_STRING = 261,
     TOK_CLASS = 262,
     TOK_LBRA = 263,
     TOK_RBRA = 264,
     TOK_LBRACK = 265,
     TOK_RBRACK = 266,
     TOK_COLON = 267,
     TOK_COMMA = 268,
     TOK_LAST = 269,
     TOK_ACTIVE = 270,
     TOK_GAMEID = 271,
     TOK_DRAWID = 272,
     TOK_DRAWTIME = 273,
     TOK_STATUS = 274,
     TOK_DRAWBREAK = 275,
     TOK_VISUALDRAW = 276,
     TOK_PRICEPOINTS = 277,
     TOK_AMOUNT = 278,
     TOK_WINNINGNUMBERS = 279,
     TOK_LIST = 280,
     TOK_BONUS = 281,
     TOK_PRIZECATEGORIES = 282,
     TOK_ID = 283,
     TOK_DIVIDENT = 284,
     TOK_WINNERS = 285,
     TOK_DISTRIBUTED = 286,
     TOK_JACKPOT = 287,
     TOK_FIXED = 288,
     TOK_CATEGORYTYPE = 289,
     TOK_GAMETYPE = 290,
     TOK_MINIMUMDISTRIBUTED = 291,
     TOK_WAGERSTATISTICS = 292,
     TOK_COLUMNS = 293,
     TOK_WAGERS = 294,
     TOK_ADDON = 295,
     TOK_CONTENT = 296,
     TOK_TOTALPAGES = 297,
     TOK_TOTALELEMENTS = 298,
     TOK_NUMBEROFELEMENTS = 299,
     TOK_SORT = 300,
     TOK_FIRST = 301,
     TOK_SIZE = 302,
     TOK_NUMBER = 303,
     TOK_DIRECTION = 304,
     TOK_PROPERTY = 305,
     TOK_IGNORECASE = 306,
     TOK_NULLHANDLING = 307,
     TOK_DESCENDING = 308,
     TOK_ASCENDING = 309,
     TOK_END = 310,
     TOK_ERROR = 311
   };
#endif
/* Tokens.  */
#define TOK_INT 258
#define TOK_REAL 259
#define TOK_BOOL 260
#define TOK_STRING 261
#define TOK_CLASS 262
#define TOK_LBRA 263
#define TOK_RBRA 264
#define TOK_LBRACK 265
#define TOK_RBRACK 266
#define TOK_COLON 267
#define TOK_COMMA 268
#define TOK_LAST 269
#define TOK_ACTIVE 270
#define TOK_GAMEID 271
#define TOK_DRAWID 272
#define TOK_DRAWTIME 273
#define TOK_STATUS 274
#define TOK_DRAWBREAK 275
#define TOK_VISUALDRAW 276
#define TOK_PRICEPOINTS 277
#define TOK_AMOUNT 278
#define TOK_WINNINGNUMBERS 279
#define TOK_LIST 280
#define TOK_BONUS 281
#define TOK_PRIZECATEGORIES 282
#define TOK_ID 283
#define TOK_DIVIDENT 284
#define TOK_WINNERS 285
#define TOK_DISTRIBUTED 286
#define TOK_JACKPOT 287
#define TOK_FIXED 288
#define TOK_CATEGORYTYPE 289
#define TOK_GAMETYPE 290
#define TOK_MINIMUMDISTRIBUTED 291
#define TOK_WAGERSTATISTICS 292
#define TOK_COLUMNS 293
#define TOK_WAGERS 294
#define TOK_ADDON 295
#define TOK_CONTENT 296
#define TOK_TOTALPAGES 297
#define TOK_TOTALELEMENTS 298
#define TOK_NUMBEROFELEMENTS 299
#define TOK_SORT 300
#define TOK_FIRST 301
#define TOK_SIZE 302
#define TOK_NUMBER 303
#define TOK_DIRECTION 304
#define TOK_PROPERTY 305
#define TOK_IGNORECASE 306
#define TOK_NULLHANDLING 307
#define TOK_DESCENDING 308
#define TOK_ASCENDING 309
#define TOK_END 310
#define TOK_ERROR 311




/* Copy the first part of user declarations.  */
#line 2 "myParser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define YYSTYPE int		//προσδιοριζει το YYSTYPE ως int, ώστε όλα τα σύμβολα να είναι ακέραιοι

extern FILE *yyout;         //το yyout ειναι δεικτης του flex, δηλωνεται ως extern για να μπορεί να χρησιμοποιηθεί στο bison
extern int yylex(void);    //δηλωση συναρτησης yylex η οποία ξεκινάει το Flex, δηλώνεται ως extern αφού ορίζεται στο flex

extern int yylineno;      //δηλωση μεταβλητής yylineno ως εξωτερικής, η οποία δείχνει τη γραμμή του πηγαίου κώδικα που εχει δηλωθει στο Flex και για να μπορει να χρησιμοποιηθει και στο Bison δηλωνεται ως εξωερική

 /* Δηλωση μεταβλητων που χρησιμοποιουνται για τη διαχειριση σφαλματων κατα την αναλυση */
char strKey[20] = "";
int lineStart = 0, lineEnd = 0, typeError = 0;
int count = 0, isValid = 1;

 /* συναρτηση που τυπωνει το αποτελεσμα της αναλυσης */
void showResult();
 /* συναρτηση που δειχνει το σφαλμα και τη γραμμη */
void assignError(int type, char valStr[20], int line);
 /* συναρτηση που καλειται αυτοματα οταν παραβιαζεται καποιος κανονας που οριζει η γραμματικη */
void yyerror(const char *s);


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 242 "myParser.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   439

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  171
/* YYNRULES -- Number of states.  */
#define YYNSTATES  362

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    10,    16,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    66,    68,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    90,    92,    94,    96,    98,
     100,   102,   104,   106,   108,   110,   112,   114,   116,   118,
     120,   122,   124,   126,   128,   130,   132,   134,   136,   138,
     140,   142,   144,   146,   148,   150,   152,   154,   156,   158,
     160,   162,   164,   170,   172,   178,   180,   186,   194,   200,
     206,   210,   224,   228,   230,   234,   236,   240,   242,   246,
     248,   252,   254,   258,   260,   266,   268,   272,   274,   282,
     284,   285,   292,   294,   298,   300,   306,   308,   309,   316,
     318,   322,   324,   329,   345,   346,   349,   353,   355,   359,
     361,   365,   367,   371,   373,   377,   379,   383,   385,   389,
     391,   395,   397,   401,   403,   409,   411,   417,   421,   423,
     427,   429,   434,   436,   440,   442,   446,   448,   452,   454,
     458,   460,   468,   470,   482,   486,   488,   492,   494,   498,
     500,   504,   506,   510,   512,   516,   518,   522,   524,   528,
     530,   534
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    -1,    59,    -1,    60,    -1,     1,    -1,
      61,    72,    65,    73,    63,    -1,    61,    74,    65,   112,
      65,   113,    65,   114,    65,   115,    65,   116,    65,   118,
      65,   119,    65,   120,    63,    -1,     8,    -1,     1,    -1,
      12,    -1,     1,    -1,     9,    -1,     1,    -1,    10,    -1,
       1,    -1,    13,    -1,     1,    -1,    11,    -1,     1,    -1,
       3,    -1,     1,    -1,     4,    -1,     1,    -1,     5,    -1,
       1,    -1,     7,    -1,     1,    -1,     6,    -1,     7,    -1,
      14,    -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,
      19,    -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      29,    -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,
      34,    -1,    35,    -1,    36,    -1,    37,    -1,    38,    -1,
      39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,    -1,
      44,    -1,    45,    -1,    46,    -1,    47,    -1,    48,    -1,
      49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,
      54,    -1,     1,    -1,    14,    62,    61,    75,    63,    -1,
       1,    -1,    15,    62,    61,    76,    63,    -1,     1,    -1,
      41,    62,    64,    77,    66,    -1,    78,    65,    87,    65,
      92,    65,   107,    -1,    78,    65,    92,    65,   107,    -1,
      77,    13,    61,    75,    63,    -1,    61,    75,    63,    -1,
      79,    65,    80,    65,    81,    65,    82,    65,    83,    65,
      84,    65,    85,    -1,    16,    62,    67,    -1,     1,    -1,
      17,    62,    67,    -1,     1,    -1,    18,    62,    67,    -1,
       1,    -1,    19,    62,    71,    -1,     1,    -1,    20,    62,
      67,    -1,     1,    -1,    21,    62,    67,    -1,     1,    -1,
      22,    62,    61,    86,    63,    -1,     1,    -1,    23,    62,
      68,    -1,     1,    -1,    24,    62,    61,    88,    65,    91,
      63,    -1,     1,    -1,    -1,    25,    62,    64,    89,    90,
      66,    -1,     1,    -1,    90,    13,    67,    -1,    67,    -1,
      26,    62,    64,    67,    66,    -1,     1,    -1,    -1,    27,
      62,    64,    93,    94,    66,    -1,     1,    -1,    94,    13,
      95,    -1,    95,    -1,    61,    96,    97,    63,    -1,    98,
      65,    99,    65,   100,    65,   101,    65,   102,    65,   103,
      65,   104,    65,   105,    -1,    -1,    13,   106,    -1,    28,
      62,    67,    -1,     1,    -1,    29,    62,    68,    -1,     1,
      -1,    30,    62,    67,    -1,     1,    -1,    31,    62,    68,
      -1,     1,    -1,    32,    62,    68,    -1,     1,    -1,    33,
      62,    68,    -1,     1,    -1,    34,    62,    67,    -1,     1,
      -1,    35,    62,    71,    -1,     1,    -1,    36,    62,    68,
      -1,     1,    -1,    37,    62,    61,   108,    63,    -1,     1,
      -1,   109,    65,   110,    65,   111,    -1,    38,    62,    67,
      -1,     1,    -1,    39,    62,    67,    -1,     1,    -1,    40,
      62,    64,    66,    -1,     1,    -1,    42,    62,    67,    -1,
       1,    -1,    43,    62,    67,    -1,     1,    -1,    14,    62,
      69,    -1,     1,    -1,    44,    62,    67,    -1,     1,    -1,
      45,    62,    64,    61,   117,    63,    66,    -1,     1,    -1,
     121,    65,   122,    65,   123,    65,   124,    65,   125,    65,
     126,    -1,    46,    62,    69,    -1,     1,    -1,    47,    62,
      67,    -1,     1,    -1,    48,    62,    67,    -1,     1,    -1,
      49,    62,    71,    -1,     1,    -1,    50,    62,    70,    -1,
       1,    -1,    51,    62,    69,    -1,     1,    -1,    52,    62,
      71,    -1,     1,    -1,    53,    62,    69,    -1,     1,    -1,
      54,    62,    69,    -1,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    43,    44,    45,    48,    51,    54,    55,
      58,    59,    62,    63,    66,    67,    70,    71,    74,    75,
      78,    79,    82,    83,    86,    87,    90,    91,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   140,   141,   144,   145,   148,   151,   154,   157,
     158,   161,   164,   165,   168,   169,   172,   173,   176,   177,
     180,   181,   184,   185,   188,   189,   192,   193,   196,   197,
     200,   200,   201,   204,   205,   208,   209,   212,   212,   213,
     216,   217,   220,   223,   226,   227,   230,   231,   234,   235,
     238,   239,   242,   243,   246,   247,   250,   251,   254,   255,
     258,   259,   262,   263,   266,   267,   270,   273,   274,   277,
     278,   281,   282,   285,   286,   289,   290,   293,   294,   297,
     298,   301,   302,   305,   308,   309,   312,   313,   316,   317,
     320,   321,   324,   325,   328,   329,   332,   333,   336,   337,
     340,   341
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_INT", "TOK_REAL", "TOK_BOOL",
  "TOK_STRING", "TOK_CLASS", "TOK_LBRA", "TOK_RBRA", "TOK_LBRACK",
  "TOK_RBRACK", "TOK_COLON", "TOK_COMMA", "TOK_LAST", "TOK_ACTIVE",
  "TOK_GAMEID", "TOK_DRAWID", "TOK_DRAWTIME", "TOK_STATUS",
  "TOK_DRAWBREAK", "TOK_VISUALDRAW", "TOK_PRICEPOINTS", "TOK_AMOUNT",
  "TOK_WINNINGNUMBERS", "TOK_LIST", "TOK_BONUS", "TOK_PRIZECATEGORIES",
  "TOK_ID", "TOK_DIVIDENT", "TOK_WINNERS", "TOK_DISTRIBUTED",
  "TOK_JACKPOT", "TOK_FIXED", "TOK_CATEGORYTYPE", "TOK_GAMETYPE",
  "TOK_MINIMUMDISTRIBUTED", "TOK_WAGERSTATISTICS", "TOK_COLUMNS",
  "TOK_WAGERS", "TOK_ADDON", "TOK_CONTENT", "TOK_TOTALPAGES",
  "TOK_TOTALELEMENTS", "TOK_NUMBEROFELEMENTS", "TOK_SORT", "TOK_FIRST",
  "TOK_SIZE", "TOK_NUMBER", "TOK_DIRECTION", "TOK_PROPERTY",
  "TOK_IGNORECASE", "TOK_NULLHANDLING", "TOK_DESCENDING", "TOK_ASCENDING",
  "TOK_END", "TOK_ERROR", "$accept", "Input", "LastResult", "RangeResult",
  "StartObj", "SepObj", "EndObj", "StartList", "SepList", "EndList",
  "ConstantInt", "ConstantReal", "ConstantBool", "ConstantClass",
  "ConstantString", "PartLast1", "PartActive", "PartContent",
  "AllElemenLast", "AllElemenActive", "AllElemenContent", "PartCommon",
  "PartGameId", "PartDrawId", "PartDrawTime", "PartStatus",
  "PartDrawBreak", "PartVisualDraw", "PartPricePoints", "PartAmount",
  "PartWinningNumbers", "PartList", "@1", "AllElemenList", "PartBonus",
  "PartPrizeCategories", "@2", "AllElemenPrizeCategories", "ObjPrizeCateg",
  "PartMandatory", "PartOptional", "PartId", "PartDivident", "PartWinners",
  "PartDistributed", "PartJackpot", "PartFixed", "PartCategoryType",
  "PartGameType", "PartMinimumDistributed", "PartWagerStatistics",
  "ObjWagerStati", "PartColumns", "PartWagers", "PartAddon",
  "PartTotalPages", "PartTotalElements", "PartLast",
  "PartNumberOfElements", "PartSort", "AllElemenSort", "PartFirst",
  "PartSize", "PartNumber", "PartDirection", "PartProperty",
  "PartIgnoreCase", "PartNullHandling", "PartDescending", "PartAscending", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    58,    58,    58,    59,    60,    61,    61,
      62,    62,    63,    63,    64,    64,    65,    65,    66,    66,
      67,    67,    68,    68,    69,    69,    70,    70,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    72,    72,    73,    73,    74,    75,    76,    77,
      77,    78,    79,    79,    80,    80,    81,    81,    82,    82,
      83,    83,    84,    84,    85,    85,    86,    86,    87,    87,
      89,    88,    88,    90,    90,    91,    91,    93,    92,    92,
      94,    94,    95,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   107,   107,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   116,   116,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   123,   123,   124,   124,   125,   125,
     126,   126
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     5,    19,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     1,     5,     1,     5,     7,     5,     5,
       3,    13,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     7,     1,
       0,     6,     1,     3,     1,     5,     1,     0,     6,     1,
       3,     1,     4,    15,     0,     2,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     5,     3,     1,     3,
       1,     4,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     7,     1,    11,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,     8,     0,     3,     4,     0,     1,    73,     0,
       0,     0,     0,    11,    10,     0,     0,    17,    16,     0,
       0,     9,     0,    15,    14,     0,    75,     0,     0,   144,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
      13,    12,     6,     0,     0,     0,    72,     0,     0,     0,
      19,    18,     0,    76,     0,    21,    20,   143,   146,     0,
       0,    82,    99,     0,     0,    85,     0,     0,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,   145,   148,     0,     0,     0,   109,     0,     0,    84,
      87,     0,     0,    79,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,    25,    24,   147,   150,     0,
       0,     0,     0,   107,   135,     0,    77,    86,    89,     0,
       0,    78,     0,     0,   100,   106,     0,     0,     0,     0,
       0,     0,   149,   152,     0,     0,     0,     0,    98,     0,
       0,   111,     0,    71,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    88,    91,     0,
       0,     0,     0,   104,     0,     0,   117,     0,   114,     0,
       0,   108,   138,     0,     0,     0,     0,     0,     0,   155,
       0,     0,     0,   101,     0,     0,     0,     0,     0,   110,
       0,   134,     0,    90,    93,     0,     0,     0,     0,     0,
     103,   105,   116,   133,     0,   115,   112,   119,     0,     0,
     137,   140,     0,     0,     0,     0,   161,     0,     0,     0,
     154,   157,     0,     0,     0,     0,     0,     0,     0,    92,
      95,     0,    81,     0,     0,     0,     0,     0,    23,    22,
     132,   118,   121,     0,     0,   139,   142,     0,   136,     0,
     160,   151,   163,     0,     0,   156,   159,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,   120,   123,     0,
       0,     0,    97,     0,     0,    27,    26,   162,   165,     0,
       0,   158,     0,     0,   141,     0,    94,     0,     0,   122,
     125,     0,     0,    96,   164,   167,     0,     0,     0,     0,
       0,     0,   124,   127,     0,     0,   166,   169,     0,     0,
       0,     0,     0,     0,   126,   129,     0,     0,   168,   171,
       0,   153,     0,     0,     0,   128,   131,     0,   113,   170,
       0,   130
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,   139,    15,    42,    25,    19,    53,
      57,   270,   107,   307,   187,    11,    28,    12,    34,    70,
      38,    35,    36,    67,    92,   120,   190,   226,   262,   304,
      64,    99,   136,   194,   127,    88,   128,   140,   141,   198,
     217,   199,   239,   274,   300,   322,   335,   347,   358,   235,
     116,   204,   205,   243,   278,    31,    60,    84,   110,   135,
     248,   211,   253,   288,   249,   284,   310,   327,   339,   351
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -263
static const yytype_int16 yypact[] =
{
      34,    39,  -263,   188,  -263,  -263,    30,  -263,  -263,   168,
     168,   170,   170,  -263,  -263,   146,   145,  -263,  -263,   149,
       8,  -263,   144,  -263,  -263,   146,  -263,   168,   176,  -263,
     168,   170,  -263,   168,   176,   170,   170,   144,   161,   146,
    -263,  -263,  -263,   150,    35,   150,  -263,   119,   139,   176,
    -263,  -263,   146,  -263,   144,  -263,  -263,  -263,  -263,   168,
     170,  -263,  -263,   168,   170,  -263,   168,   170,  -263,   144,
     176,   170,   150,   151,   146,   105,   150,   143,   176,  -263,
     105,  -263,  -263,   168,   170,    96,  -263,   168,   170,  -263,
    -263,   168,   170,  -263,   170,   196,    32,  -263,   168,   170,
     145,    71,   150,   140,    71,  -263,  -263,  -263,  -263,   168,
     170,   145,   111,  -263,  -263,   168,  -263,  -263,  -263,   168,
     170,  -263,   150,    29,  -263,  -263,   168,   176,   146,   146,
     385,   138,  -263,  -263,   168,   170,   150,   145,  -263,    95,
     162,  -263,    10,  -263,  -263,  -263,  -263,  -263,  -263,  -263,
    -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,
    -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,
    -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,
    -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,   168,
     170,   145,    23,  -263,   165,   150,  -263,   168,   157,   170,
     146,  -263,  -263,   168,   176,   170,   150,    24,   146,  -263,
     168,   170,   150,  -263,   183,   150,    91,   176,   109,  -263,
     150,  -263,    31,  -263,  -263,   168,   170,    15,   196,    20,
    -263,  -263,  -263,  -263,   168,  -263,  -263,  -263,   168,   170,
    -263,  -263,   168,   170,   150,   114,  -263,   168,   176,   170,
    -263,  -263,   168,   170,    36,    36,    17,   150,    42,  -263,
    -263,   168,  -263,   385,   183,     9,   150,    18,  -263,  -263,
    -263,  -263,  -263,   168,   170,  -263,  -263,   168,  -263,   146,
    -263,  -263,  -263,   168,   170,  -263,  -263,   168,   176,   150,
     102,   145,   106,   185,     6,   150,  -263,  -263,  -263,   168,
     170,   183,  -263,   168,   176,  -263,  -263,  -263,  -263,   168,
     170,  -263,    36,   103,  -263,    36,  -263,   196,    11,  -263,
    -263,   168,   170,  -263,  -263,  -263,   168,   170,    36,    92,
     385,     1,  -263,  -263,   168,   170,  -263,  -263,   168,   170,
      36,    83,   196,     7,  -263,  -263,   168,   170,  -263,  -263,
     168,  -263,   150,    99,   196,  -263,  -263,   168,  -263,  -263,
     385,  -263
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -263,  -263,  -263,  -263,    13,   -10,    79,   -96,    -9,  -134,
      46,  -226,  -223,  -263,  -262,  -263,  -263,  -263,   -23,  -263,
    -263,   135,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,
    -263,  -263,  -263,  -263,  -263,   118,  -263,  -263,    -1,  -263,
    -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,
      87,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,
    -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -6
static const yytype_int16 yytable[] =
{
      16,   280,   337,    20,   113,   250,   201,   308,   349,    29,
     282,   202,   325,     6,    49,   124,   246,    39,   272,   286,
      43,   251,    44,    45,   209,   224,    47,    48,    22,   271,
     133,     8,   241,   108,    -2,     1,    58,   268,    37,    -5,
     269,   195,     2,   276,     9,   225,    78,   273,   203,    72,
      30,    73,    54,    74,   338,    75,    76,   309,    77,   283,
     213,   350,    80,   326,   247,    69,   287,   252,   336,   210,
     242,    10,   114,    95,   134,    96,   109,   100,    59,   101,
     231,   102,   277,   103,   345,   104,   319,    85,   111,   323,
     112,    61,   233,   333,   324,   208,   196,    97,   361,   122,
     356,   123,   332,   298,   320,   129,    86,   302,   115,   130,
     237,   131,   125,    46,   344,   260,   137,   346,    81,   348,
      62,    98,    89,   197,   191,   334,   192,   234,    68,   303,
     281,   359,    87,   299,   357,   321,   261,   126,   238,   188,
      65,   118,   142,    63,    90,    32,    23,    21,   117,    79,
      26,    55,    82,    56,     2,    24,    66,    93,   189,   119,
      33,    91,    50,    50,    27,    83,    50,   314,   132,    13,
     216,    17,    51,    51,    52,   200,    51,    40,   212,   206,
      14,   207,   193,    18,    50,    41,   305,   215,     7,    71,
     218,   121,   306,   220,    51,   301,   222,   105,    94,   219,
     228,   106,   229,     0,     0,     0,   138,     0,     0,     0,
       0,     0,     0,     0,     0,   244,     0,   245,     0,     0,
       0,   227,     0,     0,   254,     0,     0,     0,   255,     0,
     256,     0,   257,     0,   258,     0,     0,   263,     0,     0,
     265,   214,   266,     0,   267,     0,     0,     0,     0,     0,
       0,   279,   223,     0,     0,     0,     0,     0,   230,     0,
       0,   232,     0,   289,     0,   290,   240,   291,     0,     0,
       0,     0,     0,   293,     0,   294,     0,   295,     0,     0,
       0,     0,     0,   221,     0,     0,     0,     0,     0,   312,
     259,   313,   292,   315,     0,     0,   236,     0,     0,   317,
       0,   318,     0,   275,     0,     0,     0,     0,     0,     0,
       0,   328,   285,   329,     0,     0,   330,     0,   331,     0,
       0,     0,     0,     0,   340,     0,   341,   264,   342,     0,
     343,     0,     0,     0,     0,   297,   352,     0,   353,     0,
     354,   311,     0,     0,     0,     0,     0,   360,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   296,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   316,     0,     0,   143,     0,     0,     0,
       0,   144,   145,     0,     0,     0,     0,     0,   355,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186
};

static const yytype_int16 yycheck[] =
{
      10,   263,     1,    12,   100,   228,   140,     1,     1,     1,
       1,     1,     1,     0,    37,   111,     1,    27,     1,     1,
      30,     1,    31,    33,     1,     1,    35,    36,    15,   255,
       1,     1,     1,     1,     0,     1,     1,     1,    25,     0,
       4,   137,     8,     1,    14,    21,    69,    30,    38,    59,
      42,    60,    39,    63,    53,    64,    66,    51,    67,    50,
     194,    54,    71,    52,    49,    52,    48,    47,   330,    46,
      39,    41,     1,    83,    45,    84,    44,    87,    43,    88,
     214,    91,    40,    92,     1,    94,   312,    74,    98,   315,
      99,    45,     1,     1,   317,   191,     1,     1,   360,   109,
       1,   110,   328,     1,     1,   115,     1,     1,    37,   119,
       1,   120,     1,    34,   340,     1,   126,    34,    72,   342,
       1,    25,    76,    28,   134,    33,   135,    36,    49,    23,
     264,   354,    27,    31,    35,    32,    22,    26,    29,     1,
       1,     1,   129,    24,     1,     1,     1,     1,   102,    70,
       1,     1,     1,     3,     8,    10,    17,    78,    20,    19,
      16,    18,     1,     1,    15,    14,     1,   301,   122,     1,
      13,     1,    11,    11,    13,    13,    11,     1,    13,   189,
      12,   190,   136,    13,     1,     9,     1,   197,     0,    54,
     199,   104,     7,   203,    11,   291,   205,     1,    80,   200,
     210,     5,   211,    -1,    -1,    -1,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,   226,    -1,    -1,
      -1,   208,    -1,    -1,   234,    -1,    -1,    -1,   238,    -1,
     239,    -1,   242,    -1,   243,    -1,    -1,   247,    -1,    -1,
     249,   195,   252,    -1,   253,    -1,    -1,    -1,    -1,    -1,
      -1,   261,   206,    -1,    -1,    -1,    -1,    -1,   212,    -1,
      -1,   215,    -1,   273,    -1,   274,   220,   277,    -1,    -1,
      -1,    -1,    -1,   283,    -1,   284,    -1,   287,    -1,    -1,
      -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,   299,
     244,   300,   279,   303,    -1,    -1,   217,    -1,    -1,   309,
      -1,   310,    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   321,   266,   322,    -1,    -1,   326,    -1,   327,    -1,
      -1,    -1,    -1,    -1,   334,    -1,   335,   248,   338,    -1,
     339,    -1,    -1,    -1,    -1,   289,   346,    -1,   347,    -1,
     350,   295,    -1,    -1,    -1,    -1,    -1,   357,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,    -1,     1,    -1,    -1,    -1,
      -1,     6,     7,    -1,    -1,    -1,    -1,    -1,   352,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     8,    58,    59,    60,    61,     0,     1,    14,
      41,    72,    74,     1,    12,    62,    62,     1,    13,    65,
      65,     1,    61,     1,    10,    64,     1,    15,    73,     1,
      42,   112,     1,    16,    75,    78,    79,    61,    77,    62,
       1,     9,    63,    62,    65,    62,    63,    65,    65,    75,
       1,    11,    13,    66,    61,     1,     3,    67,     1,    43,
     113,    67,     1,    24,    87,     1,    17,    80,    63,    61,
      76,    78,    62,    65,    62,    65,    62,    65,    75,    63,
      65,    67,     1,    14,   114,    61,     1,    27,    92,    67,
       1,    18,    81,    63,    92,    62,    65,     1,    25,    88,
      62,    65,    62,    65,    65,     1,     5,    69,     1,    44,
     115,    62,    65,    64,     1,    37,   107,    67,     1,    19,
      82,   107,    62,    65,    64,     1,    26,    91,    93,    62,
      62,    65,    67,     1,    45,   116,    89,    62,    63,    61,
      94,    95,    61,     1,     6,     7,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    71,     1,    20,
      83,    62,    65,    67,    90,    64,     1,    28,    96,    98,
      13,    66,     1,    38,   108,   109,    62,    65,    64,     1,
      46,   118,    13,    66,    67,    62,    13,    97,    65,    95,
      62,    63,    65,    67,     1,    21,    84,    61,    62,    65,
      67,    66,    67,     1,    36,   106,    63,     1,    29,    99,
      67,     1,    39,   110,    62,    65,     1,    49,   117,   121,
      69,     1,    47,   119,    62,    62,    65,    62,    65,    67,
       1,    22,    85,    62,    63,    65,    62,    65,     1,     4,
      68,    68,     1,    30,   100,    67,     1,    40,   111,    62,
      71,    66,     1,    50,   122,    67,     1,    48,   120,    62,
      65,    62,    61,    62,    65,    62,    63,    67,     1,    31,
     101,    64,     1,    23,    86,     1,     7,    70,     1,    51,
     123,    67,    62,    65,    66,    62,    63,    62,    65,    68,
       1,    32,   102,    68,    69,     1,    52,   124,    62,    65,
      62,    65,    68,     1,    33,   103,    71,     1,    53,   125,
      62,    65,    62,    65,    68,     1,    34,   104,    69,     1,
      54,   126,    62,    65,    62,    67,     1,    35,   105,    69,
      62,    71
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 3:
#line 43 "myParser.y"
    { showResult(); ;}
    break;

  case 4:
#line 44 "myParser.y"
    { showResult(); ;}
    break;

  case 5:
#line 45 "myParser.y"
    { printf("ERROR Unknown.\n"); ;}
    break;

  case 9:
#line 55 "myParser.y"
    { assignError(1, "{", yylineno); YYABORT; ;}
    break;

  case 11:
#line 59 "myParser.y"
    { assignError(1, ":", yylineno); YYABORT; ;}
    break;

  case 13:
#line 63 "myParser.y"
    { assignError(1, "}", yylineno); YYABORT; ;}
    break;

  case 15:
#line 67 "myParser.y"
    { assignError(1, "[", yylineno); YYABORT; ;}
    break;

  case 17:
#line 71 "myParser.y"
    { assignError(1, ",", yylineno); YYABORT; ;}
    break;

  case 19:
#line 75 "myParser.y"
    { assignError(1, "]", yylineno); YYABORT; ;}
    break;

  case 21:
#line 79 "myParser.y"
    { assignError(3, "INT", yylineno); YYABORT; ;}
    break;

  case 23:
#line 83 "myParser.y"
    { assignError(3, "REAL", yylineno); YYABORT; ;}
    break;

  case 25:
#line 87 "myParser.y"
    { assignError(3, "BOOL", yylineno); YYABORT; ;}
    break;

  case 27:
#line 91 "myParser.y"
    { assignError(3, "CLASS", yylineno); YYABORT; ;}
    break;

  case 71:
#line 137 "myParser.y"
    { assignError(3, "STRING", yylineno); YYABORT; ;}
    break;

  case 73:
#line 141 "myParser.y"
    { assignError(2, "last or content", yylineno); YYABORT; ;}
    break;

  case 75:
#line 145 "myParser.y"
    { assignError(2, "active", yylineno); YYABORT; ;}
    break;

  case 83:
#line 165 "myParser.y"
    { assignError(2, "gameId", yylineno); YYABORT; ;}
    break;

  case 85:
#line 169 "myParser.y"
    { assignError(2, "drawId", yylineno); YYABORT; ;}
    break;

  case 87:
#line 173 "myParser.y"
    { assignError(2, "drawTime", yylineno); YYABORT; ;}
    break;

  case 89:
#line 177 "myParser.y"
    { assignError(2, "status", yylineno); YYABORT; ;}
    break;

  case 91:
#line 181 "myParser.y"
    { assignError(2, "drawBreak", yylineno); YYABORT; ;}
    break;

  case 93:
#line 185 "myParser.y"
    { assignError(2, "visualDraw", yylineno); YYABORT; ;}
    break;

  case 95:
#line 189 "myParser.y"
    { assignError(2, "pricePoints", yylineno); YYABORT; ;}
    break;

  case 97:
#line 193 "myParser.y"
    { assignError(2, "amount", yylineno); YYABORT; ;}
    break;

  case 99:
#line 197 "myParser.y"
    { assignError(2, "winningNumbers", yylineno); YYABORT; ;}
    break;

  case 100:
#line 200 "myParser.y"
    { count=0; ;}
    break;

  case 101:
#line 200 "myParser.y"
    { if(count != 5) { assignError(4, "list", yylineno); YYABORT; } ;}
    break;

  case 102:
#line 201 "myParser.y"
    { assignError(2, "list", yylineno); YYABORT; ;}
    break;

  case 103:
#line 204 "myParser.y"
    { count++; if(((yyvsp[(3) - (3)]) < 1)||((yyvsp[(3) - (3)]) > 45)) { assignError(4, "list", yylineno); YYABORT; } ;}
    break;

  case 104:
#line 205 "myParser.y"
    { count++; if(((yyvsp[(1) - (1)]) < 1)||((yyvsp[(1) - (1)]) > 45)) { assignError(4, "list", yylineno); YYABORT; } ;}
    break;

  case 106:
#line 209 "myParser.y"
    { assignError(2, "bonus", yylineno); YYABORT; ;}
    break;

  case 107:
#line 212 "myParser.y"
    { count=0; ;}
    break;

  case 108:
#line 212 "myParser.y"
    { if(count != 8) { assignError(7, "prizeCategories", yylineno); YYABORT; } ;}
    break;

  case 109:
#line 213 "myParser.y"
    { assignError(2, "prizeCategories", yylineno); YYABORT; ;}
    break;

  case 110:
#line 216 "myParser.y"
    { count++; ;}
    break;

  case 111:
#line 217 "myParser.y"
    { count++; ;}
    break;

  case 116:
#line 230 "myParser.y"
    { if(((yyvsp[(3) - (3)]) < 1) || ((yyvsp[(3) - (3)]) > 8)) { assignError(5, "id", yylineno); YYABORT; } ;}
    break;

  case 117:
#line 231 "myParser.y"
    { assignError(2, "id", yylineno); YYABORT; ;}
    break;

  case 119:
#line 235 "myParser.y"
    { assignError(2, "divident", yylineno); YYABORT; ;}
    break;

  case 121:
#line 239 "myParser.y"
    { assignError(2, "winners", yylineno); YYABORT; ;}
    break;

  case 123:
#line 243 "myParser.y"
    { assignError(2, "distributed", yylineno); YYABORT; ;}
    break;

  case 125:
#line 247 "myParser.y"
    { assignError(2, "jackpot", yylineno); YYABORT; ;}
    break;

  case 127:
#line 251 "myParser.y"
    { assignError(2, "fixed", yylineno); YYABORT; ;}
    break;

  case 128:
#line 254 "myParser.y"
    { if(((yyvsp[(3) - (3)]) != 0) && ((yyvsp[(3) - (3)]) != 1)) { assignError(6, "categoryType", yylineno); YYABORT; } ;}
    break;

  case 129:
#line 255 "myParser.y"
    { assignError(2, "categoryType", yylineno); YYABORT; ;}
    break;

  case 131:
#line 259 "myParser.y"
    { assignError(2, "gameType", yylineno); YYABORT; ;}
    break;

  case 133:
#line 263 "myParser.y"
    { assignError(2, "minimumDistributed", yylineno); YYABORT; ;}
    break;

  case 135:
#line 267 "myParser.y"
    { assignError(2, "wagerStatistics", yylineno); YYABORT; ;}
    break;

  case 138:
#line 274 "myParser.y"
    { assignError(2, "columns", yylineno); YYABORT; ;}
    break;

  case 140:
#line 278 "myParser.y"
    { assignError(2, "wagers", yylineno); YYABORT; ;}
    break;

  case 142:
#line 282 "myParser.y"
    { assignError(2, "addon", yylineno); YYABORT; ;}
    break;

  case 144:
#line 286 "myParser.y"
    { assignError(2, "totalPages", yylineno); YYABORT; ;}
    break;

  case 146:
#line 290 "myParser.y"
    { assignError(2, "totalElements", yylineno); YYABORT; ;}
    break;

  case 148:
#line 294 "myParser.y"
    { assignError(2, "last", yylineno); YYABORT; ;}
    break;

  case 150:
#line 298 "myParser.y"
    { assignError(2, "numberOfElements", yylineno); YYABORT; ;}
    break;

  case 152:
#line 302 "myParser.y"
    { assignError(2, "sort", yylineno); YYABORT; ;}
    break;

  case 155:
#line 309 "myParser.y"
    { assignError(2, "first", yylineno); YYABORT; ;}
    break;

  case 157:
#line 313 "myParser.y"
    { assignError(2, "size", yylineno); YYABORT; ;}
    break;

  case 159:
#line 317 "myParser.y"
    { assignError(2, "number", yylineno); YYABORT; ;}
    break;

  case 161:
#line 321 "myParser.y"
    { assignError(2, "direction", yylineno); YYABORT; ;}
    break;

  case 163:
#line 325 "myParser.y"
    { assignError(2, "property", yylineno); YYABORT; ;}
    break;

  case 165:
#line 329 "myParser.y"
    { assignError(2, "ignoreCase", yylineno); YYABORT; ;}
    break;

  case 167:
#line 333 "myParser.y"
    { assignError(2, "nullHandling", yylineno); YYABORT; ;}
    break;

  case 169:
#line 337 "myParser.y"
    { assignError(2, "descending", yylineno); YYABORT; ;}
    break;

  case 171:
#line 341 "myParser.y"
    { assignError(2, "ascending", yylineno); YYABORT; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2112 "myParser.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 344 "myParser.y"

 /* τέλος συντακτικών κανόνων του Bison */
/***********************************************
*
* Void συνάρτηση η οποία τυπώνει το αποτέλεσμα
* της ανάλυσης
* για 0 δεν γυρνάει κάποιο σφάλμα
* ανάλογα τα cases και τα ζητούμενα της άσκησης
* γυρνάει το κατάλληλο σφάλμα με το ανάλογο μνμ
************************************************/
void showResult()
{
	if(typeError == 0) {
		fprintf(yyout, "File written successfully.\n");
	} else {
		fprintf(yyout, "Error: ");
		switch(typeError) {
			case 1:
				fprintf(yyout, "missing symbol: (%s) ", strKey);
				break;
			case 2:
				fprintf(yyout, "missing key: (%s) ", strKey);
				break;
			case 3:
				fprintf(yyout, "missing constant: (%s) ", strKey);
				break;
			case 4:
				fprintf(yyout, "the 'list' item of 'winningNumbers' does not contain exactly 5 positives integers, in the range 1 - 45, ");
				break;
			case 5:
				fprintf(yyout, "the 'id' item of 'prizeCategories' does not contain exactly 1 positive integer, in the range 1 - 8, ");
				break;
			case 6:
				fprintf(yyout, "the 'categoryType' item of 'prizeCategories' does not contain exactly 1 positive integer, in the range 0 - 1, ");
				break;
			case 7:
				fprintf(yyout, "the 'prizeCategories' item does not contain exactly 8 nested JSONs objects, ");
				break;
		}

		if(lineStart == lineEnd) {
			fprintf(yyout, "in line: %d\n", lineStart);
		} else {
			fprintf(yyout, "between lines: %d-%d\n", lineStart, lineEnd);
		}
	}
}

/******************************************************************************
*
* συναρτηση η οποια αποθηκευει και δειχνει το σφαλμα
* παίρνει ως παραμέτρους το type τυπου ακεραιο, με στατους 0
* να δειχνει οτι δεν υπηρξε καποιος σφαλμα
* οποιαδήποτε άλλη τιμή σημαίνει ότι υπήρξε σφάλμα
*
* η μεταβλητη valStr τυπου string περιεχει πληροφορια για το σφαλμα
* η μεταβλητη line τυπου ακεραιου περιεχει τον αριθμο της γραμμης του σφαλματος
*
*******************************************************************************/
void assignError(int type, char valStr[20], int line)
{
	if(typeError == 0) {
		typeError = type;
		strcpy(strKey, valStr);
		if (line == 1) {
			lineStart = line;
		} else {
			lineStart = line-1;
		}
		lineEnd = line;
		showResult();
	}
}

void yyerror(const char *s){
	//printf("Error in: %s\n", s);
	//printf("%d: %s at '%s'\n", yylineno, s, yytext);
}

