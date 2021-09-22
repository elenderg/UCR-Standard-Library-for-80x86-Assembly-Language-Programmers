
/*  A Bison parser, made from ibml.bsn  */

#define	dataline	258
#define	code	259
#define	codelines	260
#define	repetitions	261
#define	unravel	262
#define	decimal	263
#define	string	264
#define	end	265

#line 1 "ibml.bsn"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int lineindx, discntindx, initindx, elindx;
extern char *lines[], *discounts[], *inits[], *els[];
extern char *StrVal;
extern char *yytext;
extern FILE *yyin;
FILE *skelfile;
int repeats1, repeats2, TestCnt;
int unravels;
void yyerror(char*);
void getline(char*, FILE*);
void nextsection(void);

#line 28 "ibml.bsn"
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
#include <stdio.h>

#ifndef __STDC__
#define const
#endif



#define	YYFINAL		28
#define	YYFLAG		-32767
#define	YYNTBASE	14

#define YYTRANSLATE(x) ((unsigned)(x) <= 265 ? yytranslate[x] : 23)

static const char yytranslate[] = {     0,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,  12,
  13,   2,   2,  11,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   1,   2,   3,   4,   5,
   6,   7,   8,   9,  10
};

static const short yyrline[] = {     0,
  31,  37,  39,  40,  44,  44,  45,  47,  48,  49,
  51,  52, 152
};

static const char * const yytname[] = {     0,
"error","$illegal.","dataline","code","codelines","repetitions","unravel","decimal","string","end",
"','","'('","')'","pgm"
};

static const short yyr1[] = {     0,
  15,  14,  16,  17,  16,  18,  16,  19,  20,  19,
  21,  22,  21
};

static const short yyr2[] = {     0,
   0,   3,   0,   0,   6,   0,   4,   0,   0,   3,
   1,   0,   8
};

static const short yydefact[] = {   8,
   9,   1,   8,   3,  10,   0,   0,  11,   0,   2,
   0,   6,   0,   0,   3,   0,   4,   7,   0,   3,
   0,   5,  12,   3,  13,   0,   0,   0
};

static const short yydefgoto[] = {    26,
     4,     9,    20,    15,     2,     3,    10,    24
};

static const short yypact[] = {    -2,
-32767,-32767,    -2,    -4,-32767,     2,     3,-32767,     0,-32767,
     4,-32767,    -3,     5,     1,     7,-32767,-32767,    -1,     1,
     9,-32767,-32767,    -4,-32767,    17,    18,-32767
};

static const short yypgoto[] = {-32767,
-32767,   -15,-32767,-32767,    16,-32767,     6,-32767
};


#define	YYLAST		30


static const short yytable[] = {  18,
   1,   6,   7,  13,  22,   8,   6,   7,  16,  11,
  12,  21,  17,  23,  14,  19,  27,  28,   5,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,  25
};

static const short yycheck[] = {  15,
   3,   6,   7,   4,  20,  10,   6,   7,  12,   8,
   8,  13,   8,   5,  11,   9,   0,   0,   3,  -1,
  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  24
};
#define YYPURE 1

#line 2 "bison.simple"

/* Skeleton output parser for bison,
   copyright (C) 1984 Bob Corbett and Richard Stallman */


/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYFAIL		goto yyerrlab;

#define YYTERROR	1

#ifndef YYIMPURE
extern int yylex( void) ;
#define YYLEX		yylex()
#endif

#ifndef YYPURE
extern int yylex( YYLTYPE *, YYLTYPE *) ;
#define YYLEX		yylex(&yylval, &yylloc)
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYIMPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/

int yynerr;			/*  number of parse errors so far       */

#ifdef YYDEBUG
int yydebug = 0;		/*  nonzero means print parse trace	*/
#endif

#endif  /* YYIMPURE */


/*  YYMAXDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYMAXDEPTH
#define YYMAXDEPTH 200
#endif

/*  YYMAXLIMIT is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#ifndef YYMAXLIMIT
#define YYMAXLIMIT 10000
#endif


#line 167 "bison.simple"
int
yyparse()
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  YYLTYPE *yylsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYMAXDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYMAXDEPTH];	/*  the semantic value stack		*/
  YYLTYPE yylsa[YYMAXDEPTH];	/*  the location stack			*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */
  YYLTYPE *yyls = yylsa;

  int yymaxdepth = YYMAXDEPTH;

