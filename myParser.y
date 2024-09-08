
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FILE *yyout;         
extern int yylex(void);    

extern int yylineno;      
char strKey[20] = "";
int lineStart = 0, lineEnd = 0, typeError = 0;
int count = 0

void yyerror(const char *s);

void assignError(int type, char valStr[20], int line);


%}


%token TOK_INT TOK_REAL TOK_BOOL TOK_STRING TOK_CLASS
%token TOK_LBRA TOK_RBRA TOK_LBRACK TOK_RBRACK TOK_COLON TOK_COMMA
%token TOK_LAST TOK_ACTIVE TOK_GAMEID TOK_DRAWID TOK_DRAWTIME TOK_STATUS
%token TOK_DRAWBREAK TOK_VISUALDRAW TOK_PRICEPOINTS TOK_AMOUNT TOK_WINNINGNUMBERS TOK_LIST TOK_BONUS
%token TOK_PRIZECATEGORIES TOK_ID TOK_DIVIDENT TOK_WINNERS TOK_DISTRIBUTED TOK_JACKPOT TOK_FIXED TOK_CATEGORYTYPE TOK_GAMETYPE
%token TOK_MINIMUMDISTRIBUTED TOK_WAGERSTATISTICS TOK_COLUMNS TOK_WAGERS TOK_ADDON
%token TOK_CONTENT TOK_TOTALPAGES TOK_TOTALELEMENTS TOK_NUMBEROFELEMENTS TOK_SORT TOK_FIRST TOK_SIZE TOK_NUMBER
%token TOK_DIRECTION TOK_PROPERTY TOK_IGNORECASE TOK_NULLHANDLING TOK_DESCENDING TOK_ASCENDING
%token TOK_END TOK_ERROR


%start Input

%%

Input : /* Empty */
      | LastResult { showResult(); } 
      | RangeResult { showResult(); } 
	  | error { printf("ERROR Unknown.\n"); }
;

LastResult : StartObj PartLast1 SepList PartActive EndObj
;

RangeResult : StartObj PartContent SepList PartTotalPages SepList PartTotalElements SepList PartLast SepList PartNumberOfElements SepList PartSort SepList PartFirst SepList PartSize SepList PartNumber EndObj
;

StartObj : TOK_LBRA
         | error { assignError(1, "{", yylineno); YYABORT; }
;

SepObj : TOK_COLON
       | error { assignError(1, ":", yylineno); YYABORT; }
;

EndObj : TOK_RBRA
       | error { assignError(1, "}", yylineno); YYABORT; }
;

StartList : TOK_LBRACK
          | error { assignError(1, "[", yylineno); YYABORT; }
;

SepList : TOK_COMMA
        | error { assignError(1, ",", yylineno); YYABORT; }
;

EndList : TOK_RBRACK
        | error { assignError(1, "]", yylineno); YYABORT; }
;

ConstantInt : TOK_INT
            | error { assignError(3, "INT", yylineno); YYABORT; }
;

ConstantReal : TOK_REAL
             | error { assignError(3, "REAL", yylineno); YYABORT; }
;

ConstantBool : TOK_BOOL
             | error { assignError(3, "BOOL", yylineno); YYABORT; }
;

ConstantClass : TOK_CLASS
              | error { assignError(3, "CLASS", yylineno); YYABORT; }
;

ConstantString : TOK_STRING
               | TOK_CLASS
               | TOK_LAST
			   | TOK_ACTIVE
			   | TOK_GAMEID
			   | TOK_DRAWID
			   | TOK_DRAWTIME
			   | TOK_STATUS
			   | TOK_DRAWBREAK
			   | TOK_VISUALDRAW
			   | TOK_PRICEPOINTS
			   | TOK_AMOUNT
			   | TOK_WINNINGNUMBERS
			   | TOK_LIST
			   | TOK_BONUS
			   | TOK_PRIZECATEGORIES
			   | TOK_ID
			   | TOK_DIVIDENT
			   | TOK_WINNERS
			   | TOK_DISTRIBUTED
			   | TOK_JACKPOT
			   | TOK_FIXED
			   | TOK_CATEGORYTYPE
			   | TOK_GAMETYPE
			   | TOK_MINIMUMDISTRIBUTED
			   | TOK_WAGERSTATISTICS
			   | TOK_COLUMNS
			   | TOK_WAGERS
			   | TOK_ADDON
			   | TOK_CONTENT
			   | TOK_TOTALPAGES
			   | TOK_TOTALELEMENTS
			   | TOK_NUMBEROFELEMENTS
			   | TOK_SORT
			   | TOK_FIRST
			   | TOK_SIZE
			   | TOK_NUMBER
			   | TOK_DIRECTION
			   | TOK_PROPERTY
			   | TOK_IGNORECASE
			   | TOK_NULLHANDLING
			   | TOK_DESCENDING
			   | TOK_ASCENDING
               | error { assignError(3, "STRING", yylineno); YYABORT; }
