
 /* Νεες εκδοσεις του flex επιτρεπουν τη χρηση του %option noyywrap στην αρχη του λεκτικου αναλυτη οπου δεν καλειται το yywrap δηλαδη οτι θα διαβαζεται ενα πηγαιο αρχειο κωδικα καθε φορα */
%option noyywrap

 /* Προτρεπει τον flex να παραγει εναν αναλυτη που κραταει τον αριθμο της τρεχουσας γραμμης σε μια global μεταβλητη με ονομα yylineno */
%option yylineno

%{
#include <stdio.h>
#include <stdlib.h>
#include "myParser.tab.h"         // το μεταφρασμενο αρχειο του Bison
#define YYSTYPE int		// προσδιορισμος του YYSTYPE ως int, χρήση μόνο όταν είναι αναγκαίο.

%}

 /* Δήλωση ονομάτων */

white     [ \t\r]+
digit     [0-9]
integer   {digit}+
exponent  [eE][+-]?{integer}
alpha     [a-zA-Z]+
real      {integer}("."{integer})?{exponent}?
string    (\\.|[^\"])*
class     {alpha}("."{alpha})+
boolean   ("true"|"false")

%%

 /* απο εδώ όταν ο flex συναντά την πρώτη λέξη στα αριστερά πχ last, active, gameID ... επιστρεφει τα αντιστοιχα tokens */

"\"last\""                 { /*printf("Symbol STR last\n");*/ return TOK_LAST; }
"\"active\""               { /*printf("Symbol STR active\n");*/ return TOK_ACTIVE; }
"\"gameId\""               { /*printf("Symbol STR gameId\n");*/ return TOK_GAMEID; }
"\"drawId\""               { /*printf("Symbol STR drawId\n");*/ return TOK_DRAWID; }
"\"drawTime\""             { /*printf("Symbol STR drawTime\n");*/ return TOK_DRAWTIME; }
"\"status\""               { /*printf("Symbol STR status\n");*/ return TOK_STATUS; }
"\"drawBreak\""            { /*printf("Symbol STR drawBreak\n");*/ return TOK_DRAWBREAK; }
"\"visualDraw\""           { /*printf("Symbol STR visualDraw\n");*/ return TOK_VISUALDRAW; }
"\"pricePoints\""          { /*printf("Symbol STR pricePoints\n");*/ return TOK_PRICEPOINTS; }
"\"amount\""               { /*printf("Symbol STR amount\n");*/ return TOK_AMOUNT; }
"\"winningNumbers\""       { /*printf("Symbol STR winningNumbers\n");*/ return TOK_WINNINGNUMBERS; }
"\"list\""                 { /*printf("Symbol STR list\n");*/ return TOK_LIST; }
"\"bonus\""                { /*printf("Symbol STR bonus\n");*/ return TOK_BONUS; }
"\"prizeCategories\""      { /*printf("Symbol STR prizeCategories\n");*/ return TOK_PRIZECATEGORIES; }
"\"id\""                   { /*printf("Symbol STR id\n");*/ return TOK_ID; }
"\"divident\""             { /*printf("Symbol STR divident\n");*/ return TOK_DIVIDENT; }
"\"winners\""              { /*printf("Symbol STR winners\n");*/ return TOK_WINNERS; }
"\"distributed\""          { /*printf("Symbol STR distributed\n");*/ return TOK_DISTRIBUTED; }
"\"jackpot\""              { /*printf("Symbol STR jackpot\n");*/ return TOK_JACKPOT; }
"\"fixed\""                { /*printf("Symbol STR fixed\n");*/ return TOK_FIXED; }
"\"categoryType\""         { /*printf("Symbol STR categoryType\n");*/ return TOK_CATEGORYTYPE; }
"\"gameType\""             { /*printf("Symbol STR gameType\n");*/ return TOK_GAMETYPE; }
"\"minimumDistributed\""   { /*printf("Symbol STR minimumDistributed\n");*/ return TOK_MINIMUMDISTRIBUTED; }
"\"wagerStatistics\""      { /*printf("Symbol STR wagerStatistics\n");*/ return TOK_WAGERSTATISTICS; }
"\"columns\""              { /*printf("Symbol STR columns\n");*/ return TOK_COLUMNS; }
"\"wagers\""               { /*printf("Symbol STR wagers\n");*/ return TOK_WAGERS; }
"\"addOn\""                { /*printf("Symbol STR addOn\n");*/ return TOK_ADDON; }
"\"content\""              { /*printf("Symbol STR content\n");*/ return TOK_CONTENT; }
"\"totalPages\""           { /*printf("Symbol STR totalPages\n");*/ return TOK_TOTALPAGES; }
"\"totalElements\""        { /*printf("Symbol STR totalElements\n");*/ return TOK_TOTALELEMENTS; }
"\"numberOfElements\""     { /*printf("Symbol STR numberOfElements\n");*/ return TOK_NUMBEROFELEMENTS; }
"\"sort\""                 { /*printf("Symbol STR sort\n");*/ return TOK_SORT; }
"\"first\""                { /*printf("Symbol STR first\n");*/ return TOK_FIRST; }
"\"size\""                 { /*printf("Symbol STR size\n");*/ return TOK_SIZE; }
"\"number\""               { /*printf("Symbol STR number\n");*/ return TOK_NUMBER; }
"\"direction\""            { /*printf("Symbol STR direction\n");*/ return TOK_DIRECTION; }
"\"property\""             { /*printf("Symbol STR property\n");*/ return TOK_PROPERTY; }
"\"ignoreCase\""           { /*printf("Symbol STR ignoreCase\n");*/ return TOK_IGNORECASE; }
"\"nullHandling\""         { /*printf("Symbol STR nullHandling\n");*/ return TOK_NULLHANDLING; }
"\"descending\""           { /*printf("Symbol STR descending\n");*/ return TOK_DESCENDING; }
"\"ascending\""            { /*printf("Symbol STR ascending\n");*/ return TOK_ASCENDING; }

{white}     { }
{integer}   { /*printf("Number Int: %d\n", atoi(yytext));*/ yylval=atoi(yytext); return TOK_INT; }
{real}      { /*printf("Number Float: %.2f\n", atof(yytext));*/ return TOK_REAL; }
{boolean}   { /*printf("Boolean: %s\n", yytext);*/ return TOK_BOOL; }

"{"    { /*printf("Symbol {\n");*/ return TOK_LBRA; }
"}"    { /*printf("Symbol }\n");*/ return TOK_RBRA; }
"["    { /*printf("Symbol [\n");*/ return TOK_LBRACK; }
"]"    { /*printf("Symbol ]\n");*/ return TOK_RBRACK; }
":"    { /*printf("Symbol :\n");*/ return TOK_COLON; }
","    { /*printf("Symbol ,\n");*/ return TOK_COMMA; }

\"{class}\"      { /*printf("Class: %s\n", yytext);*/ return TOK_CLASS; }
\"{string}\"     { /*printf("String: %s\n", yytext);*/ return TOK_STRING; }

"\n"   { /*printf("Symbol BREAK LINE: %d\n", yylineno);*/ }

.      { return TOK_ERROR; }		/* Οποιοσδηποτε αλλος χαρακτηρας που δεν υπαρχει στα προηγουμενα γυριζει error */