#ifndef YYPURE
  int yychar;
  YYSTYPE yylval;
  YYLTYPE yylloc;
#endif

#ifdef YYDEBUG
  extern int yydebug;
#endif


  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#ifdef YYDEBUG
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerr = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
  yylsp = yyls;

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yymaxdepth - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      YYLTYPE *yyls1 = yyls;
      short *yyss1 = yyss;

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yymaxdepth);

      yyss = yyss1; yyvs = yyvs1; yyls = yyls1;
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yymaxdepth >= YYMAXLIMIT)
	yyerror("parser stack overflow");
      yymaxdepth *= 2;
      if (yymaxdepth > YYMAXLIMIT)
	yymaxdepth = YYMAXLIMIT;
      yyss = (short *) malloc (yymaxdepth * sizeof (*yyssp));
      memcpy ((char *)yyss, (char *)yyss1, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) malloc (yymaxdepth * sizeof (*yyvsp));
      memcpy ((char *)yyvs, (char *)yyvs1, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) malloc (yymaxdepth * sizeof (*yylsp));
      memcpy ((char *)yyls, (char *)yyls1, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#ifdef YYDEBUG
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yymaxdepth);
#endif

      if (yyssp >= yyss + yymaxdepth - 1)
	YYABORT;
    }

#ifdef YYDEBUG
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
yyresume:

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#ifdef YYDEBUG
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#ifdef YYDEBUG
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#ifdef YYDEBUG
      if (yydebug)
	fprintf(stderr, "Next token is %d (%s)\n", yychar, yytname[yychar1]);
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#ifdef YYDEBUG
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  yyval = yyvsp[1-yylen]; /* implement default value of the action */

#ifdef YYDEBUG
  if (yydebug)
    {
      if (yylen == 1)
	fprintf (stderr, "Reducing 1 value via line %d, ",
		 yyrline[yyn]);
      else
	fprintf (stderr, "Reducing %d values via line %d, ",
		 yylen, yyrline[yyn]);
    }