;

PartLast1 : TOK_LAST SepObj StartObj AllElemenLast EndObj
          | error { assignError(2, "last or content", yylineno); YYABORT; }
;

PartActive : TOK_ACTIVE SepObj StartObj AllElemenActive EndObj
           | error { assignError(2, "active", yylineno); YYABORT; }
;

PartContent : TOK_CONTENT SepObj StartList AllElemenContent EndList
;

AllElemenLast : PartCommon SepList PartWinningNumbers SepList PartPrizeCategories SepList PartWagerStatistics
;

AllElemenActive : PartCommon SepList PartPrizeCategories SepList PartWagerStatistics
;

AllElemenContent : AllElemenContent TOK_COMMA StartObj AllElemenLast EndObj
                 | StartObj AllElemenLast EndObj
;

PartCommon : PartGameId SepList PartDrawId SepList PartDrawTime SepList PartStatus SepList PartDrawBreak SepList PartVisualDraw SepList PartPricePoints
;

PartGameId : TOK_GAMEID SepObj ConstantInt
           | error { assignError(2, "gameId", yylineno); YYABORT; }
;

PartDrawId : TOK_DRAWID SepObj ConstantInt
           | error { assignError(2, "drawId", yylineno); YYABORT; }
;

PartDrawTime : TOK_DRAWTIME SepObj ConstantInt
             | error { assignError(2, "drawTime", yylineno); YYABORT; }
;

PartStatus : TOK_STATUS SepObj ConstantString
           | error { assignError(2, "status", yylineno); YYABORT; }
;

PartDrawBreak : TOK_DRAWBREAK SepObj ConstantInt
              | error { assignError(2, "drawBreak", yylineno); YYABORT; }
;

PartVisualDraw : TOK_VISUALDRAW SepObj ConstantInt
               | error { assignError(2, "visualDraw", yylineno); YYABORT; }
;

PartPricePoints : TOK_PRICEPOINTS SepObj StartObj PartAmount EndObj
                | error { assignError(2, "pricePoints", yylineno); YYABORT; }
;

PartAmount : TOK_AMOUNT SepObj ConstantReal
           | error { assignError(2, "amount", yylineno); YYABORT; }
;

PartWinningNumbers : TOK_WINNINGNUMBERS SepObj StartObj PartList SepList PartBonus EndObj
                   | error { assignError(2, "winningNumbers", yylineno); YYABORT; }
;

PartList : TOK_LIST SepObj StartList { count=0; } AllElemenList EndList { if(count != 5) { assignError(4, "list", yylineno); YYABORT; } }
         | error { assignError(2, "list", yylineno); YYABORT; }
;

AllElemenList : AllElemenList TOK_COMMA ConstantInt { count++; if(($3 < 1)||($3 > 45)) { assignError(4, "list", yylineno); YYABORT; } }
              | ConstantInt { count++; if(($1 < 1)||($1 > 45)) { assignError(4, "list", yylineno); YYABORT; } }
;

PartBonus : TOK_BONUS SepObj StartList ConstantInt EndList
          | error { assignError(2, "bonus", yylineno); YYABORT; }
;

PartPrizeCategories : TOK_PRIZECATEGORIES SepObj StartList { count=0; } AllElemenPrizeCategories EndList { if(count != 8) { assignError(7, "prizeCategories", yylineno); YYABORT; } }
                    | error { assignError(2, "prizeCategories", yylineno); YYABORT; }
;

AllElemenPrizeCategories : AllElemenPrizeCategories TOK_COMMA ObjPrizeCateg { count++; }
                         | ObjPrizeCateg { count++; }
;

ObjPrizeCateg : StartObj PartMandatory PartOptional EndObj
;

PartMandatory : PartId SepList PartDivident SepList PartWinners SepList PartDistributed SepList PartJackpot SepList PartFixed SepList PartCategoryType SepList PartGameType
;

PartOptional : /* Empty */
             | TOK_COMMA PartMinimumDistributed
;

