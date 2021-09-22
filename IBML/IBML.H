typedef union {  char *s;  int i; } YYSTYPE;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#define	YYACCEPT	return(0)
#define	YYABORT	return(1)
#define	YYERROR	goto yyerrlab
#define	dataline	258
#define	code	259
#define	codelines	260
#define	repetitions	261
#define	unravel	262
#define	decimal	263
#define	string	264
#define	end	265