#endif

   /* the action file gets copied in in place of this dollarsign */

  switch (yyn) {

case 1:
#line 32 "ibml.bsn"
{nextsection();
		 repeats1 = 0xffff;
		 repeats2 = 5;
		 unravels = 1;
		;
    break;}
case 2:
#line 37 "ibml.bsn"
{nextsection();;
    break;}
case 4:
#line 41 "ibml.bsn"
{repeats1 = yyvsp[-2].i; repeats2 = yyvsp[0].i;;
    break;}
case 6:
#line 44 "ibml.bsn"
{unravels = yyvsp[0].i;
    break;}
case 9:
#line 48 "ibml.bsn"
{puts(yytext);;
    break;}
case 12:
#line 54 "ibml.bsn"
{	int i, j;


			/* First, compute the overhead time */

			printf(".macro00%d\tmacro\n",TestCnt);
			for (i=0; i < initindx; ++i)
			{
				printf("%s",inits[i]);
			}

			printf("\t\tprint\n\t\tdb\t\"Computing Overhead: %s\",cr,lf,0\n",
				StrVal);
			puts("\t\tcall\t.GetTicks");
			puts("\t\tmov\t.TimeStart, DX");
			printf("\t\tmov\t.OuterLoopCtr, %d\n",repeats1);
			printf(".Outerlp%d:\tmov\t.InnerLoopCtr, %d\n",
					TestCnt, repeats2);
			printf(".Innerlp%d:\n",TestCnt);

			for (i=0; i < elindx; ++i)
			{
				printf("%s",els[i]);
			}

			printf("\t\trept\t%d\n",unravels);

			for (i=0; i < discntindx; ++i)
			{
				printf("%s",discounts[i]);
				free(discounts[i]);
			}
			puts("\t\tendm\n\n");
			puts("\t\tdec\t.InnerLoopCtr");
			printf("\t\tjz\t.TS0000%d\n",TestCnt);
			printf("\t\tjmp\t.Innerlp%d\n",TestCnt);
			printf(".TS0000%d:\tdec\t.OuterLoopCtr\n",TestCnt);
			printf("\t\tjz\t.TS0001%d\n",TestCnt);
			printf("\t\tjmp\t.Outerlp%d\n",TestCnt);
			printf(".TS0001%d:\tcall\t.GetTicks\n",TestCnt);
			puts("\t\tmov\tax, dx");
			puts("\t\tsub\tax, .TimeStart");
			puts("\t\tmov\t.OverHead, ax");
			++TestCnt;
			puts("\t\tendm\n\n");
			printf("\t\t.macro00%d\n\n",TestCnt-1);


			/* Now, compute the running time of the desired code */


			printf(".macro00%d\tmacro\n",TestCnt);
			for (i=0; i < initindx; ++i)
			{
				printf("%s",inits[i]);
				free(inits[i]);
			}
			printf("\t\tprint\n\t\tdb\t\"Testing: %s\",cr,lf,0\n",
				StrVal);
			puts("\t\tcall\t.GetTicks");
			puts("\t\tmov\t.TimeStart, DX");
			printf("\t\tmov\t.OuterLoopCtr, %d\n",repeats1);
			printf(".Outerlp%d:\tmov\t.InnerLoopCtr, %d\n",
					TestCnt, repeats2);
			printf(".Innerlp%d:\n",TestCnt);
			for (i=0; i < elindx; ++i)
			{
				printf("%s",els[i]);
				free(els[i]);
			}
			printf("\t\trept\t%d\n",unravels);
			for (i=0; i < lineindx; ++i)
			{
				printf("%s",lines[i]);
				free(lines[i]);
			}
			puts("\t\tendm");
			puts("\t\tdec\t.InnerLoopCtr");
			printf("\t\tjz\t.TS0000%d\n",TestCnt);
			printf("\t\tjmp\t.Innerlp%d\n",TestCnt);
			printf(".TS0000%d:\tdec\t.OuterLoopCtr\n",TestCnt);
			printf("\t\tjz\t.TS0001%d\n",TestCnt);
			printf("\t\tjmp\t.Outerlp%d\n",TestCnt);
			printf(".TS0001%d:\tcall\t.GetTicks\n",TestCnt);
			puts("\t\tprint");
			printf("\t\tdb\t\"%s :\",0\n",StrVal);
			puts("\t\tmov\tax, dx");
			puts("\t\tsub\tax, .TimeStart");
			puts("\t\tsub\tax, .OverHead");
			puts("\t\tputi");
			puts("\t\tputcr");
			++TestCnt;
			puts("\t\tendm\n\n");
			printf("\t\t.macro00%d\n\n\n",TestCnt-1);
;
			free(StrVal);
		    ;
    break;}
}
#line 308 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#ifdef YYDEBUG
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerr;
      yyerror("parse error");
    }

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#ifdef YYDEBUG
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#ifdef YYDEBUG
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#ifdef YYDEBUG
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}


#line 153 "ibml.bsn"

void yyerror(char *msg)
{
	puts(msg);
	exit(1);
}

void getline(char *inp, FILE *f)
{
	char ch;

	while (((ch=fgetc(f)) != NULL) && (ch != '\n')) 
		*(inp++) = ch;
	*inp = 0;
}

void nextsection()
{
	char inputline[1024];

		inputline[0] = 0;
		while (strcmp(inputline,";##") != 0)
		{
			getline(inputline,skelfile);
			puts(inputline);
		}
}


main(argc, argv)
int argc;
char *argv[];
{

	TestCnt = 0;
	if (argc != 2) puts("Usage: ibml filename");
	else
	{
		skelfile = fopen("ibmlinc.a","r");
		if (skelfile == NULL)
		{
			puts("Error: Cannot find ibmlinc.a file");
			exit(1);
		}
		yyin = fopen(argv[1],"r");
		if (yyin == NULL)
		{
			puts("Error: Cannot open input file.");
			exit(1);
		}
		nextsection();
		yyparse();
	}

	return 0;
}