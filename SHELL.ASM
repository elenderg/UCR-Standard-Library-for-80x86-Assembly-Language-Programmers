		.xlist
		include 	stdlib.a
		includelib	stdlib.lib
		.list

; Global variables go here:

dseg		segment	para public 'data'
dseg		ends



cseg		segment	para public 'code'
		assume	cs:cseg, ds:dseg

;
; Variables that wind up being used by the standard library routines.
; The MemInit routine uses "PSP" and "zzzzzzseg" labels.  They must be
; present if you intend to use getenv, MemInit, malloc, and free.
;
;
		public	PSP
PSP		dw	?
;
		mmm	"Hello",cr,lf,0
;
;
;--------------------------------------------
; Here is a good place to put other routines:
;
;
;
;
;-----------------------------------------------------------------
; Main is the main program.  Program execution always begins here.
;
Main		proc
		mov	cs:PSP, es		;Save pgm seg prefix
		mov	ax, seg dseg		;Set up the segment registers
		mov	ds, ax
		mov	es, ax
;
		mov	dx, 0
		meminit
		jnc	GoodMemInit

		print
		db	"Error initializing memory manager",cr,lf,0
		jmp	Quit
GoodMemInit:

;***************************************************************************
;
; Put your main program here.
;
;***************************************************************************





Quit:		ExitPgm
Main		endp

cseg            ends



; Allocate a reasonable amount of space for the stack (2k).

sseg		segment	para stack 'stack'
stk		db	256 dup ("stack   ")
sseg		ends


; zzzzzzseg must be the last segment that gets loaded into memory!

zzzzzzseg	segment	para public 'zzzzzz'
LastBytes	db	16 dup (?)
zzzzzzseg	ends
		end	Main