PartId : TOK_ID SepObj ConstantInt { if(($3 < 1) || ($3 > 8)) { assignError(5, "id", yylineno); YYABORT; } }
       | error { assignError(2, "id", yylineno); YYABORT; }
;

PartDivident : TOK_DIVIDENT SepObj ConstantReal
             | error { assignError(2, "divident", yylineno); YYABORT; }
;

PartWinners : TOK_WINNERS SepObj ConstantInt
            | error { assignError(2, "winners", yylineno); YYABORT; }
;

PartDistributed : TOK_DISTRIBUTED SepObj ConstantReal
                | error { assignError(2, "distributed", yylineno); YYABORT; }
;

PartJackpot : TOK_JACKPOT SepObj ConstantReal
            | error { assignError(2, "jackpot", yylineno); YYABORT; }
;

PartFixed : TOK_FIXED SepObj ConstantReal
          | error { assignError(2, "fixed", yylineno); YYABORT; }
;

PartCategoryType : TOK_CATEGORYTYPE SepObj ConstantInt { if(($3 != 0) && ($3 != 1)) { assignError(6, "categoryType", yylineno); YYABORT; } }
                 | error { assignError(2, "categoryType", yylineno); YYABORT; }
;

PartGameType : TOK_GAMETYPE SepObj ConstantString
             | error { assignError(2, "gameType", yylineno); YYABORT; }
;

PartMinimumDistributed : TOK_MINIMUMDISTRIBUTED SepObj ConstantReal
                   | error { assignError(2, "minimumDistributed", yylineno); YYABORT; }
;

PartWagerStatistics : TOK_WAGERSTATISTICS SepObj StartObj ObjWagerStati EndObj
                    | error { assignError(2, "wagerStatistics", yylineno); YYABORT; }
;

ObjWagerStati : PartColumns SepList PartWagers SepList PartAddon
;

PartColumns : TOK_COLUMNS SepObj ConstantInt
            | error { assignError(2, "columns", yylineno); YYABORT; }
;

PartWagers : TOK_WAGERS SepObj ConstantInt
           | error { assignError(2, "wagers", yylineno); YYABORT; }
;

PartAddon : TOK_ADDON SepObj StartList EndList
          | error { assignError(2, "addon", yylineno); YYABORT; }
;

PartTotalPages : TOK_TOTALPAGES SepObj ConstantInt
               | error { assignError(2, "totalPages", yylineno); YYABORT; }
;

PartTotalElements : TOK_TOTALELEMENTS SepObj ConstantInt
                  | error { assignError(2, "totalElements", yylineno); YYABORT; }
;

PartLast : TOK_LAST SepObj ConstantBool
         | error { assignError(2, "last", yylineno); YYABORT; }
;

PartNumberOfElements : TOK_NUMBEROFELEMENTS SepObj ConstantInt
                     | error { assignError(2, "numberOfElements", yylineno); YYABORT; }
;

PartSort : TOK_SORT SepObj StartList StartObj AllElemenSort EndObj EndList
         | error { assignError(2, "sort", yylineno); YYABORT; }
;

AllElemenSort : PartDirection SepList PartProperty SepList PartIgnoreCase SepList PartNullHandling SepList PartDescending SepList PartAscending
;

PartFirst : TOK_FIRST SepObj ConstantBool
          | error { assignError(2, "first", yylineno); YYABORT; }
;

PartSize : TOK_SIZE SepObj ConstantInt
         | error { assignError(2, "size", yylineno); YYABORT; }
;

PartNumber : TOK_NUMBER SepObj ConstantInt
           | error { assignError(2, "number", yylineno); YYABORT; }
;

PartDirection : TOK_DIRECTION SepObj ConstantString
              | error { assignError(2, "direction", yylineno); YYABORT; }
;

PartProperty : TOK_PROPERTY SepObj ConstantClass
             | error { assignError(2, "property", yylineno); YYABORT; }
;

PartIgnoreCase : TOK_IGNORECASE SepObj ConstantBool
               | error { assignError(2, "ignoreCase", yylineno); YYABORT; }
;

PartNullHandling : TOK_NULLHANDLING SepObj ConstantString
                 | error { assignError(2, "nullHandling", yylineno); YYABORT; }
;

PartDescending : TOK_DESCENDING SepObj ConstantBool
               | error { assignError(2, "descending", yylineno); YYABORT; }
;

PartAscending : TOK_ASCENDING SepObj ConstantBool
              | error { assignError(2, "ascending", yylineno); YYABORT; }
;

%%



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
