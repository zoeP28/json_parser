
#include <stdio.h>

extern int yyparse(void);
extern FILE *yyin;
extern FILE *yyout;

int main(int argc, char *argv[]) {

	if (argc >= 2) {
		yyin = fopen(argv[1], "r");
		if (yyin == NULL) {
			yyin = stdin;
			printf("Error: Opening file %s\n", argv[1]);
		} else {
			yyout = stdout;

			yyparse();
		  
			if (yyin != NULL) {
				fclose(yyin);
			}
		}		
	} else {
		printf("Error: Missing parameter\n");
	}
  
	return 0;
}
