/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

