***************************************************************************
***************************************************************************



The UCR Standard Library for Assembly Language Programmers,
Written By Randall Hyde and others, is

#SHARE-WARE




We do not want any registration fees for this software.

Now for the catch...  It is more blessed to give than to receive.  
If this software saves you time and effort and you enjoy using it, 
our lives will be enriched knowing that others have appreciated our work.  
We would like to share this wonderful feeling with you.  If you like this 
software and use it, we would like you to contribute at least one routine to 
the library.  Perhaps you think this library has some neat-o routines in it.  
Imagine how nice it would become if everyone used their imagination to 
contribute something useful to it.

We hereby release this software to the public domain.  You can use it in any
way you see fit.  However, we would appreciate it if you share this software 
with others as much as it has been shared it with you.  That is not to suggest
that you give away software you have written with this package (We're not 
quite as crazy as Richard Stallman, bless his heart), but if someone else would 
like a copy of this library, please help them out.  Naturally, we would be 
tickeled pink to receive credit in software that uses these routines (which is 
the honorable thing to do) but we understand the way many corporations operate 
and won't be terribly put off if you use it without giving due credit.  

Enjoy!

If you have comments, bug reports, new code to contribute, etc., you can 
reach us through:

		rhyde				(On BIX).
		rhyde@ucrmath.ucr.edu		(On Internet).
		rhyde@ucrengr.ucr.edu

or

		Randall Hyde
		Dept of Computer Science
		122 University Office Bldg
		University of California
		Riverside, Ca. 92521


COMMENTS ABOUT THE CODE:
************************

Please don't expect super optimal code here.  Most of it is fairly mediocre
(from a size/speed point of view).  Hopefully, you'll agree, it's the idea
that counts.  If you do not like something I have done, you have got the
sources -- have at it.  (Of course, it would be appreciated if you would
send any modifications to one of the E-MAIL addresses above.)


****************+******************** NOTE ************************************

Please understand the purpose of this code!  This library is here to make
assembly language programming easy.  The nature of this library encourages
people to write code in a fashion similar to that employed when they write
programs in a high level language like C.  While this familiar style of
programming does make the task easier, it is not the most appropriate
approach to use when flat-out performance is what you're seeking.  "C code
written with MOV instructions" is never as fast as pure assembly language
code employing the proper programming paradigm.  Why mention this?  Well,
some readers may have heard about assembly language's legendary performance
and they're expecting to achieve that using this library.  While programs
written with this library may very well run faster than a comparable program
written in a HLL, you will not get fantastic performance improvement until
you stop thinking in HLLs and starting "thinking" in assembly.  The purpose
of this library is to help you *avoid* thinking in assembly language.  There-
fore, this code will not help you achieve those fantastic performance levels
you've been hearing about; indeed, this library may stand in the way of that
goal.  It's not that these routines are terribly slow, mind you.  They just
encourage an inappropriate programming style if speed is what you're after.

On the other hand, since only 10-20% of the code of any given program
represents the time critical stuff (an argument long employed by HLL
supporters), there is nothing wrong with judicious use of this code within
a program that has to be fast.  As usual, if performance is your primary
goal, you must study the problem and the program you generate very carefully
to isolate the time critical portions.  If you are interested in high-
performance programming at the "micro-algorithm" level, you should take a look
at Michael Abrash's text "Zen of Assembly."  This excellent book will explain
many ways to improve the performance of your code at the sub-algorithm level
(where assembly language really shines).



COMMENTS ABOUT THIS DOCUMENTATION:
**********************************

You will have to forgive us for the inconsistent style appearing throughout
this document.  Keep in mind that this document has been prepared by many
different people.  Keeping the styles consistent is a time consuming and
difficult task.

Whenever a routine's description claims that the flags are not affected,
you should not interpret this to mean that the routine preserves the flags.
Most routines do *not* preserve any of the flags.  Such a statement simply
means that the routine does not *explicitly* return a value in one (or more)
of the flag bits.

Note that proper credit has been given to the author of each of the various
routines appearing in this library *except* for those written by Randall
Hyde.  All routines without an author by-line were probably written by
Randall Hyde (unless we screwed up somewhere and forgot to put a name
in the documentation).  Most of these routines were tested and documented
by various students in Randy Hyde's CS 13 (assembly language) and CS 191X /
CS 185 courses (Commercial Software Development).  There are too many names
to mention here, but these students definitely deserve the credit for locating
numerous bugs in the code, providing many suggestions, and doing other work.

Of course, there have been numerous suggestions and bug notices from helpful
souls on BIX and the Internet, as well.  Thank you all.


=============================================================================

Version History:

Version 00- 	Initial release as "Randy Hyde's Standard Library for 80x86
		Assembly Language programmers"

Version 10-	Initial release as "UCR Standard Library..."  CS 191X
		students did some testing and documentation in this release.

Version 20-	More testing on several routines.  Added floating point
		library and several other routines.

Version 21-	Fixed *MAJOR* bugs in floating point package.  Added
11-1-91		several new routines.  Included new "TEST" files with
		the library.  Also included SHELL.ASM file inadvertently
		left out of Version 2.0.

Version 22-	Made some minor modifications to puth, putl, ltoa, and htoa
11-14-91	as per suggestions made by David Holm and Terje Maithesen

Version 23-	Made a small but *major* modification to the stdlib.a and
11-22-91	stdlib.a6 files to force library calls into the STDGRP group.
		Otherwise the linker substitued bad segment addresses for
		the far calls to the library routines.  A real problem when
		accessing variables in StdData.

Version 24-	Yet more changes to fix the stupid MASM group/segment:offset
12-7-91		bug.  Made various changes to the STDLIB.A file.  Also fixed
		a problem in the FP routines- forgot to declare sl_sefpa
		public.  Finally, created batch file to automatically unpack
		everything from DOS (assuming presence of PKUNZIP somewhere
		in the current path).

Version 25-	Some new macros (DOS, ExitPgm), fixed a problem with the
12-25-91	PUTI routine, added some SmartArray items.  Also added the
		GetEnv routine.

Version 26-	Maintenance release coinciding with the Dr. Dobb's article
2/20/92		in the March 1992 issue.

Version 27-	SmartLists and interrupt driven serial routines added to
6/19/92		the libraries.  Also created smaller include files for
		each of the standard library categories. (note: the serial
		routines actually existed prior to this release, they were
		cleaned up and documented for this release).  Fixed a couple
		of truly disgusting bugs in the floating point package
		(wouldn't properly print values like 8100 and hung whenever
		encountering a zero value in FADD/FSUB).


==============================================================================


ROUTINES WE WOULD LIKE TO HAVE:
*******************************

If you're interested in adding some routines to this
package, GREAT!  Here are some suggestions.

1) Routines which manipulate directories (read/write/etc.)
2) A regular expression interpreter.
3) Length-prefixed strings package.
4) A graphics package.
5) An object-oriented programming class library.
6) Floating point functions (e.g., SIN, COS, etc.)
7) Just about anything else appearing in a HLL "standard" library.
If you've got any ideas, we would  love to discuss them with you.  The best
way to reach us is through the E-MAIL addresses above.


MISSING ROUTINES TO BE SUPPLIED IN THE FUTURE:
**********************************************

Character strings:
trim-		Removes trailing blanks from a string.
blkdel-		Removes leading blanks from a string.
translit-	Transliterates characters in a string based on a translation
		table.


Pattern matching and character sets:
span-		Skips through a sequence of characters in a string which
		belong to a character set.
break-		Skips through a sequence of characters in a string which do not
		belong to a character set.
any-		Skips over a character if it is a member of a set.
notany-		Skips over a character in a string if it is not a member
		of a set.
skip-		Skips "n" characters in the string.
tab-		Matches up to the nth character in a string.
rtab-		Matches up to the nth character from the end of a string.
pos-		Matches if we are currently at the nth position in a string.
rpos-		Matches if we are at the nth position from the end of the
		string.
mark-		Marks a position in a string during pattern matching
grab-		Copies everything from the last mark and creates a new string
		on the stack from this substring.
match-		Initialize pattern matching system.
alternate-	Try an alternative if the current pattern does not match.
arb-		Skip over an arbitrary number of characters in a match.
replace-	Replace a substring from the last mark to the current
		position with some other string.
fail-		Force a match failure.
succeed-	Force a match success.


	Memory Manager Package
Memavail-	Largest block of free memory available on the heap.
Memfree-	Total amount of free space on the heap.
BlockSize-	Returns the size of the memory block which es:di points at.


	Process Manager Package
CoCall-		Call a coroutine.
CoInit-		Initialize a coroutine.
CoRet-		Quit a coroutine.


HOW TO USE THE STANDARD LIBRARY:
********************************

When you are ready to begin programming with the library, you should
copy the shell.asm file, provided in the package, to another file in
which you will be working, i.e. myprog.asm.  The shell.asm file sets
up the machine (segments, etc.) as the UCR Standard Library expects
them.  Results are undefined for other setups.  Therefore, I strongly
suggest, that when you begin using these routines, you follow the
shell.asm format.  Later, when you are familiar with the software,
you may wish to create your own shell.asm file, but it is wise to
initially use the one provided.  The shell.asm file has comments which
tell you where to place your code, variables, etc.

There is an include file stdlib.a which
you should include in every assembly you perform which calls the stdlib
routines.  SHELL.ASM already includes this file.  *YOU MUST PLACE THE
INCLUDE STATEMENT OUTSIDE OF ANY SEGMENTS IN YOUR PROGRAM*.  Preferably
as the first line of your program (just like SHELL.ASM).  If you place
this include directive inside a segment, certain assemblers/linkers
(especially MASM) will not properly assemble and link your programs.
They will assemble and link without error, but the resulting program
will not execute correctly.

The STDLIB.A file contains macros you can use to call each of the routines
in the standard library.  For example, to call PRINTF you would use the
statement
		printf
		db	"format string",0
		db	other,vars

rather than "calling" printf.  Printf is actually a macro, you cannot call
it directly (all of the standard library routines have names like "sl_printf"
and the macro issues a call to the appropriate routine).  These macros have
two main purposes-- first, the differentiate calls to the standard library
routines (i.e., no "call" instruction is the difference); and second, they
contain some extra code to perform "smart linking" with MASM 5.1 & earlier,
TASM, and OPTASM.  MASM 6.0 supports a new directive, extrndef, which
eliminates the need for this extra code, but the extra code works nonetheless.

Starting with version 27, many of the standard library macros were separated
into smaller files.  This speeds up assembly when you don't need *all* of
the routines in the library (the macro file is getting quite large).
STDLIB.A still exists and still loads everything, but you should get in the
habit of specifying the smaller files instead.


All of the standard library routines, and most of their local data values,
are in a segment named "stdlib".  You should not create such a segment unless
you plan on adding new routines to the standard library.


HOW THE STANDARD LIBRARY IS ORGANIZED:
**************************************

In the next several pages are the documentation spec sheets for each of the
standard library routines.  The routines are listed by category.  The listing
of the categories and their order in the documentation is below.

	Standard Input Routines
	Standard Output Routines
	Conversion Routines
	Utility Routines
	String Handling Routines
	Memory Management Routines
	Character Set Routines
	Floating Point Routines
	File I/O
	Miscellaneous Routines
	Smart List Routines
	Serial Port I/O

In addition, at the beginning of each of the category is a brief
discussion of the purpose of its routines.





Standard Input Routines:
Character Input Routines
------------------------


	The character input routines take input from either a standard
device (keyboard, etc.) or a standard library.  After the character input
routines receive the characters they either place the characters on the stack
and/or return.  The character input routines work similar to the "C" character
input routines.



Routine:  Getc
--------------


Category:             Character Input Routine


Registers on Entry:   None


Registers on Return:  AL- Character from input device.
                      AH- 0 if eof, 1 if not eof.


Flags Affected:       Carry- 0 if no error, 1 if error.  If error occurs, AX
                             contains DOS error code.


Example of Usage:  
                      getc
                      mov     KbdChar, al
                      putc


Description:  This routine reads a character from the standard input device.
              This call is synchronous, that is, it does not return until a
              character is available.  The Default input device is DOS
              standard input.

              Getc returns two types of values: extended ASCII (codes 1-255)
              and IBM keyboard scan codes.  If Getc returns a non-zero value,
              you may interpret this value as an ASCII character.  If Getc
              returns zero, you must call Getc again to get the actual
              keypress.

              The second call returns an IBM PC keyboard scan code.

              Since the user may redirect input from the DOS command line,
              there is the possibility of encountering end-of-file (eof)
              when calling getc.  Getc uses the AH register to return eof
              status.  AH contains the number of characters actually read
              from the standard input device.  If it returns one, then
              you've got a valid character.  If it returns zero, you've
              reached end of file.  Note that pressing control-z forces an
              end of file condition when reading data from the keyboard.

              This routine returns the carry flag clear if the operation
              was successful.  It returns the carry flag set if some sort
              of error occurred while reading the character.  Note that eof
              is not an error condition.  Upon reaching the end of file,
              Getc returns with the carry flag clear.  If getc is seen from
              a file the control-z is not seen as an end-of-file marker,
              but just read in as a character of the file.

              Control-c if read from a keyboard device aborts the program.
              However if when reading something other than a keyboard
	      (files, serial ports), control-c from the input source
              returns control-c.  However when pressing control-break
              the program will abort regardless of the input source.

              Regarding CR/LF, if the input is from a device, (eg. keyboard
              serial port) getc returns whatever that device driver returns,
              (generally CR without a LF).  However if the input is from
              a file, getc stripes a single LF if it immediately follows
              the CR.

              When using getc files operate in "cooked" mode.  While
              devices operate in "pseudo-cooked" mode, which means no
              buffering, no CR -> CR/LF, but it handles control-c, and
              control-z.

	      See the sources for more information about GETC's internal
	      operation.

Include:	stdlib.a or stdin.a




Routine:   GetcStdIn
--------------------


Category:             Character Input Routine

Register on entry:    None.

Register on return:   AL- Character from input device.

Flags affected:       AH- 0 if eof, 1 if not eof.
                      Carry- 0 if no error, 1 if error
                      (AX contains DOS error code if error occurs).


Example of Usage:
                      GetcStdIn
                      mov     InputChr, al
                      putc


Description:    This routine reads a character from the DOS standard input
                device.  This call is synchronous, that is, it does not return
                until a character is available.  See the description of Getc
                above for more details.

		The difference between Getc and GetcStdIn is that your
		program can redirect Getc using other calls in this library.
		GetcStdIn calls DOS directly without going through this
		redirection mechanism.


Include:		stdlib.a or stdin.a






Routine:   GetcBIOS
-------------------


Category:             Character Input Routine

Register on entry:    None

Register on return:   AL- Character from the keyboard.

Flags affected:       AH- 1 (always).  Carry- 0 (always).

Example of Usage:   
		      GetcBIOS
                      mov     CharRead, al
                      putc


Description:   This routine reads a character from the keyboard.  This call is
               synchronous, that is it does not return until a character is
               available.

		Note that there is no special character processing.  This
		code does *not* check for EOF, control-C, or anything
		else like that.



Include:		stdlib.a or stdin.a



Routine:  SetInAdrs
-------------------

Category:               Character Input Routine

Registers on Entry:     ES:DI - address of new input routine

Registers on return:    None 

Flags affected:

Examples of Usage:

                        mov     es, seg NewInputRoutine
                        mov     di, offset NewInputRoutine
                        SetInAdrs



                        les     di, RoutinePtr
                        SetInAdrs


Description:    This routine redirects the stdlib standard input so that it 
                calls the routine who's address you pass in es:di.  The
		routine (whose address appears in es:di) should be a "getc"
		routine which reads a character from somewhere and returns
		that character in AL.  It should also return EOF status in
		the AH register and error status in the carry flag (see
		the description of GETC for more details).


Include:                stdlib.a or stdin.a





Routine:   GetInAdrs
--------------------

Category:             Character Input Routine

Register on entry:    None

Register on return:   ES:DI - address of current input routine (called by Getc).

Flags affected:       None


Example of Usage:   
                      GetInAdrs
		      mov     word ptr SaveInAdrs, di
		      mov     word ptr SaveInAdrs+2, es


Description:   You can use this function to get the address of the current
	       input routine, perhaps so you can save it or see if it is
	       currently pointing at some particular piece of code.
	       If you want to temporarily redirect the input and then restore
	       the original input or outline, consider using
	       PushInAdrs/PopInAdrs described later.


Include:		stdlib.a or stdin.a



Routine:   PushInAdrs
---------------------

Category:             Character Input Routine

Register on entry:    ES:DI - Address of new input routine.

Register on return:   Carry=0 if operation successful.
                      Carry=1 if there were already 16 items on the stack.
                         
Example of Usage:   
                      mov     es, seg NewInputRoutine
                      mov     di, offset NewInputRoutine
                      PushInAdrs
                        .
                        .
                        .
                      les     di, RoutinePtr
                      PushInAdrs


Description:   This routine "pushes" the current input address onto an
               internal stack and then copies the value in es:di into the
               current input routine pointer.  The PushInAdrs and PopInAdrs
               routines let you easily save and redirect the standard output
               and then restore the original output routine address later on.
               If you attempt to push more than 16 items on the stack,
               PushInAdrs will ignore your request and return with the
               carry flag set.  If PushInAdrs is successful, it will
               return with the carry flag clear.


Include:	stdlib.a or stdin.a





Routine:   PopInAdrs
--------------------

Category:             Character Input Routine

Register on entry:    None

Register on return:   ES:DI - Points at the previous stdout routine before
                      the pop.

Example of Usage:   
                      mov     es, seg NewInRoutine
                      mov     di, offset NewInputRoutine
                      PushInAdrs
                        .
                        .
                        .
                      PopInAdrs


Description:   PopInAdrs undoes the effects of PushInAdrs.  It pops an item
               off the internal stack and stores it into the input routine
               pointer.  The previous value in the output pointer is returned
               in es:di.

Include:	stdlib.a or stdin.a





Routine:  Gets, Getsm
---------------------

Category:             Character Input Routine

Register on entry:    ES:DI- Pointer to input buffer (gets only).

Register on return:   ES:DI - address of input of text.
                      carry-  0 if no error, 1 if error.
                      If error, AX contains: 0- End of
                      file encountered in middle of
                      string.  1- Memory allocation error (getsm only).
                      Other- DOS error code.


Flags affected:       None

Example of usage:    
                      getsm           ;Read a string from the
                                      ;keyboard
                      puts            ;Print it
                      putcr           ;Print a new line
                      free            ;Deallocate storage for
                                      ;string.

		      mov	di, seg buffer
		      mov	es, di
		      lea	di, buffer
		      gets
		      puts
		      putcr


Description:   	Reads a line of text from the stdlib standard input device.
		You must pass a pointer to the recipient buffer in es:di to
		the GETS routine.  GETSM automatically allocates storage for
		the string on the heap (up to 256 bytes) and returns a pointer
		to this block in es:di.

		Gets(m) returns all characters typed by the user except for the
		carriage return (ENTER) key code.  These routines return a
		zero-terminated string (with es:di pointing at the string).
		Exactly how Gets(m) treats the incoming data depends upon
		the source device, however, you can usually count on Gets(m)
		properly handling backspace (erases previous character),
		escape (erase entire line), and ENTER (accept current line).

		Other keys may affect Gets(m) as well.  For example, Gets(m),
		by default, calls Getc which, in turn, usually calls DOS'
		standard input routine.  If you type control-C or break while
		read from DOS' standard input it may abort the program.

		If an error occurs during input (e.g., EOF encountered in
		the middle of a line) Gets(m) returns the error code in
		AX.  If no error occurs, Gets(m) preserves AX.

Include:              	stdlib.a or stdin.a





Routine:  Scanf
---------------

Category:             Character Input Routine

Register on entry:    None

Register on return:   None

Flags affected:       None

Example of usage:   
                      scanf
                      db      "%i  %h  %^s",0
                      dd      i, x, sptr

Description:   * Formatted input from stdlib standard input.
               * Similar to C's scanf routine.
               * Converts ASCII to integer, unsigned, character, string, hex,
                 and long values of the above.
               Scanf provides formatted input in a fashion analogous to
               printf's output facilities.  Actually, it turns out that scanf
               is considerably less useful than printf because it doesn't
               provide reasonable error checking facilities (neither does C's
               version of this routine).  But for quick and dirty programs 
               whose input can be controlled in a rigid fashion (or if you're
               willing to live by "garbage in, garbage out")  scanf provides 
               a convenient way to get input from the user.  Like printf, the
               scanf routine expects you to follow the call with a format 
               string and then a list of (far pointer) memory addresses.  The
               items in the scanf format string take the following form: %^f,
               where f represents d, i, x, h, u, c, x, ld, li, lx, or lu.  
               Like printf, the "^" symbol tells scanf that the address
               following the format string is the address of a (far) pointer
               to the data rather than the address of the data location itself.
               By default, scanf automatically skips any leading whitespace 
               before attempting to read a numeric value.  You can instruct
               scanf to skip other characters by placing that character in the
               format string.  For example, the following call instructs scanf
               to read three integers separated by commas (and/or whitespace):

                       	      scanf  
			      db                "%i,%i,%i",0
                              dd                 i1,i2,i3

               Whenever scanf encounters a non-blank character in the format
               string, it will skip that character (including multiple
               occurrences of that character) if it appears next in the input
               stream.  Scanf always calls gets to read a new line of text 
               from stdlib's standard input.  If scanf exhausts the format 
               list, it ignores any remaining characters on the line.  If
               scanf exhausts the input line before processing all of the
               format items, it leaves the remaining variables unchanged.
               Scanf always deallocates the storage allocated by gets.


Include:                stdlib.a or stdin.a



 
Character Output Routines
-------------------------


The stdlib character output routines allow you to print to the 
standard output device.  Although the processing of non-ASCII 
characters is undefined, most output devices handle these characters
properly.  In particular, they can handle return, line feed, back space, 
and tab.  

Most of the output routines in the standard library output data 
through the Putc routine.  They generally use the AX register upon 
entry and print the character(s) to the standard output device by
calling DOS by default. The  output is redirectable to the 
user-written routine.  However, the PutcBIOS routine prints doesn't 
use DOS.  Instead it uses BIOS routines to print the character in AL 
using the INT command for teletype-like output. 

The print routines are similar to those in C, however, they differ
in their implementation. The print routine returns to the address
immediately following the terminating byte, therefore, it is important
to remember to terminate your string with zero or you will print an 
unexpected sequence of characters.



Routine:  Putc
--------------

Category:             Character Output Routine

Registers on Entry:   AL- character to output

Registers on Return:  None

Flags affected:       None

Example of Usage:
                       mov     al, 'C'
                       putc                    ;Prints "C" to std output.


Description:  Putc is the primitive character output routine.  Most other
              output routines in the standard library output data through
              this procedure.  It prints the ASCII character in AL register.  
              The processing of control codes is undefined although most output
              routines this routine links to should be able to handle return, 
              line feed, back space, and tab.  By default, this routine calls
              DOS to print the character to the standard output device.  The
              output is redirectable to to user-written routine.


Include:                stdlib.a or stdout.a



Routine:  PutCR
---------------

Category:             Character Output Routine 

Register on entry:    None

Register on return:   None

Flags affected:       None

Example of Usage:     PutCR


Description:  Using PutCR is an easy way of printing a newline to the stdlib 
              standard output. It prints a newline (carriage return/line feed) 
              to the current standard output device.


Include:                stdlib.a or stdout.a


Routine: PutcStdOut
-------------------

Category:              Character Output Routine

Registers on Entry:    AL- character to output

Registers on Return:   None

Flags Affected:        None

Example of Usage:
                       mov AL, 'C'
                       PutcStdOut        ; Writes "C" to standard output


Description:  PutcStdOut calls DOS to print the character in AL to the standard
              output device.  Although processing of non-ASCII characters and
              control characters is undefined, most output devices handle these
              characters properly.  In particular, most output devices properly
              handle return, line feed, back space, and tab.  The output is
              redirectable via DOS I/O redirection.


Include:                stdlib.a or stdout.a



Routine: PutcBIOS
-----------------

Category:              Character Output Routine

Registers on Entry:    AL- character to print

Registers on Return:   None

Flags Affected:        None

Example of Usage:
                       mov AL, "C"
                       PutcBIOS


Description:  PutcBIOS prints the character in AL using the BIOS routines,
              using INT 10H/AH=14 for teletype-like output.  Output through
              this routine cannot be redirected; such output is always sent
              to the video display on the PC (unless, of course, someone has
              patched INT 10h).  Handles return, line feed, back space, and
              tab.  Prints other control characters using the IBM Character
	      set.


Include:     	stdlib.a or stdout.a



Routine: GetOutAdrs
-------------------

Category:             Character Output Routine

Registers on Entry:   None

Registers on Return:  ES:DI- address of current output routine (called by Putc)

Flags Affected:       None

Example of Usage: 
                      GetOutAdrs
                      mov word ptr SaveOutAdrs, DI
                      mov word ptr SaveOutAdrs+2, ES

Description:  GetOutAdrs gets the address of the current output routine, perhaps
              so you can save it or see if it is currently pointing at some
              particular piece of code.  If you want to temporarily redirect
              the output and then restore the original output routine, consider
              using PushOutAdrs/PopOutAdrs described later.

Include:	stdlib.a or stdout.a




Routine:  SetOutAdrs
--------------------

Category:               Character Output Routine

Registers on Entry:     ES:DI - address of new output routine

Registers on return:    None 

Flags affected:         None

Example of Usage:

                        mov     es, seg NewOutputRoutine
                        mov     di, offset NewOutputRoutine
                        SetOutAdrs
                        les     di, RoutinePtr
                        SetOutAdrs

Description:  This routine redirects the stdlib standard output so that it
              calls the routine who's address you pass in es:di.  This routine
              expects the character to be in AL and must preserve all registers.
              It handles the printable ASCII characters and the four control
              characters return, line feed, back space, and tab.  (The routine
              may be modified in the case that you wish to handle these codes
              in a different fashion.)


Include:        stdlib.a or stdout.a


Routine:  PushOutAdrs
---------------------

Category:              Character Output Routine 

Registers on Entry:    ES:DI- Address of new output routine

Registers on Return:   None

Flags Affected:        Carry = 0 if operation is successful
                       Carry = 1 if there were already 16 items on the stack

Example of Usage:  
                       mov  ES, seg NewOutputRoutine
                       mov  DI, offset NewOutputRoutine
                       PushOutAdrs
                          .
                          .
                          . 
                       les  DI, RoutinePtr
                       PushOutAdrs


Description:  This routine "pushes" the current output address onto an internal
              stack and then uses the value in es:di as the current output
              routine address.  The PushOutAdrs and PopOutAdrs routines let you
              easily save and redirect the standard output and then restore the
              original output routine address later on.  If you attempt to push
              more than 16 items on the stack, PushOutAdrs will ignore your
              request and return with the carry flag set.  If PushOutAdrs is
              successful, it will return with the carry flag clear.


Include:      	stdlib.a or stdout.a



Routine:  PopOutAdrs
--------------------

Category:             Character Output Routine 

Registers on Entry:   None

Registers on Return:  ES:DI- Points at the previous stdout routine before
                      the pop

Flags Affected:       None

Example of Usage:  
                      mov ES, seg NewOutputRoutine
                      mov DI, offset NewOutputRoutine
                      PushOutAdrs
                         .
                         .
                         .
                      PopOutAdrs


Description:  PopOutAdrs undoes the effects of PushOutAdrs.  It pops an item off
              the internal stack and stores it into the output routine pointer.
              The previous value in the output pointer is returned in es:di.
              Defaults to PutcStdOut if you attempt to pop too many items off
              the stack.

Include:	stdlib.a or stdout.a




Routine:  Puts
--------------

Category:            Character Output Routine 

Register on entry:   ES:DI register - contains the address of the string

Register on return:  None

Flags affected:      None

Example of Usage:
                     les     di, StrToPrt
                     puts
                     putcr


Description:   Puts prints a zero-terminated string whose address appears
               in es:di.  Each character appearing in the string is printed
               verbatim.  There are no special escape characters.  Unlike
               the "C" routine by the same name, puts does not print a
               newline after printing the string.  Use putcr if you want
               to print the newline after printing a string with puts.


Include:        stdlib.a or stdout.a



Routine:  Puth
--------------

Category:             Character Output Routine

Register on entry:    AL 

Register on return:   AL

Flags affected:       None

Example of Usage:
                      mov     al, 1fh
                      puth


Description:    The Puth routine Prints the value in the AL register as two
                hexadecimal digits.  If the value in AL is between 0 and 0Fh, 
                puth will print a leading zero.  This routine calls the stdlib
                standard output routine (putc) to print all characters.


Include:        stdlib.a or stdout.a



Routine:  Putw
--------------

Category:             Character Output Routine

Registers on Entry:   AX- Value to print

Registers on Return:  None

Flags Affected:       None

Example of Usage: 
                      mov AX, 0f1fh
                      putw


Description:  The Putw routine prints the value in the AX register as four
              hexadecimal digits (including leading zeros if necessary).  
              This routine calls the stdlib standard output routine (putc) 
              to print all characters.

Include:        stdlib.a or stdout.a



Routine:  Puti
--------------

Category:             Character Output Routine

Registers on Entry:   AX- Value to print

Registers on Return:  None

Flags Affected:       None

Example of Usage: 
                      mov AX, -1234
                      puti


Description:  Puti prints the value in the AX register as a decimal integer.
              This routine uses the exact number of screen positions required
              to print the number (including a position for the minus sign, if
              the number is negative).  This routine calls the stdlib standard
              output routine (putc) to print all characters.


Include:        stdlib.a or stdout.a



Routine:  Putu
--------------

Category:             Character Output Routine

Register on entry:    AX- Unsigned value to print.

Register on return:   None

Flags affected:       None

Example of Usage:
                      mov     ax, 1234
                      putu


Description:  Putu prints the value in the AX register as an unsigned integer.
              This routine uses the exact number of screen positions required
              to print the number.  This routine calls the stdlib standard
              output routine (putc) to print all characters.


Include:        stdlib.a or stdout.a




Routine:  Putl
--------------

Category:            Character Output Routine

Register on entry:   DX:AX- Value to print

Register on return:  None

Flags affected:      None

Example of Usage:
                     mov     dx, 0ffffh
                     mov     ax, -1234
                     putl


Description:   Putl prints the value in the DX:AX registers as an integer.
               This routine uses the exact number of screen positions
               required to print the number (including a position for the
               minus sign, if the number is negative).  This routine calls
               the stdlib standard output routine (putc) to print all
               characters.


Include:        stdlib.a or stdout.a



Routine:  Putul
---------------

Category:             Character Output Routine

Register on entry:    DX:AX register

Register on return:   None

Flags affected:       None

Example of Usage:
                      mov     dx, 12h
                      mov     ax, 1234
                      putul


Description:    Putul prints the value in the DX:AX registers as an unsigned
                integer.  This routine uses the exact number of screen
                positions required to print the number.  This routine calls 
		the stdlib standard output routine (putc) to print all
		characters.


Include:        stdlib.a or stdout.a


Routine:  PutISize
------------------

Category:              Character Output Routine

Registers on Entry:    AX - Integer value to print
                       CX - Minimum number of print positions to use

Registers on return:   None 

Flags affected:

Example of Usage:
                       mov     cx, 5
                       mov     ax, I
                       PutISize
                           .
                           . 
                           .
                       mov     cx, 12
                       mov     ax, J
                       PutISize


Description:    PutISize prints the signed integer value in AX to the
                stdlib standard output device using a minimum of n print
                positions.  CX contains n, the minimum field width for the
                output value.  The number (including any necessary minus sign)
                is printed right justified in the output field.
                If the number in AX requires more print positions than
                specified by CX, PutISize uses however many print positions
                are necessary to actually print the number.  If you specify
                zero in CX, PutISize uses the minimum number of print positions
                required.  Of course, PutI will also use the minimum number
                of print positions without disturbing the value in the CX
                register.

                Note that, under no circumstances, will the number in AX
                ever require more than 6 print positions (-32,767 requires
                the most print positions).


Include:        stdlib.a or stdout.a



Routine:  PutUSize
------------------

Category:              Character Output Routine

Registers on entry:    AX- Value to print
		       CX- Minimum field width

Registers on return:   None

Flags affected:        None

Example of usage: 
                       mov     cx, 8
                       mov     ax, U
                       PutUSize


Description:  PutUSize prints the value in AX as an unsigned decimal integer.
              The minimum field width specified by the value in CX.
              Like PutISize above except this one prints unsigned values.  
              Note that the maximum number of print positions required by any 
              number (e.g., 65,535) is five.


Include:        stdlib.a or stdout.a



Routine:  PutLSize
------------------

Category:            Character Output Routine

Register on entry:   DX:AX-32 bit value to print
		     CX- Minimum field width

Register on return:  None

Flags affected:      None

Example of Usage:
                     mov     cx, 16
                     mov     dx, word ptr L+2
                     mov     ax, word ptr L
                     PutLSize


Description:   PutLSize is similar to PutISize, except this prints the long 
               integer value in DX:AX.  Note that there may be as many as 
               11 print positions (e.g., -1,000,000,000).

Include:        stdlib.a or stdout.a




Routine:  PutULSize
-------------------


Category:            Character Output Routine


Register on entry:   AX : DX and CX


Register on return:  None


Flags affected:      None


Example of usage:    mov     cx, 8
                     mov     dx, word ptr UL+2
                     mov     ax, word ptr UL
                     PutULSize


Description:  Prints the value in DX:AX as a long unsigned decimal integer.
              Prints the number in a minimum field width specified by the
              value in CX.  Just like PutLSize above except this one prints
              unsigned numbers rather than signed long integers.  The largest
              field width for such a value is 10 print positions.


Include:        stdlib.a or stdout.a


Routine:   Print
----------------

Category:             Character Output Routine

Register on entry:    CS:RET - Return address points at the string to print.

Register on return:   None

Flags affected:       None

Examples of Usage:    print
                      db      "Print this string to the display device"
                      db      13,10
                      db      "This appears on a new line"
                      db      13,10
                      db      0


Description:   Print lets you print string literals in a convenient
               fashion.  The string to print immediately follows the call
               to the print routine.  The string must contain a
               zero terminating byte and may not contain any intervening
               zero bytes.  Since the print routine returns to the address
               immediately following the zero terminating byte, forgetting
               this byte or attempting to print a zero byte in the middle
               of a literal string will cause print to return to an
               unexpected instruction.  This usually hangs up the machine.
               Be very careful when using this routine!


Include:        stdlib.a or stdout.a


Routine:        Printf
----------------------

Category:             Character Output Routine

Register on entry:    CS:RET - Return address points at the format string

Register on return:   None

Flags affected:       None

Example of Usage:
                      printf
                      db      "Indirect access to i: %^d",13,10,0
                      dd      IPtr;
                      printf
                      db      "A string allocated on the heap: %-\.32^s"
                      db      13,10,0
                      dd      SPtr



Descriptions:   Printf, like its "C" namesake, provides formatted output
                capabilities for the stdlib package.  A typical call to printf
                always takes the following form:

                        printf
                        db              "format string",0
                        dd              operand1, operand2, ..., operandn

                The format string is comparable to the one provided in the
                "C" programming language.  For most characters, printf simply
                prints the characters in the format string up to the
                terminating zero byte.  The two exceptions are characters
                prefixed by a backslash ("\") and characters prefixed by a
                percent sign ("%").  Like C's printf, stdlib's printf uses
                the backslash as an escape character and the percent sign as
                a lead-in to a format string.

                Printf uses the escape character ("\") to print special
                characters in a fashion similar to, but not identical to C's
                printf.  Stdlib's printf routine supports the following
                special characters:

                *  r     Print a carriage return (but no line feed)
                *  n     Print a new line character (carriage return/line feed).
                *  b     Print a backspace character.
                *  t     Print a tab character.
                *  l     Print a line feed character (but no carriage return).
                *  f     Print a form feed character.
                *  \     Print the backslash character.
                *  %     Print the percent sign character.
                *  0xhh  Print ASCII code hh, represented by two hex digits.

                C users should note a couple of differences between stdlib's
                escape sequences and C's.  First, use "\%" to print a percent
                sign within a format string, not "%%".  C doesn't allow the
                use of "\%" because the C compiler processes "\%" at compile
                time (leaving a single "%" in the object code) whereas printf
                processes the format string at run-time.  It would see a single
                "%" and treat it as a format lead-in character.  Stdlib's
                printf, on the other hand, processes both the "\" and "%" and
                run-time, therefore it can distinguish "\%".

                Strings of the form "\0xhh" must contain exactly two hex
                digits.  The current printf routine isn't robust enough to
                handle sequences of the form "\0xh" which contain only a
                single hex digit.  Keep this in mind if you find printf
                chopping off characters after you print a value.

                There is absolutely no reason to use any escape character
                sequences except "\0x00".  Printf grabs all characters
                following the call to printf up to the terminating zero byte
                (which is why you'd need to use "\0x00" if you want to print
                the null character, printf will not print such values).
                Stdlib's printf routine doesn't care how those characters got
                there.  In particular, you are not limited to using a single
                string after the printf call.  The following is perfectly
		legal:


                printf
                db      "This is a string",13,10
                db      "This is on a new line",13,10
                db      "Print a backspace at the end of this line:"
                db      8,13,10,0


                Your code will run a tiny amount faster if you avoid the use
                of the escape character sequences.  More importantly, the
                escape character sequences take at least two bytes.  You can
                encode most of them as a single byte by simply embedding the
                ASCII code for that byte directly into the code stream.
                Don't forget, you cannot embed a zero byte into the code
                stream.  A zero byte terminates the format string.  Instead,
                use the "\0x00" escape sequence.

                Format sequences always between with "%".  For each format
                sequence you must provide a far pointer to the associated
                data immediately following the format string, e.g.,

	                printf
        	        db      "%i %i",0
                	dd      i,j

                Format sequences take the general form "%s\cn^f" where:

                *       "%" is always the "%" character.  Use "\%" if you
                        actually want to print a percent sign.
                *       s is either nothing or a minus sign ("-").
                *       "\c" is also optional, it may or may not appear in
                        the format item.  "c" represents any printable
                        character.
                *       "n" represents a string of 1 or more decimal digits.
                *       "^" is just the caret (up-arrow) character.
                *       "f" represents one of the format characters: i, d, x,
                        h, u, c, s, ld, li, lx, or lu.

                The "s", "\c", "n", and "^" items are optional, the "%" and
                "f" items must be present.  Furthermore, the order of these
                items in the format item is very important.  The "\c" entry,
                for example, cannot precede the "s" entry.  Likewise, the "^"
                character, if present, must follow everything except the "f"
                character(s).

                The format characters i, d, x, h, u, c, s, ld, li, lx, and
                lu control the output format for the data.  The i and d
                format characters perform identical functions, they tell
                printf to print the following value as a 16-bit signed
                decimal integer.  The x and h format characters instruct
                printf to print the specified value as a 16-bit or 8-bit
                hexadecimal value (respectively).  If you specify u, printf
                prints the value as a 16-bit unsigned decimal integer.
                Using c tells printf to print the value as a single character.
                S tells printf that you're supplying the address of a
                zero-terminated character string, printf prints that string.
                The ld, li, lx, and lu entries are long (32-bit) versions of
                d/i, x, and u.  The corresponding address points at a 32-bit
                value which printf will format and print to the standard output.
                The following example demonstrates these format items:

                printf
                db      "I= %i, U= %u, HexC= %h, HexI= %x, C= %c, "
                db      "S= %s",13,10
                db      "L= %ld",13,10,0
                dd      i,u,c,i,c,s,l

                The number of far addresses (specified by operands to the "dd"
                pseudo-opcode) must match the number of "%" format items in
                the format string.  Printf counts the number of "%" format
                items in the format string and skips over this many far
                addresses following the format string.  If the number of
                items do not match, the return address for printf will be
                incorrect and the program will probably hang or otherwise
                malfunction.  Likewise (as for the print routine), the format
                string must end with a zero byte.  The addresses of the items
                following the format string must point directly at the memory
                locations where the specified data lies.

                When used in the format above, printf always prints the
                values using the minimum number of print positions for each
                operand.  If you want to specify a minimum field width, you
                can do so using the "n" format option.  A format item of the
                format "%10d" prints a decimal integer using at least ten
                print positions.  Likewise, "%16s" prints a string using at
                least 16 print positions.  If the value to print requires
                more than the specified number of print positions, printf
                will use however many are necessary.  If the value to print
                requires fewer, printf will always print the specified number,
                padding the value with blanks.  Printf will print the value
                right justified in the print field (regardless of the data's
                type).  If you want to print the value left justified in the
                output file, use the "-" format character as a prefix to the
                field width, e.g.,

                printf
                db      "%-17s",0
                dd      string

                In this example, printf prints the string using a 17 character
                long field with the string left justified in the output field.
                By default, printf blank fills the output field if the value
                to print requires fewer print positions than specified by the
                format item.  The "\c" format item allows you to change the
                padding character.  For example, to print a value, right
                justified, using "*" as the padding character you would use
                the format item "%\*10d".  To print it left justified you
                would use the format item "%-\*10d".  Note that the "-" must
                precede the "\*".  This is a limitation of the current
                version of the software.  The operands must appear in this
                order.  Normally, the address(es) following the printf
                format string must be far pointers to the actual data to print.
                On occasion, especially when allocating storage on the heap
                (using malloc), you may not know (at assembly time) the
                address of the object you want to print.  You may have only
                a pointer to the data you want to print.  The "^" format
                option tells printf that the far pointer following the format
                string is the address of a pointer to the data rather than
                the address of the data itself.  This option lets you access
                the data indirectly.

                Note: unlike C, stdlib's printf routine does not support
                floating point output.  Putting floating point into printf
		would increase the size of this routine a tremendous amount.
		Since most people don't need the floating point output
		facilities, it doesn't appear here.  Check out PRINTFF.

Include:        stdlib.a or stdout.a



Routine:  PRINTFF
-----------------


Category:             Character Output Routine

Registers on Entry:   CS:RET- Points at format string and other parameters.

Registers on Return:  If your program prints floating point values, this
		      routine modifies the floating point accumulator and
		      floating point operand "pseudo-registers" in the
		      floating point package.

Flags Affected:       None

Examples of Usage:
			printff
			db	"I = %d, R = %7.2f  F = 12.5e  G = 9.2gf\n",0
			dd	i, r, f, g

Description:  
		This code works just like printf except it also allows the
		output of floating point values.  The output formats are 
		the following:

		Single Precision:

		 mm.nnF-	Prints a field width of mm chars with nn digits
				appearing after the decimal point.

		 nnE-		Prints a floating point value using scientific
				notation in a field width of nn chars.

		Double Precision:

		 mm.nnGF-	As above, for double precision values.
		 nnGE-		As above, for double precision values.

		Extended Precision-

		 mm.nnLF-	As above, for extended precision values.
		 nnLE-		As above, for extended precision values.


		Since PRINTFF supports everything PRINTF does, you should not
		use both routines in the same program (just use PRINTF).  The
		PRINTF & PRINTFF macros check for this and will print a warning
		message if you've included both routines.  Using both will not
		cause your program to fail, but it will make your program
		unnecessarily larger.  You should not use PRINTFF unless you
		really need to print floating point values.  When you use
		PRINTFF, it forces the linker to load in the entire floating
		point package, making your program considerably larger.

Include:              	stdlib.a or fp.a



Conversion Routines
-------------------


The stdlib conversion routines follow a uniform format of storing the data
to be converted and returned.  Most routines accept input and return data
of either an ASCII string of characters, stored in the ES:DI register, or
integers, stored in the DX:AX register.  If a value is just a 16 or 8-bit
value then it will be stored in AX or AL.

Since there is a possibility of an error in the input values to be converted,
such as it does not contain a proper value to convert, we use the
carry flag to show error status.  If the error flag is set then an error has
occured and things are okay if the carry flag is clear.





Routine:  ATOL (2)
------------------


Category:             Conversion Routine

Registers on Entry:   ES:DI- Points at string to convert

Registers on Return:  DX:AX- Long integer converted from string
		      ES:DI- Points at first non-digit (ATOL2 only)

Flags Affected:       Carry flag- Error status

Examples of Usage:
		      gets         ;Get a string from user
		      ATOL         ;Convert to a value in DX:AX


Description:  ATOL converts the string of digits that ES:DI points at to a
	      long (signed) integer value and returns this value in DX:AX.
	      Note that the routine stops on the first non-digit.
	      If the string does not begin with a digit, this routine returns
	      zero.  The only exception to the "string of digits" only rule is
	      that the number can have a preceding minus sign to denote a
	      negative number.  Note that this routine does not allow leading
	      spaces.  ATOL2 works in a similar fashion except it doesn't
	      preserve the DI register.  That is, ATOL2 leaves DI pointing at
	      the first character beyond the string of digits.  ATOL/ATOL2 both
	      return the carry flag clear if it  translated the string of
	      digits without error.  It returns the carry flag set if overflow
	      occurred.


Include:              	stdlib.a or conv.a



Routine:  AtoUL (2)
-------------------

Category:            Conversion Routine

Register on entry:   ES:DI- address of the string to be converted

Register on return:  DX:AX- 32-bit unsigned integer
		     ES:DI- Points at first character beyond digits (ATOUL2
			    only)

Flags affected:      Carry flag- Set if error, clear if okay.

Examples of Usage:
		     les InputString
		     AtoUL


Description:  AtoUL converts the string pointed by ES:DI to a 32-bit unsigned
	      integer.  It places the 32-bit unsigned integer into the memory
	      address pointed by DX:AX. If there is an error in conversion,
	      the carry flag will set to one. If there is not an error, the
	      carry flag will be set to zero.

	      ATOUL2 does not preserve DI.  It returns with DI pointing at
	      the first non-digit character in the string.

Include:        stdlib.a or conv.a



Routine:    ATOU (2)
--------------------

Category:            Conversion Routine

Register on entry:   ES:DI points at string to convert

Register on return:  AX-    unsigned 16-bit integer
		     ES:DI- points at first non-digit (ATOU2 only)

Flags affected:      carry flag - error status

Example of Usage:

Description:    ATOU converts an ASCII string of digits, pointed to by ES:DI,
		to unsigned integer format. It places the unsigned 16-bit
		integer, converted from the string, into the AX register.
		ATOI works the same, except it handle unsigned 16-bit integers
		in the range 0..65535.

		ATOU2 leaves DI pointing at the first non-digit in the string.

Include:        stdlib.a or conv.a



Routine: ATOH (2)
-----------------

Category:             Conversion Routine

Registers on Entry:   ES:DI- Points to string to convert

Registers on Return:  AX- Unsigned 16-bit integer converted from hex string
		      DI (ATOH2)- First character beyond string of hex digits

Flags Affected:       Carry = Error status

Example of Usage:
		      les  DI, Str2Convrt
		      atoh                  ;Convert to value in AX.
		      putw                  ;Print word in AX.


Description:  ATOH converts a string of hexadecimal digits, pointed to by
	      ES:DI, into unsigned 16-bit numeric form. It returns the value in
	      the AX register.  If there is an error in conversion, the carry
	      flag will set to one.  If there is not an error, the carry flag
	      will be clear.  ATOH2 works the same except it leaves DI
	      pointing at the first character beyond the string of hex digits.

Include:        stdlib.a or conv.a


Routine: ATOLH (2)
------------------

Category:             Conversion Routine

Registers on Entry:   ES:DI- Points to string to convert

Registers on Return:  DX:AX- Unsigned 32-bit integer converted from hex string
		      DI (ATOLH2)- First character beyond string of hex digits

Flags Affected:       Carry = Error status

Example of Usage:
		      les  DI, Str2Convrt
		      atolh                 ;Convert to value in DX:AX

Description:  ATOLH converts a string of hexadecimal digits, pointed to by
	      ES:DI, into unsigned 32-bit numeric form. It returns the value in
	      the DX:AX register.  If there is an error in conversion, the carry
	      flag will set to one.  If there is not an error, the carry flag
	      will be clear.  ATOLH2 works the same except it leaves the DI
	      register pointing at the first non-hex digit.


Include:        stdlib.a or conv.a



Routine:   ATOI (2)
-------------------

Category:             Conversion Routine

Register on entry:    ES:DI- Points at string to convert.

Register on return:   AX- Integer converted from string.
		      DI (ATOI2)- First character beyond string of digits.

Flags affected:       Error status

Examples of Usage:
		      les  DI, Str2Convrt
		      atoi                 ;Convert to value in AX


Description:   Works just like ATOL except it translates the string to a
	       signed 16-bit integer rather than a 32-bit long integer.


Include:              stdlib.a or conv.a


Routine ITOA (2,M)
------------------

Category:             Conversion Routine

Registers on Entry:   AX- Signed 16-bit value to convert to a string
		      ES:DI- Pointer to buffer to hold result (ITOA/ITOA2
			     only).

Registers on Return:  ES:DI- Pointer to string containing converted
		      characters (ITOA/ITOAM only).
		      ES:DI- Pointer to zero-terminating byte of converted
			     string (ITOA2 only).

Flags Affected:       Carry flag is set on memory allocation error (ITOAM only)

Examples of Usage:
		      mov     ax, -1234
		      ITOAM                   ;Convert to string.
		      puts                    ;Print it.
		      free                    ;Deallocate string.

		      mov     di, seg buffer
		      mov     es, di
		      lea     di, buffer
		      mov     ax, -1234
		      ITOA		      ;Leaves string in BUFFER.

		      mov     di, seg buffer
		      mov     es, di
		      lea     di, buffer
		      mov     ax, -1234
		      ITOA2		      ;Leaves string in BUFFER and
					      ;ES:DI pointing at end of string.


Description:	These routines convert an integer value to a string of
		characters which represent that integer.  AX contains the
		signed integer you wish to convert.

		ITOAM automatically allocates storage on the heap for the
		resulting string, you do not have to pre-allocate this
		storage.  ITOAM returns a pointer to the (zero-terminated)
		string in the ES:DI registers.  It ignores the values in
		ES:DI on input.

		ITOA requires that the caller allocate the storage for the
		string (maximum you will need is seven bytes) and pass a
		pointer to this buffer in ES:DI.  ITOA returns with ES:DI
		pointing at the beginning of the converted string.

		ITOA2 also requires that you pass in the address of a buffer
		in the ES:DI register pair.  However, it returns with ES:DI
		pointing at the zero-terminating byte of the string.  This
		lets you easily build up longer strings via multiple calls
		to routines like ITOA2.

Include:        stdlib.a or conv.a



Routine:   UTOA (2,M)
---------------------

Category:            Conversion Routine

Registers on entry:   AX - unsigned 16-bit integer to convert to a string
		      ES:DI- Pointer to buffer to hold result (UTOA/UTOA2
			     only).

Registers on Return:  ES:DI- Pointer to string containing converted
		      characters (UTOA/UTOAM only).
		      ES:DI- Pointer to zero-terminating byte of converted
			     string (UTOA2 only).

Flags affected:       Carry set denotes malloc error (UTOAM only)

Example of Usage:
		      mov     ax, 65000
		      utoa
		      puts
		      free

		      mov     di, seg buffer
		      mov     es, di
		      lea     di, buffer
		      mov     ax, -1234
		      ITOA		      ;Leaves string in BUFFER.

		      mov     di, seg buffer
		      mov     es, di
		      lea     di, buffer
		      mov     ax, -1234
		      ITOA2		      ;Leaves string in BUFFER and
					      ;ES:DI pointing at end of string.


Description:    UTOAx converts a 16-bit unsigned integer value in AX to a
		string of characters which represents that value.  UTOA,
		UTOA2, and UTOAM behave in a manner analogous to ITOAx.  See
		the description of those routines for more details.


Include:       stdlib.a or conv.a



Routine:   HTOA (2,M)
---------------------

Category:            Conversion Routine

Registers on entry:   AL - 8-bit integer to convert to a string
		      ES:DI- Pointer to buffer to hold result (HTOA/HTOA2
			     only).

Registers on Return:  ES:DI- Pointer to string containing converted
		      characters (HTOA/HTOAM only).
		      ES:DI- Pointer to zero-terminating byte of converted
			     string (HTOA2 only).

Flags affected:      Carry set denotes memory allocation error (HTOAM only)


Description:    The HTOAx routines convert an 8-bit value in AL to the two-
		character hexadecimal representation of that byte.  Other
		that that, they behave just like ITOAx/UTOAx.  Note that
		the resulting buffer must have at least three bytes for
		HTOA/HTOA2.


Include:        stdlib.a or conv.a


Routine:  WTOA (2,M)
--------------------

Category:             Conversion Routine

Registers on Entry:   AX- 16-bit value to convert to a string
		      ES:DI- Pointer to buffer to hold result (WTOA/WTOA2
			     only).

Registers on Return:  ES:DI- Pointer to string containing converted
		      characters (WTOA/WTOAM only).
		      ES:DI- Pointer to zero-terminating byte of converted
			     string (WTOA2 only).

Flags Affected:       Carry set denotes memory allocation error (WTOAM only)

Example of Usage:
		      Like WTOA above


Description:  WTOAx converts the 16-bit value in AX to a string of four
	      hexadecimal digits. It behaves exactly like HTOAx except
	      it outputs four characters (and requires a five byte buffer).


Include:        stdlib.a or conv.a



Routine:  LTOA (2,M)
--------------------

Category:             Conversion Routine

Registers on entry:   DX:AX (contains a signed 32 bit integer)
		      ES:DI- Pointer to buffer to hold result (LTOA/LTOA2
			     only).

Registers on Return:  ES:DI- Pointer to string containing converted
		      characters (LTOA/LTOAM only).
		      ES:DI- Pointer to zero-terminating byte of converted
			     string (LTOA2 only).

Flags affected:       Carry set if memory allocation error (LTOAM only)


Example of Usage: 
			mov	di, seg buffer	;Get address of storage
			mov	es, di		; buffer.
			lea	di, buffer
			mov	ax, word ptr value
			mov	dx, word ptr value+2
			ltoa

Description:    LtoA converts the 32-bit signed integer in DX:AX to a string
		of characters.  LTOA stores the string at the address specified
		in ES:DI (there must be at least twelve bytes available at
		this address) and returns with ES:DI pointing at this buffer.
		LTOA2 works the same way, except it returns with ES:DI
		pointing at the zero terminating byte.  LTOAM allocates
		storage for the string on the heap and returns a pointer
		to the string in ES:DI.

Include:        stdlib.a or conv.a



Routine:  ULTOA (2,M)
---------------------

Category:             Conversion Routine

Registers on Entry:   DX:AX- Unsigned 32-bit value to convert to a string
		      ES:DI- Pointer to buffer to hold result (LTOA/LTOA2
			     only).
Registers on Return:  ES:DI- Pointer to string containing converted
		      characters (LTOA/LTOAM only).
		      ES:DI- Pointer to zero-terminating byte of converted
			     string (LTOA2 only).

Flags Affected:       Carry is set if malloc error (ULTOAM only)

Example of Usage:  
                      Like LTOA


Description:  Like LTOA except this routine handles unsigned integer values.

Include:	stdlib.a or conv.a



Routine:  SPrintf (2,M)
-----------------------

Category:            Conversion Routine
		     In-Memory Formatting Routine

Registers on entry:  CS:RET - Pointer to format string and operands of the
			      sprintf routine
		     ES:DI-   Address of buffer to hold output string
			      (sprintf/sprintf2 only)

Register on return:  ES:DI register - pointer to a string containing
				      output data (sprintf/sprintfm only).
				      Pointer to zero-terminating byte at the
				      end of the converted string (sprintf2
				      only).

Flags affected:      Carry is set if memory allocation error (sprintfm only).

Example of Usage:
		     sprintfm
		     db      "I=%i, U=%u, S=%s",13,10,0
		     db      i,u,s
		     puts
		     free


Description:   SPrintf is an in-memory formatting routine. It is similar to
	       C's sprintf routine.

	       The programmer selects the maximum length of the output string.
	       SPrintf works in a manner quite similar to printf, except sprintf
	       writes its output to a string variable rather than to the stdlib
	       standard output.

	       SPrintfm, by default, allocates 2048 characters for the string
	       and then deallocates any unnecessary storage.  An external
	       variable, sp_MaxBuf, holds the number of bytes to allocate upon
	       entry into sprintfm.  If you wish to allocate more or less than
	       2048 bytes when calling sprintf, simply change the value of this
	       public variable (type is word).  Sprintfm calls malloc to
	       allocate the storage dynamically.  You should call free to
	       return this buffer to the heap when you are through with it.

	       Sprintf and Sprintf2 expect you to pass the address of a buffer
	       to them.  You are responsible for supplying a sufficiently
	       sized buffer to hold the result.

Include:             stdlib.a or conv.a



Routine:  SScanf
----------------

Category:              Conversion Routine
		       Formatted In-Memory Conversion Routine

Registers on Entry:    ES:DI - points at string containing values to convert

Registers on return:   None

Flags affected:	       None

Example of Usage:

	      ; this code reads the values for i, j, and s from the characters
	      ; starting at memory location Buffer.

		       les   di, Buffer
		       SScanf
		       db    "%i %i %s",0
		       dd     i, j, s


Description:  SScanf provides formatted input in a fashion analogous to scanf.
              The difference is that scanf reads in a line of text from the
              stdlib standard input whereas you pass the address of a sequence
              of characters to SScanf in es:di.


Include:                stdlib.a or conv.a




Routine:  ToLower
-----------------

Category:            Conversion Routine

Register on entry:   AL- Character to (possibly) convert
				to lower case.

Register on return:  AL- Converted character.

Flags affected:      None

Example of usage:
		     mov     al, char
		     ToLower


Description:  ToLower checks the character in the AL register, if it is upper
	      case it converts it to lower case.  If it is anything else,
	      ToLower leaves the value in AL unchanged.  For high performance
	      this routine is implemented as a macro rather than as a
	      procedure call.  This routine is so short you would spend more
	      time actually calling the routine than executing the code inside.
	      However, the code is definitely longer than a (far) procedure
	      call, so if space is critical and you're invoking this code
	      several times, you may want to convert it to a procedure call to
	      save a little space.


Include:             stdlib.a or conv.a



Routine:   ToUpper
------------------

Category:             Conversion Routine

Registers on Entry:   AL- Character to (possibly) convert to upper case

Registers on Return:  AL- Converted character

Flags Affected:       None

Example of Usage:
		      mov  al, char
		      ToUpper


Description:  ToUpper checks the character in the AL register, if it is lower
	      case it converts it to upper case.  If it is anything else,
	      ToUpper leaves the value in AL unchanged.  For high performance
	      this routine is implemented as a macro rather than as a
	      procedure call (see ToLower, above).


Include:              stdlib.a or conv.a





Utility Routines
----------------

The following routines are all Utility Routines.  The first routines listed
below compute the number of print positions required by a 16-bit and 32-bit
signed and unsigned integer value.  UlSize is like the LSize except it treats
the value in DX:AX as an unsigned long integer.  The next set of routines in
this section check the character in the AL register to see whether it is a
hexidecimal digit, if it alphabetic, if it is a lower case alphabetic, if it
is a upper case alphabetic, and if it is numeric.  Then there are some
miscellaneous routines (macros) which process command line parameters, invoke
DOS and exit the program.



Routine:  ISize
---------------

Category:            Utility Routine

Register on entry:   AX- 16-bit value to compute the
				output size for.

Register on return:  AX- Number of print positions
				required by this number (including
				the minus sign, if necessary).

Flags affected:      None

Example of usage:
		     mov     ax, I
		     ISize
		     puti                    ;Prints positions
					     ;req'd by I.


Description:         This routine computes the number of print positions
		     required by a 16-bit signed integer value.  ISize computes
		     the minimum number of character positions it takes to print
		     the signed decimal value in the AX register.  If the number
		     is negative, it will include space for the minus sign in
		     the count.


Include:             stdlib.a or util.a




Routine:  USize
---------------

Category:            Utility Routine

Register on entry:   AX- 16 bit value to compute the
				output size for

Register on return:  AX- number of print positions
			 required by this number (including
			 the minus sign, if necessary)

Flags affected:      None

Example of usage:
		     mov     ax, I
		     USize
		     puti                    ;prints position
					     ;required by I


Description:         This routine computes the number of print positions
		     required by a 16-bit signed integer value.  It also
		     computes the number of print positions required by a
		     16-bit unsigned value.  USize computes the minimum number
		     of character positions it will take to print an unsigned
		     decimal value in the AX register.  If the number is
		     negative, it will include space for the minus sign in the
		     count.


Include:             stdlib.a or util.a


Routine:  LSize
---------------

Category:            Utility Routine

Register on entry:   DX:AX   - 32-bit value to compute the
			       output size for.

Register on return:  AX - Number of print positions
			  required by this number (including
			  the minus sign, if necessary).

Flags affected:      None

Example of Usage:
		     mov     ax, word ptr L
		     mov     dx, word ptr L+2
		     LSize
		     puti                    ;Prints positions
					     ;req'd by L.


Description:         This routine computes the number of print positions
		     required by a 32-bit signed integer value.  LSize computes
		     the minimum number of character positions it will take to
		     print the signed decimal value in the DX:AX registers.  If
		     the number is negative, it will include space for the minus
		     sign in the count.


Include:             stdlib.a or util.a



Routine:  ULSize
----------------

Category:             Utility Routine

Registers on Entry:   DX:AX - 32-bit value to compute the output size for.

Registers on return:  AX - number of print positions required by this number

Flags affected:       None

Example of Usage:
		      mov     ax, word ptr L
		      mov     dx, word ptr L+2
		      ULSize
		      puti                    ; Prints positions req'd by L


Description:          ULSize computes the minimum number of character
		      positions it will take to print an unsigned decimal
		      value in the DX:AX registers.


Include:              stdlib.a or util.a



Routine:  IsAlNum
-----------------

Category:             Utility routine

Register on entry:    AL - character to check.

Register on return:   None

Flags affected:       Zero flag - set if character is alphanumeric,
		      clear if not.


Example of usage :    mov al, char
		      IsAlNum
		      je IsAlNumChar


Description :         This routine checks the character in the AL register to
		      see if it is in the range A-Z, a-z, or 0-9.  Upon return,
		      you can use the JE instruction to check to see if the
		      character was in this range (or, conversely, you can use
		      JNE to see if it is not in range).


Include:              stdlib.a or util.a


Routine:  IsXDigit
------------------

Category:               Utility Routine

Register on Entry:     AL- character to check

Registers on Return:    None

Flags Affected:         Zero flag-  Set if character is a hex digit, clear if not


Example of Usage:       mov    al, char
			IsXDigit
			je     IsXDigitChar


Description:            This routine checks the character in the AL register to
			see if it is in the range A-F, a-f, or 0-9.  Upon
			return, you can use the JE instruction to check to see
			if the character was in this range (or, conversely,
			you can use jne to see if it is not in the range).


Include:                stdlib.a or util.a


Routine:   IsDigit
------------------

Category:            Utility Routine

Register on entry:   AL- Character to check

Register on return:  None

Flags affected:	     Zero flag- set if character is numeric, clear if not.

Example of Usage:    mov   al, char
		     IsDigit
		     je  IsDecChar


Description:         This routine checks the character in the AL register to
		     see if it is in the range 0-9.  Upon return, you can use
		     the JE instruction to check to see if the character was
		     in the range (or, conversely, you can use JNE to see if it
		     is not in the range).


Include:             stdlib.a or util.a


Routine:   IsAlpha
------------------

Category:            Utility Routine

Register on entry:   AL- Character to check

Register on return:  None

Flags affected:	     Zero flag- set if character is alphabetic, clear if not.

Example of Usage:    mov   al, char
		     IsAlpha
		     je   IsAlChar


Description:         This routine checks the character in the AL register to
		     see if it is in the range A-Z or a-z.  Upon return, you
		     can use the JE instruction to check to see if the character
		     was in the range (or, conversely, you can use JNE to see
		     if it is not in the range).

Include:             stdlib.a or util.a




Routine: IsLower
----------------

Category:             Utility Routine

Registers on Entry:   AL- character to test

Registers on Return:  None


Flags Affected:       Zero = 1 if character is a lower case alphabetic character
		      Zero = 0 if character is not a lower case alphabetic
		      character

Example of Usage:     mov  AL, char        ; put char in AL
		      IsLower              ; is char lower a-z?
		      je  IsLowerChar      ; if yes, jump to IsLowerChar


Description:          This routine checks the character in the AL register to
		      see if it is in the range a-z.  Upon return, you can use
		      the JE instruction to check and see if the character was
		      in this range (or you can use JNE to check and see if
		      the character was not in this range).  This procedure is
		      implemented as a macro for high performance.


Include:              stdlib.a or util.a


Routine:  IsUpper
-----------------

Category:             Utility Routine

Registers on Entry:   AL- character to check

Registers on Return:  None

Flags Affected:       Zero flag - set if character is uppercase alpha, clear
				  if not.


Example of Usage:     mov al, char
		      IsUpper
		      je IsUpperChar


Description:          This routine checks the character in the AL register to
		      see if it is in the ranger A-Z.  Upon return, you can use
		      the JE instruction to check to see if it not in the
		      range).  It uses macro implementation for high performance.


Include:              stdlib.a or util.a


Routine:  Argc
--------------

Category:             Utility Routine

Registers on Entry:   None

Registers on Return:  CX-	Number of command line parameters

Flags Affected:       None


Example of Usage:     
			print
			db	"There were ",0
			argc
			mov	ax, cx
			puti
			print
			db	" command line parameters here",cr,lf,0

Description:    This routine returns the number of command line para-
		meters on the DOS command line.  Note that strings enclosed
		in quotation marks or apostrophes are counted as a single
		command line parameter.


Include:              stdlib.a or misc.a


Routine:  Argv
--------------

Category:             Utility Routine

Registers on Entry:   AX-	Which parameter to grab (1..n).
		      PSP-	Global variable containing the DOS program
				segment prefix value.

Registers on Return:  ES:DI-	Pointer to string on heap containing the
				specified parameter (empty string if the
				parameter does not exist).

Flags Affected:       carry-	Set if malloc error.


Example of Usage:     
			mov	ax, 2
			argv
			print
			db	"The second command line parameter is ",0
			puts
			free

Description:    
 This routine returns a string containing the specified command line argument.
You must pass the position number of the argument in AX; this routine returns
the specified string on the heap with ES:DI pointing at the string.  Note that
the command line parameters are numbered starting from one.  If you specify an
out of range value, this routine returns a pointer to a zero byte (the empty
string).


Include:              stdlib.a or misc.a


Routine:  GetEnv
----------------

Category:             Utility Routine

Registers on Entry:   ES:DI-	Points at a string containing the name of
				the environment variable you want to find.
		      PSP-	Global variable containing the DOS program
				segment prefix value.

Registers on Return:  ES:DI-	Pointer to string in the environment space
				containing the characters immediately after
				the name of the environment variable in the
				environment string space.

Flags Affected:       carry-	Set if malloc error.


Example of Usage:     
			les	di, EnvVarStrPtr
			getenv
			print
			db	"The value of the environment variable is ",0
			puts
			free

Description:    

  This routine returns a pointer to the first characters following an
environment variable in the program's environment variable space.  It points
at the very first character following the name, so it typically points at
an equal sign (e.g., the PATH environment variable is typically of the form
"PATH=xxxxxxxx" and the "=" is the first char past the name).  If this routine
does not find the specified environment variable, it returns a pointer to
a single zero byte.  Since the pointer is in the environment space, you should
not store anything at this address.  Instead, first copy the string with STRDUP
if you need to modify it.

Include:              stdlib.a or misc.a


Routine:  DOS
-------------

Category:             Utility Routine

Registers on Entry:   AH-	DOS opcode

Registers on Return:  Depends on particular DOS call

Flags Affected:       Depends on DOS call.


Example of Usage:     
			mov	ah, 9
			DOS
			 .
			 .
			 .
			DOS	7
Description:    

  This macro invokes DOS via the INT 21h interrupt.  If there is no parameter
to the macro, it simply issues the INT 21h instruction.  If a parameter is
present, it emits "mov ah, operand" followed by the INT 21h instruction.

Include:              stdlib.a or consts.a


Routine:  ExitPgm
-----------------

Category:             Utility Routine

Registers on Entry:  None

Registers on Return:  Doesn't return

Flags Affected:       N/A


Example of Usage:     
			ExitPgm
Description:    

  This macro exits the program and returns to DOS.

Include:              stdlib.a or consts.a



String Handling Routines
------------------------

Manipulating text is a major part of many computer applications. Typically,
strings are inputed and interpreted. This interpretation may involve some
chores such as extracting certain part of the text, copying it, or comparing
with other strings.

The string manipulation routines in C provides various functions. Therefore,
the stdlib has some C-like string handling functions (e.g. strcpy, strcmp).
In C a string is an array of characters; similarly, the string are terminated
by a "0" as a null character. In general, the input strings of these routines
are pointed by ES:DI. In some routines, the carry flag will be set to indicate
an error.

The following string routines take as many as four different forms: strxxx,
strxxxl, strxxxm, and strxxxlm.  These routines differ in how they store
the destination string into memory and where they obtain their source strings.

Routines of the form strxxx generally expect a single source string address
in ES:DI or a source and destination string in ES:DI & DX:SI.  If these
routines produce a string, they generally store the result into the buffer
pointed at by ES:DI upon entry.  They return with ES:DI pointing at the
first character of the destination string.

Routines of the form strxxxl have a "literal source string".  A literal
source string follows the call to the routine in the code stream.  E.g.,

			strcatl
			db	"Add this string to ES:DI",0

Routines of the form strxxxm automatically allocate storage for a source
string on the heap and return a pointer to this string in ES:DI.

Routines of the form strxxxlm have a literal source string in the code
stream and allocate storage for the destination string on the heap.



Routine:  Strcpy (l)
--------------------

Category:             String Handling Routine

Registers on Entry:   ES:DI - pointer to source string (Strcpy only)
		      CS:RET - pointer to  source  string (Strcpy1 only)
		      DX:SI - pointer to destination string


Registers on return:  ES:DI - points at the destination string


Flags affected:	      None


Example of Usage:
		      mov     dx, seg Dest
		      mov     si, offset Dest
		      mov     di, seg Source
		      mov     es, di
		      mov     si, offset Source
		      Strcpy

		      mov     dx, seg Dest
		      mov     si, offset Dest
		      Strcpyl
		      db      "String to copy",0


Description:  Strcpy is used to copy a zero-terminated string from one
	      location to another.  ES:DI points at the source string,
	      DX:SI points at the destination address.  Strcpy copies all
	      bytes, up to and including the zero byte, from the source
	      address to the destination address.  The target buffer must
	      be large enough to hold the string.  Strcpy performs no error
	      checking on the size of the destination buffer.

	      Strcpyl copies the  zero-terminated string immediately following
	      the call instruction to the destination address specified by
	      DX:SI.  Again, this routine expects you to ensure that the
	      taraget buffer is large enough to hold the result.

	      Note: There are no "Strcpym" or "Strcpylm" routines.  The
	      reason is simple: "StrDup" and "StrDupl" provide these functions
	      using names which are familiar to MSC and Borland C users.

Include:              stdlib.a or strings.a


Routine:  StrDup (l)
--------------------

Category:            String Handling Routine

Register on entry:   ES:dI - pointer to source string (StrDup
		     only).  CS:RET - Pointer to source string
		     (StrDupl only).

Register on return:  ES:DI - Points at the destination string
		     allocated on heap.  Carry=0 if operation
		     successful.  Carry=0 if insufficient
		     memory for new string.

Flags affected:      Carry flag

Example of usage:
		     StrDupl
		     db "String for StrDupl",0
		     jc  MallocError
		     mov word ptr Dest1, di
		     mov word ptr Dest1+2, es  ;create another
					       ;copy of this
					       ;string. Note
					       ;that es:di points
					       ;at Dest1 upon
					       ;entry to StrDup,
					       ;but it points at
					       ;the new string on
					       ;exit
		     StrDup
		     jc MallocError
		     mov word ptr Dest2, di
		     mov word ptr Dest2+2, es


Description:  StrDup and StrDupl duplicate strings.  You pass them
	      a pointer to the string (in es:di for strdup, via
	      the return address for strdupl) and they allocate
	      sufficient storage on the heap for a copy of this
	      string.  Then these two routines copy their source
	      strings to the newly allocated storage and return
	      a pointer to the new string in ES:DI.


Include:             stdlib.a or strings.a


Routine:  Strlen
----------------

Category:            String Handling Routine

Registers on entry:  ES:DI - pointer to source string.

Register on return:  CX - length of specified string.

Flags Affected:      None

Examples of Usage:
		     les   di, String
		     strlen
		     mov   sl, cx
		     printf
		     db   "Length of '%s' is %d\n",0
		     dd   String, sl


Description:  Strlen computes the length of the string whose address
	      appears in ES:DI.  It returns the number of characters
	      up to, but not including, the zero terminating byte.

Include:             stdlib.a or strings.a


Routine:  Strcat (m,l,ml)
-------------------------

Category:             String Handling Routine

Registers on Entry:   ES:DI- Pointer to first string
		      DX:SI- Pointer to second string (Strcat and Strcatm only)


Registers on Return:  ES:DI- Pointer to new string (Strcatm and Strcatml only)

Flags Affected:       Carry = 0 if no error
		      Carry = 1 if insufficient memory (Strcatm and Strcatml
							only)


Example of Usage:     les  DI, String1
		      mov  DX, seg String2
		      lea  SI, String2
		      Strcat                   ; String1 <- String1 + String2

		      les  DI, String1
		      Strcatl                  ; String1 <- String1 +
		      db  "Appended String",0  ;            "Appended String",0


		      les  DI, String1
		      mov  DX, seg String2
		      lea  SI, String2
		      Strcatm                  ; NewString <- String1 + String2
		      puts
		      free

		      les  DI, String1
		      Strcatml                 ; NewString <- String1 +
		      db  "Appended String",0  ;         "Appended String",0
		      puts
		      free


Description:  These routines concatenate two strings together.  They differ
	      mainly in the location of their source and destination operands.

	      Strcat concatenates the string pointed at by DX:SI to the end of
	      the string pointed at by ES:DI in memory.  Both strings must be
	      zero-terminated.  The buffer pointed at by ES:DI must be large
	      enough to hold the resulting string.  Strcat does NOT perform
	      bounds checking on the data.

	      ( continued on next page )







Routine:  Strcat (m,l,ml)   ( continued )
-----------------------------------------


	      Strcatm computes the length of the two strings pointed at by ES:DI
	      and DX:SI and attempts to allocate this much storage on the heap.
	      If it is not successful, Strcatm returns with the Carry flag set,
	      otherwise it copies the string pointed at by ES:DI to the heap,
	      concatenates the string DX:SI points at to the end of this string
	      on the heap, and returns with the Carry flag clear and ES:DI
	      pointing at the new (concatenated) string on the heap.

	      Strcatl and Strcatml work just like Strcat and Strcatm except you
	      supply the second string as a literal constant immediately AFTER
	      the call rather than pointing DX:SI at it (see examples above).


Include:             stdlib.a or strings.a


Routine:  Strchr
----------------

Category:            String Handling Routine

Register on entry:   ES:DI- Pointer to string.
			AL- Character to search for.

Register on return:  CX- Position (starting at zero)
			 where Strchr found the character.

Flags affected:      Carry=0 if Strchr found the character.
		     Carry=1 if the character was not present
			     in the string.

Example of usage:
		     les di, String
		     mov al, Char2Find
		     Strchr
		     jc  NotPresent
		     mov CharPosn, cx


Description:  Strchr locates the first occurrence of a character within a
	      string.  It searches through the zero-terminated string pointed
	      at by es:di for the character passed in AL. If it locates the
	      character, it returns the position of that character to the CX
	      register.  The first character in the string corresponds to the
	      location zero.  If the character is not in the string, Strchr
	      returns the carry flag set.  CX's value is undefined in that
	      case.  If Strchr locates the character in the string, it
	      returns with the carry clear.


Include:             stdlib.a or strings.a


Routine:  Strstr (l)
--------------------

Category:            String Handling Routine

Register on entry:   ES:DI - Pointer to string.
		     DX:SI - Pointer to substring(strstr).
		     CS:RET - Pointer to substring (strstrl).

Register on return:  CX - Position (starting at zero)
		     where Strstr/Strstrl found the
		     character.  Carry=0 if Strstr/
		     Strstrl found the character.
		     Carry=1 if the character was not
		     present in the string.

Flags affected:      Carry flag

Example of usage :
		     les di, MainString
		     lea si, Substring
		     mov dx, seg Substring
		     Strstr
		     jc NoMatch
		     mov i, cx
		     printf
		     db "Found the substring '%s' at location %i\n",0
		     dd Substring, i


Description:  Strstr searches for the position of a substring
	      within another string.  ES:DI points at the
	      string to search through, DX:SI points at the
	      substring.  Strstr returns the index into ES:DI's
	      string where DX:SI's string is found.  If the
	      string is found, Strstr returns with the carry
	      flag clear and CX contains the (zero based) index
	      into the string.  If Strstr cannot locate the
	      substring within the string ES:DI points at, it
	      returns the carry flag set.  Strstrl works just
	      like Strstr except it excepts the substring to
	      search for immediately after the call instruction
	      (rather than passing this address in DX:SI).


Include:              stdlib.a or strings.a


Routine:  Strcmp (l)
--------------------

Category:            String Handling Routine

Registers on entry:  ES:DI contains the address of the first string
		     DX:SI contains the address of the second string (strcmp)
		     CS:RET (contains the address of the substring (strcmpl)

Register on return:  CX (contains the position where the two strings differ)

Flags affected:      Carry flag and zero flag (string1 > string2 if C + Z = 0)
					 (string1 < string2 if C = 1)

Example of Usage:
		     les 	di, String1
		     mov 	dx, seg String2
		     lea 	si, String2
		     strcmp
		     ja		OverThere

		     les 	di, String1
		     strcmpl
		     db 	"Hello",0
		     jbe 	elsewhere



Description:  Strcmp compares the first strings pointed by ES:DI with
	      the second string pointed by DX:SI. The carry and zero flag
	      will contain the corresponding result. So unsigned branch
	      instructions such as JA or JB is recommended. If string1
	      equals string2, strcmp will return with CX containing the
	      offset of the zero byte in the two strings.

	      Strcmpl compares the first string pointed by ES:DI with
	      the substring pointed by CS:RET. The carry and zero flag
	      will contain the corresponding result. So unsigned branch
	      instructions such as JA or JB are recommended. If string1
	      equals to the substring, strcmp will return with CX
	      containing the offset of the zero byte in the two strings.

Include:             stdlib.a or strings.a


Routine:  Strupr (m)
--------------------

Category:            String Handling Routine
		     Conversion Routine

Register on entry:   ES:DI (contains the pointer to input string)

Register on return:  ES:DI (contains the pointer to input string
			   with characters converted to upper case)
			   Note: struprm allocates storage for a new
			   string on the heap and returns the pointer
			   to this routine in ES:DI.

Flags affected:      Carry = 1 if memory allocation error (Struprm only).

Example of Usage:
		     les 	di, lwrstr1
		     strupr
		     puts

		     mov        di, seg StrWLwr
		     mov	es, di
		     lea	di, StrWLwr
		     struprm
		     puts
		     free


Description:  Strupr converts the input string pointed by ES:DI to
	      upper case.  It will actually modify the string you pass
	      to it.

	      Struprm first makes a copy of the string on the heap and
	      then converts the characters in this new string to upper
	      case.  It returns a pointer to the new string in ES:DI.

Include:             stdlib.a or strings.a


Routine:  Strlwr (m)
--------------------

Category:            String Handling Routine
		     Conversion Routine

Register on entry:   ES:DI (contains the pointer to input string)

Register on return:  ES:DI (contains the pointer to input string
			   with characters converted to lower case).

Flags affected:      Carry = 1 if memory allocation error (strlwrm only)


Example of Usage:
		     les di, uprstr1
		     strlwr
		     puts

		     mov        di, seg StrWLwr
		     mov	es, di
		     lea	di, StrWLwr
		     strlwrm
		     puts
		     free




Description:  Strlwr converts the input string pointed by ES:DI to
	      lower case. It will actually modify the string you pass
	      to it.

	      Strlwrm first copies the characters onto the heap and then
	      returns a pointer to this string after converting all the
	      alphabetic characters to lower case.


Include:             stdlib.a or strings.a



Routine:  Strset (m)
--------------------

Category:            String Handling Routine

Register on entry:   ES:DI contains the pointer to input string (StrSet only)
		     AL    contains the character to copy
		     CX    contains number of characters to allocate for
			   the string (Strsetm only)

Register on return:  ES:DI pointer to newly allocated string (Strsetm only)

Flags affected:      Carry set if memory allocation error (Strsetm only)

Example of Usage:
		     les 	di, string1
		     mov	al, " "		;Blank fill string.
		     Strset

		     mov 	cx, 32
		     mov	al, "*"		;Create a new string w/32
		     Strsetm			; asterisks.
		     puts
		     free


Description:  Strset overwrites the data on input string pointed by
	      ES:DI with the character on AL.

	      Strsetm creates a new string on the heap with the number
	      of characters specified in CX.  All characters in the string
	      are initialized with the value in AL.

Include:             stdlib.a or strings.a


Routine:  Strspan (l)
---------------------

Category:             String Handling Routine

Registers on Entry:   ES:DI - Pointer to string to scan
		      DX:SI - Pointer to character set (Strspan only)
		      CS:RET- Pointer to character set (Strspanl only)

Registers on Return:  CX- First position in scanned string which does not
			  contain one of the characters in the character set

Flags Affected:       None

Example of Usage:
		      les  DI, String
		      mov  DX, seg CharSet
		      lea  SI, CharSet
		      Strspan           ; find first position in String with a
		      mov i, CX         ;                  char not in CharSet
		      printf
		      db  "The first char which is not in CharSet "
		      db  "occurs at position %d in String.\n",0
		      dd  i

		      les  DI, String
		      Strspanl          ; find first position in String which
		      db   "aeiou",0    ; is not a vowel
		      mov  j, CX
		      printf
		      db  "The first char which is not a vowel "
		      db  "occurs at position %d in String.\n",0
		      dd  j


Description:  Strspan(l) scans a string, counting the number of characters which
	      are present in a second string (which represents a character set).
	      ES:DI points at a zero-terminated string of characters to scan.
	      DX:SI (strspan) or CS:RET (strspanl) points at another zero-
	      terminated string containing the set of characters to compare
	      against.  The position of the first character in the string
	      pointed to by ES:DI which is NOT in the character set is returned.
	      If all the characters in the string are in the character set, the
	      position of the zero-terminating byte will be returned.

	      Although strspan and (especially) strspanl are very compact and
	      convenient to use, they are not particularly efficient.  The
	      character set routines provide a much faster alternative at the
	      expense of a little more space.


Include:               stdlib.a or strings.a


Routine:  Strcspan, Strcspanl
-----------------------------

Category:             String Handling Routine

Registers on Entry:   ES:DI - Pointer to string to scan
		      DX:SI - Pointer to character set (Strcspan only)
		      CS:RET- Pointer to character set (Strcspanl only)

Registers on Return:  CX- First position in scanned string which contains one
			  of the characters in the character set

Flags Affected:       None

Example of Usage:
		      les  DI, String
		      mov  DX, seg CharSet
		      lea  SI, CharSet
		      Strcspan          ; find first position in String with a
		      mov i, CX         ;                      char in CharSet
		      printf
		      db  "The first char which is in CharSet "
		      db  "occurs at position %d in String.\n",0
		      dd  i

		      les  DI, String
		      Strcspanl         ; find first position in String which
		      db   "aeiou",0	; is a vowel.
		      mov  j, CX
		      printf
		      db  "The first char which is a vowel occurs "
		      db  "at position %d in String.\n",0
		      dd  j


Description:  Strcspan(l) scans a string, counting the number of characters
	      which are NOT present in a second string (which represents a
	      character set).  ES:DI points at a zero-terminated string of
	      characters to scan.  DX:SI (strcspan) or CS:RET (strcspanl) points
	      at another zero-terminated string containing the set of characters
	      to compare against.  The position of the first character in the
	      string pointed to by ES:DI which is in the character set is
	      returned.  If all the characters in the string are not in the
	      character set, the position of the zero-terminating byte will be
	      returned.

	      Although strcspan and strcspanl are very compact and convenient to
	      use, they are not particularly efficient.  The character set
	      routines provide a much faster alternative at the expense of a
	      little more space.

Include:              stdlib.a or strings.a


Routine:  StrIns (m,l,ml)
-------------------------

Category:             String Handling Routine

Registers on Entry:   ES:DI - Pointer to destination string (to insert into)
		      DX:SI - Pointer to string to insert
					  (StrIns and StrInsm only)
		      CX    - Insertion point in destination string

Registers on Return:  ES:DI - Pointer to new string (StrInsm and StrInsml only)

Flags Affected:       Carry = 0 if no error
		      Carry = 1 if insufficient memory
				   (StrInsm and StrInsml only)


Example of Usage:
		      les  DI, DestStr
		      mov  DX, word ptr SrcStr+2
		      mov  SI, word ptr SrcStr
		      mov  CX, 5
		      StrIns     ; Insert SrcStr before the 6th char of DestStr

		      les  DI, DestStr
		      mov  CX, 2
		      StrInsl    ; Insert "Hello" before the 3rd char of DestStr
		      db  "Hello",0

		      les  DI, DestStr
		      mov  DX, word ptr SrcStr+2
		      mov  SI, word ptr SrcStr
		      mov  CX, 11
		      StrInsm      ; Create a new string by inserting SrcStr
				   ;         before the 12th char of DestStr
		      puts
		      putcr
		      free


Description:  These routines insert one string into another string.  ES:DI
	      points at the string into which you want to insert another.  CX
	      contains the position (or index) where you want the string
	      inserted.  This index is zero-based, so if CX contains zero, the
	      source string will be inserted before the first character in the
	      destination string.  If CX contains a value larger than the size
	      of the destination string, the source string will be appended to
	      the destination string.

	      StrIns inserts the string pointed at by DX:SI into the string
	      pointed at by ES:DI at position CX.  The buffer pointed at by
	      ES:DI must be large enough to hold the resulting string.  StrIns
	      does NOT perform bounds checking on the data.

     ( continued on next page )


Routine:  StrIns (m,l,ml)   ( continued )
-----------------------------------------

	      StrInsm does not modify the source or destination strings, but
	      instead attempts to allocate a new buffer on the heap to hold the
	      resulting string.  If it is not successful, StrInsm returns with
	      the Carry flag set, otherwise the resulting string is created and
	      its address is returned in the ES:DI registers.

	      StrInsl and StrInsml work just like StrIns and StrInsm except you
	      supply the second string as a literal constant immediately AFTER
	      the call rather than pointing DX:SI at it (see examples above).



Routine:  StrDel, StrDelm
-------------------------

Category:              String Handling Routine

Registers on Entry:    ES:DI -  pointer to string
		       CX - deletion point in  string
		       AX - number of characters to delete

Registers on return:   ES:DI - pointer to new string (StrDelm only)

Flags  affected:       Carry = 1 if memory allocation error,  0 if okay
		       (StrDelm only).

Example of Usage:
		       les     di,  Str2Del
		       mov     cx,  3          ; Delete starting at 4th char
		       mov     ax,  5          ; Delete five characters
		       StrDel                  ; Delete in place

		       les     di,  Str2Del2
		       mov     cx,  5
		       mov     ax,  12
		       StrDelm
		       puts
		       free


Description:  StrDel deletes characters from a string.  It works by computing
	      the beginning and end of the deletion point.  Then it copies all
	      the characters from the end of the deletion point to the end of
	      the string (including the zero byte) to the beginning of the
	      deletion point.  This covers up (thereby effectively deleting)
	      the undesired characters in the string.

	      Here are two degenerate cases to worry about -- 1) when you
	      specify a deletion point which is beyond the end of the string;
	      and 2) when the deletion point is within the string but the
	      length of the deletion takes you beyond the end of the string.
	      In the first case StrDel simply ignores the deletion request.  It
	      does not modify the original string.  In the second case,
	      StrDel simply deletes everything from the deletion point to the
	      end of the string.

	      StrDelm works just like StrDel except it does not delete the
	      characters in place.  Instead, it creates a new string on the
	      heap consisting of the characters up to the deletion point and
	      those following the characters to delete.  It returns a pointer
	      to the new string on the heap in ES:DI, assuming that it
	      properly allocated the storage on the heap.

Include:               stdlib.a or strings.a


Routine:  StrRev, StrRevm
-------------------------

Author:               Michael Blaszczak (.B  ekiM)

Category:             String Handling Routine

Registers on Entry:   ES:DI - pointer to string

Registers on return:  ES:DI - pointer to new string (StrRevm only).

Flags affected:       Carry  = 1 if memory allocation error, 0 if okay
		      (StrRevm only).

Example of Usage:

Description:  StrRev reverses the characters in a string.  StrRev reverses,
	      in place, the characters in the string that ES:SI points at.
	      StrRevm creates a new string on the heap (which contains the
	      characters in the string ES:DI points at, only reversed) and
	      returns a pointer to the new string in ES:DI.  If StrRevm
	      cannot allocate sufficient memory for the string, it returns
	      with the carry flag set.


Include:              stdlib.a or strings.a


Routine:  ToHex
---------------

Category:             String Handling Routine/ Conversion Routine

Registers on Entry:   ES:DI - pointer to byte array
		      BX-     memory base address for bytes
		      CX-     number of entries in byte array

Registers on return:  ES:DI - pointer to Intel Hex format string.

Flags affected:       Carry  = 1 if memory allocation error, 0 if okay
		   

Example of Usage:

		mov	bx, 100h	;Put data at address 100h in hex file.
		mov	cx, 10h		;Total of 16 bytes in this array.
		les	di, Buffer	;Pointer to data bytes
		ToHex			;Convert to Intel HEX string format.
		puts			;Print it.

Description:  

ToHex converts a stream of binary values to Intel Hex format.  Intel HEX format
is a common ASCII data interchange format for binary data.  It takes the
following form:

	: BB HHLL RR DDDD...DDDD SS <cr> <lf>

(Note:spaces were added for clarity, they are not actually present in the
hex string)

BB is a pair of hex digits which represent the number of data bytes (The DD
entries) and is the value passed in CX.

HHLL is the hexadecimal load address for these data bytes (passed in BX).

RR is the record type.  ToHex always produces data records with the RR field
containing "00".  If you need to output other field types (usually just an
end record) you must create that string yourself.  ToHex will not do it.

DD...DD is the actual data in hex form.  This is the number of bytes specified
in the BB field.

SS is the two's complement of the checksum (which is the sum of the binary
values of the BB, HH, LL, RR, and all DD fields).

This routine allocates storage for the string on the heap and returns a pointer
to that string in ES:DI.

Include:              stdlib.a or strings.a


Memory Management Routines
--------------------------

The stdlib memory management routines let you dynamically allocate storage on
the heap.  These routines are somewhat similar to those provided by the "C"
programming language.  However, these routines do not perform garbage
collection, as this would introduce too many restrictions and have a very
adverse effect on speed.

The following paragraph gives a description of how the memory management
routines work.  These routines may be updated in future revisions, however,
so you should never make assumptions about the structure of the memory
management record (described below) or else your code may not work on the
next revision.

The allocation/deallocation routines should be fairly fast.  Malloc and free
use a modified first/next fit algorithm which lets the system quickly find a
memory block of the desired size without undue fragmentation problems (average
case).  The memory manager data structure has an overhead of eight bytes
(meaning each malloc operation requires at least eight more bytes than you ask
for) and a granularity of 16 bytes.  The overhead (eight bytes) per allocated
block may seem rather high, but that is part of the price to pay for faster
malloc and free routines.  All pointers are far pointers and each new item is
allocated on a paragraph boundary.  The current memory manager routines always
allocate (n+8) bytes, rounding up to the next multiple of 16 if the result is
not evenly divisible by sixteen.  The first eight bytes of the structure are
used by the memory management routines, the remaining bytes are available for
use by the caller (malloc, et. al., return a pointer to the first byte beyond
the memory management overhead structure).




Routine:  MemInit
-----------------

Category:               Memory Management Routine

Registers on Entry:     DX - number of paragraphs to reserve

Globals Affected:       zzzzzzseg - segment name of the last segment in your
				    program
			PSP - public word variable which holds the PSP value
			      for your program

Registers on return:    CX - number of paragraphs actually reserved by MemInit

Flags affected:         Carry = 0 if no error.
			Carry = 1 if error; AX contains DOS error code.


Example of Usage:
						; Don't forget to set up PSP
						; and zzzzzzseg before calling
						; MemInit
			mov     dx, dx          ; Allocate all available RAM
			MemInit
			jc      MemoryError     ; CX contains the number of
						; paragraphs actually
						; allocated


Description:  This routine initializes the memory manager system.  You must
	      call it before using any routines which call any of the memory
	      manager procedures (since a good number of the stdlib routines
	      call the memory manager, you should get in the habit of always
	      calling this routine.)  The system will "die a horrible death"
	      if you call a memory manager routine (like malloc) without first
	      calling MemInit.

	      This routine expects you to define (and set up) two global
	      names: zzzzzzseg and PSP.  "zzzzzzseg" is a dummy segment which
	      must be the name of the very last segment defined in your
	      program.  MemInit uses the name of this segment to determine the
	      address of the last byte in your program.  If you do not
	      declare this segment last, the memory manager will overwrite
	      anything which follows zzzzzzseg.  The "shell.asm" file
	      provides you with a template for your programs which properly
	      defines this segment.

	      PSP should be a word variable which contains the program segment
	      prefix value for your  program.  MS-DOS passes the PSP value to
	      your program in the DS and ES registers.  You should save this
	      value in the PSP variable.  Don't forget to make PSP a public
	      symbol in your main program's source file.  The "shell.asm" file
	      demonstrates how to properly set up this value.

	      The DX register contnains the number of 16-byte paragraphs you
	      want to reserve for the heap.  If DX contains zero, MemInit will
	      allocate all of the available memory to the heap.  If your
	      program is going to allow the user to run a copy of the command
	      interpreter, or if your program is going to EXEC some other
	      program, you should not allocate all storage to the heap.
	      Instead, you should reserve  some memory for those programs.
	      By setting DX to some value other than zero, you can tell MemInit
	      how much memory you want to reserve for the heap.  All left over
	      memory will be available for other system (or program) use.
	      If the value in DX is larger than the amount of available RAM,
	      MemInit will split the available memory in half and reserve half
	      for the heap leaving the other half unallocated.  If you want to
	      force this situation (to leave half available memory for other
	      purposes), simply load DX with 0FFFFH before calling MemInit.
	      There will never be this much memory available, so this will
	      force MemInit to split the available RAM between the heap and
	      unallocated storage.

	      On return from MemInit, the CX register contains the number of
	      paragraphs actually allocated.  You can use this value to see if
	      MemInit has actually allocated the number of paragraphs you
	      requested.  You  can also use this value to determine how much
	      space is available when you elect to split the free space
	      between the heap and the unallocated portions.

	      If all goes well, this routine returns the carry flag clear.
	      If a DOS memory manager error occurs, this routine returns the
	      carry flag set and the DOS error code in the AX register.


Include:                stdlib.a or memory.a


Routine:  Malloc
----------------

Category:              Memory Management Routine

Registers on Entry:    CX - number of bytes to reserve

Registers on return:   CX - number of bytes actually reserved by Malloc
		       ES:DI - ptr to 1st byte of memory allocated by Malloc

Flags affected:        Carry=0 if no error.
		       Carry=1 if insufficient memory.

Example of Usage:
		       mov     cx, 256
		       Malloc
		       jnc     GoodMalloc
		       print   db    "Insufficient memory to continue.",cr,lf,0
		       jmp   Quit
	  GoodMalloc:  mov   es:[di], 0          ;Init string to NULL


Description:  Malloc is the workhorse routine you use to allocate a block of
	      memory.  You give it the number of bytes you need and if it
	      finds a block large enough, it will  allocate the requested
	      amount and return a pointer to that block.

	      Most memory managers require  a small amount of overhead for each
	      block they allocate.  Stdlib's (current) memory manager requires
	      an overhead of eight bytes.  Furthermore, the grainularity is 16
	      bytes.  This means that Malloc always allocates blocks of memory
	      in paragraph multiples.  Therefore, Malloc may actually reserve
	      more storage than you specify. Therefore, the value returned in
	      CX may be somewhat greater than the requested value.  By setting
	      the minimum allocation size to a paragraph, however, the
	      overhead is reduced and the speed of Malloc is improved by a
	      considerable amount.

	      Stdlib's memory management does not do any garbage collection.
	      Doing so would place too many demands on Malloc's users.
	      Therefore, it is quite possible for you to fragment memory with
	      multiple calls to maloc, realloc, and free.  You could wind up in
	      a situation where there is enough free memory to satisfy your
	      request, but there isn't a single contiguous block large enough
	      for the request.  Malloc treats this as an insufficient memory
	      error and returns with the carry flag set.

	      If Malloc cannot allocate a block of the requested size, it
	      returns with the carry flag set.  In this situation, the contents
	      of ES:DI is undefined.  Attempting to dereference this pointer
	      will produce erratic and, perhaps, disasterous results.

Include:              stdlib.a or memory.a


Routine:  Realloc
-----------------

Category:  Memory Management Routine

Registers on Entry:   CX - number of bytes to reserve
		      ES:DI - pointer to block to  reallocate.

Registers on return:  CX - number of bytes actually reserved by Realloc.
		      ES:DI - pointer to first byte of memory allocated by
			      Realloc.

Flags affected:       Carry = 0 if no error.
		      Carry = 1 if insufficient memory.

Example of Usage:
			mov	cx, 1024	;Change block size to 1K
			les	di, CurPtr	;Get address of block into ES:DI
			realloc
			jc	BadRealloc
			mov	word ptr CurPtr, di
			mov	word ptr CurPtr+2, es


Description:  Realloc lets you change the size of an allocated block in the
	      heap.  It allows you to make the block larger or smaller.
	      If you make the  block smaller, Realloc simply frees (returns
	      to the heap) any leftover bytes at the end of the block.  If
	      you make the block larger, Realloc goes out and allocates a
	      block of the requested size, copies the bytes form the old
	      block to the beginning of the new block (leaving the bytes at
	      the end of the new block uninitialized)), and then frees the
	      old block.


Include:               stdlib.a or memory.a


Routine:  Free
--------------

Category:               Memory Management Routine

Registers on Entry:     ES:DI - pointer to block to deallocate

Registers on return:    None

Flags affected:         Carry = 0 if no error.
			Carry = 1 if ES:DI doesn't point at a Free block.

Example of Usage:
			les     di, HeapPtr
			Free

Description:  Free (possibly) deallocates storage allocated on the heap by
	      malloc or Realloc.  Free returns this storage to heap so other
	      code can reuse it later.  Note, however, that Free doesn't
	      always return storage to the heap.  The memory manager data
	      structure keeps track of the number of pointers currently
	      pointing at a block on the heap (see DupPtr, below).  If you've
	      set up several pointers such that they point at the same block,
	      Free will not deallocate the storage until you've freed all of
	      the pointers which point at the block.

	      Free usually returns an error code (carry flag = 1) if you
	      attempt to Free a block which is not currently allocated or if
	      you pass it a memory address which was not returned by malloc
	      (or Realloc).  By no means is this routine totally robust.
	      If you start calling free with arbitrary pointers in es:di
	      (which happen to be pointing into the heap) it is possible,
	      under certain circumstances, to confuse Free and it will attempt
	      to free a block it really should not.

	      This problem could be solved by adding a large amount of extra
	      code to the free routine, but it would slow it down considerably.
	      Therefore, a little safety has been sacrificed for a lot of
	      speed.  Just make sure your code is correct and everything will
	      be fine!


Include:               stdlib.a or memory.a


Routine:  DupPtr
----------------

Category:             Memory Manager Routine

Registers on Entry:   ES:DI - pointer to block

Registers on return:  None

Flags affected:       Carry = 0 if no error.
		      Carry = 1 if es:di doesn't point at a free block.

Example of Usage:
		      les     di,  Ptr
		      DupPtr


Description:  DupPtr increments the pointer count for the block at the
	      specifiied address.  Malloc sets this counter to one.  Free
	      decrements it by one.  If free decrements the value and it
	      becomes zero, free will release the storage to the heap for
	      other use.  By using DupPtr you can tell the memory manager
	      that you have several pointers pointing  at the same block
	      and that it shouldn't deallocate the storage until you free
	      all of those pointers.


Include:              stdlib.a or memory.a


Routine:  IsInHeap
------------------

Category:             Memory Management Routine

Registers on Entry:   ES:DI - pointer to a block

Registers on return:  None

Flags affected:       Carry = 0 if ES:DI is a valid pointer.
		      Carry = 1 if not.

Example of Usage:
			les	di, MemPtr
			IsInHeap
			jc	NotInHeap

Description:  This routine lets you know if es:di contains the address of
	      a byte in the heap somewhere.  It does not tell you if es:di
	      contains a valid pointer returned by malloc (see IsPtr, below).
	      For example, if es:di contains the address of some particular
	      element of an array (not necessarily the first element)
	      allocated on the heap, IsInHeap will return with the carry clear
	      denoting that the es:di points somewhere in the heap.  Keep in
	      mind that calling this routine does not validate the pointer;
	      it could be pointing at a byte which is part of the memory
	      manager data structure rather than at actual data (since the
	      memory manager maintains that informatnion within the
	      bounds of the heap). This routine is mainly useful for seeing
	      if something is allocated on the heap as opposed to somewhere
	      else (like your code, data, or stack segment).


Include:              stdlib.a or memory.a


Routine:  IsPtr
---------------

Category:               Memory Management Routine

Registers on Entry:     ES:DI - pointer to block

Registers on return:    None

Flags affected:         Carry = 0 if es:di is a valid pointer.
			Carry = 1 if not.

Example of Usage:
			les	di, MemPtr
			IsPtr
			jc	NotAPtr



Description:  IsPtr is much more specific than IsInHeap.  This routine returns
	      the carry flag clear if and only if es:di contains the address
	      of a properly allocated (and currently allocated) block on the
	      heap.  This pointer must be a value returned by Malloc, Realloc,
	      or DupPtr and that block must be currently allocated for IsPtr
	      to return the carry flag clear.


Include:                stdlib.a or memory.a


Character Set Routines
----------------------

The character set routines let you deal with groups of characters as a set
rather than a string.  A set is an unordered collection of objects where
membership (presence or absence) is the only important quality.  The stdlib
set routines were designed to let you quickly check if an ASCII character is
in a set, to quickly add characters to a set or remove characters from a set.
These operations are the ones most commonly used on character sets.  The
other operations (like union, intersection, difference, etc.) are useful, but
are not as popular as the former routines.  Therefore, the data structure
has been optimized for sets to handle the membership and add/delete operations
at the slight expense of the others.

Character sets are implemented via bit vectors.  A "1" bit means that an item
is present in the set and a "0" bit means that the item is absent from the
set.  The most common implementation of a character set is to use thirty-two 
consecutive bytes, eight bytes per, giving 256 bits (one bit for each char-
acter in the character set).  While this makes certain operations (like 
assignment, union, intersection, etc.) fast and convenient, other operations
(membership, add/remove items) run much slower.  Since these are the more 
important operations, a different data structure is used to represent sets.  
A faster approach is to simply use a byte value for each item in the set.  
This offers a major advantage over the thirty-two bit scheme:  for operations 
like membership it is very fast (since all you have got to do is index into 
an array and test the resulting value).  It has two drawbacks:  first, oper-
ations like set assignment, union, difference, etc., require 256 operations 
rather than thirty-two; second, it takes eight times as much memory.

The first drawback, speed, is of little consequence.  You will rarely use the
the operations so affected, so the fact that they run a little slower will be
of little consequence.  Wasting 224 bytes is a problem, however.  Especially
if you have a lot of character sets.

The approach used here is to allocate 272 bytes.  The first eight bytes con-
tain bit masks, 1, 2, 4, 8, 16, 32, 64, 128.  These masks tell you which bit
in the following 264 bytes is associated with the set.  This facilitates 
putting eight sets into 272 bytes (34 bytes per character set).  This provides
almost the speed of the 256-byte set with only a two byte overhead.  In the
stdlib.a file there is a macro that lets you define a group of character
sets:  set.  The macro is used as follows:

	set set1, set2, set3, ... , set8

You must supply between one and eight labels in the operand field.  These are
the names of the sets you want to create.  The set macro automatically 
attaches these labels to the appropriate mask bytes in the set.  The actual
bit patterns for the set begin eight bytes later (from each label).  There-
fore, the byte corresponding to chr(0) is staggered by one byte for each
set (which explains the other eight bytes needed above and beyond the 256 
required for the set).  When using the set manipulation routines, you should
always pass the address of the mask byte (i.e., the seg/offset of one of the 
labels above) to the particular set manipulation routine you are using. 
Passing the address of the structure created with the macro above will 
reference only the first set in the group.

Note that you can use the set operations for fast pattern matching appli-
cations.  The set membership operation for example, is much faster that the 
strspan routine found in the string package.  Proper use of character sets
can produce a program which runs much faster than some of the equivalent
string operations.


Routine:  Createsets
--------------------

Category:             Character Set Routine

Registers on Entry:   no parameters passed

Registers on return:  ES:DI - pointer to eight sets

Flags affected:       Carry = 0 if no error. Carry = 1 if insufficient
		      memory to allocate storage for sets.

Example of Usage:
		      Createsets
		      jc      NoMemory
		      mov     word ptr SetPtr,   di
		      mov     word ptr SetPtr+2, es

Description:  Createsets allocates 272 bytes on the heap.   This is sufficient
	      room for eight character sets.  It then initializes the first
	      eight bytes of this storage with the proper mask values for
	      each set.  Location es:0[di] gets set to 1, location es:1[di]
	      gets 2, location es:2[di] gets 4, etc.  The Createsets routine
	      also initializes all of the sets to the empty set by clearing
	      all the bits to zero.

Include:              stdlib.a or charsets.a


Routine:  EmptySet
------------------

Category:             Character Set Routine

Registers on Entry:   ES:DI - pointer to first byte of desired set

Registers on return:  None

Flags affected:	      None

Example of Usage:
		      les     di,  SetPtr
		      add     di,  3          ; Point at 4th set in group.
		      Emptyset


Description:  Emptyset clears out the bits in a character set to zero
	      (thereby setting it to the empty set).  Upon entry, es:di must
	      point at the first byte of the character set you want to clear.
	      Note that this is not the address returned by Createsets.  The
	      first eight bytes of a character set structure are the
	      addresses of eight different sets.  ES:DI must point at one of
	      these bytes upon entry into Emptyset.

Include:              stdlib.a or charsets.a


Routine:  Rangeset
------------------

Category:             Character Set Routine

Registers on entry:   ES:DI (contains the address of the first byte of the set)
		      AL    (contains the lower bound of the items)
		      AH    (contains the upper bound of the items)

Registers on return:  None

Flags affected:       None

Example of Usage:
		      lea di, SetPtr
		      add di, 4
		      mov al, 'A'
		      mov ah, 'Z'
		      rangeset


Description:  This routine adds a range of values to a set with ES:DI as the
	      pointer to the set, AL as the lower bound of the set, and
	      AH as the upper bound of the set (AH has to be greater than
	      AL, otherwise, there will an error).

Include:              stdlib.a or charsets.a


Routine:  Addstr (l)
--------------------

Category:             Character Set Routine

Registers on Entry:   ES:DI- pointer to first byte of desired set
		      DX:SI- pointer to string to add to set (Addstr only)
		      CS:RET-pointer to string to add to set (Addstrl only)

Registers on Return:  None

Flags Affected:       None

Example of Usage:
		      les     di, SetPtr
		      add     di, 1           ;Point at 2nd set in group.
		      mov     dx, seg CharStr ;Pointer to string
		      lea     si, CharStr     ; chars to add to set.
		      addstr                  ;Union in these characters.
;
		      les     di, SetPtr      ;Point at first set in group.
		      addstrl
		      db      "AaBbCcDdEeFf0123456789",0
;


Description:  Addstr lets you add a group of characters to a set by
	      specifying a string containing the characters you want in
	      the set.  To Addstr you pass a pointer to a zero-terminated
	      string in dx:si.  Addstr will add (union) each character
	      from this string into the set.

	      Addstrl works the same way except you pass the string as
	      a literal string constant in the code stream rather than
	      via ES:DI.

Include:              stdlib.a or charsets.a


Routine:  Rmvstr (l)
--------------------


Category:             Character Set Routine


Registers on entry:   ES:DI contains the address of first byte of a set
		      DX:SI contains the address of string to be removed
			     from a set (Rmvstr only)
		      CS:RET pointer to string to add to set (Rmvstrl only)


Registers on return:  None


Flags affected:       None


Example of Usage:
		      les 	di, SetPtr
		      mov 	dx, seg CharStr
		      lea 	si, CharStr
		      rmvstr

		      mov 	dx, seg CharStr
		      lea 	si, CharStr
		      rmvstrl
		      db      	"ABCDEFG",0


Description:  This routine is to remove a string from a set with ES:DI
	      pointing to its first byte, and DX:SI pointing to the
	      string to be removed from the set.

	      For Rmvstrl, the string of characters to remove from the
	      set follows the call in the code stream.

Include:              stdlib.a or charsets.a


Routine:  AddChar
-----------------

Category:             Character Set Routine

Registers on Entry:   ES:DI- pointer to first byte of desired set
		      AL- character to add to the set

Registers on Return:  None

Flags affected:       None

Example of Usage:
		      les     di, SetPtr
		      add     di, 1           ;Point at 2nd set in group.
		      mov     al, Ch2Add      ;Character to add to set.
		      addchar


Description:  AddChar lets you add a single character (passed in AL)
	      to a set.

Include:              stdlib.a or charsets.a


Routine:  Rmvchar
-----------------

Category:             Character Set Routine

Registers on entry:   ES:DI (contains the address of first byte of a set)
		      AL    (contains the character to be removed)

Registers on return:  None

Flags affected:	      None

Example of Usage:
		      lea di, SetPtr
		      add di, 7		;Point at eighth set in group.
		      mov al, Ch2Rmv
		      Rmvchar

Description:  This routine removes the character in AL from a set.
	      ES:SI points to the set's mask byte. The corresponding
	      bit in the set is cleared to zero.

Include:              stdlib.a or charsets.a


Routine:  Member
----------------

Category:             Character Set Routine

Registers on entry:   ES:DI (contains the address of first byte of a set)
		      AL    (contains the character to be compared)

Registers on return:  None

Flags affected:       Zero flag (Zero = 1 if the character is in the set
				 Zero = 0 if the character is not in the set)

Example of Usage:
		      les di, SetPtr
		      add di, 1
		      mov al, 'H'
		      member
		      je IsInSet


Description:  Member is used to find out if the character in AL is in a set
	      with ES:DI pointing to its mask byte. If the character is in
	      the set, the zero flag is set to 1. If not, the zero flag is
	      set to zero.

Include:              stdlib.a or charsets.a


Routine:  CopySet
-----------------

Category:            Character Set Routine

Register on entry:   ES:DI- pointer to first byte of destination set.
		     DX:SI- pointer to first byte of source set.

Register on Return:  None

Flags affected:      None

Example of Usage:
		     les     di, SetPtr
		     add     di, 7           ;Point at 8th set in group.
		     mov     dx, seg SetPtr2 ;Point at first set in group.
		     lea     si, SetPtr2
		     copyset


Description:  CopySet copies the items from one set to another.  This is a
	      straight assignment, not a union operation.  After the
	      operation, the destination set is identical to the source set,
	      both in terms of the element present in the set and absent
	      from the set.


Include:             stdlib.a or charsets.a


Routine:  SetUnion
------------------

Category:            Character Set Routine

Register on entry:   ES:DI - pointer to first byte of destination set.
		     DX:SI - pointer to first byte of source set.

Register on return:  None

Flags affected:      None

Example of Usage:    les   di, SetPtr
		     add   di, 7              ;point at 8th set in group.
		     mov   dx, seg SetPtr2    ;point at 1st set in group.
		     lea   si, sSetPtr2
		     unionset


Description:  The SetUnion routine computes the union of two sets.
	      That is, it adds all of the items present in a source set
	      to a destination set.  This operation preserves items
	      present in the destination set before the SetUnion
	      operation.

Include:             stdlib.a or charsets.a


Routine:  SetIntersect
----------------------

Category:            Character Set Routine

Register on entry:   ES:DI - pointer to first byte of destination set.
		     DX:SI - pointer to first byte of source set.

Register on return:  None

Flags affected:      None

Example of Usage:
		     les   di, SetPtr
		     add   di, 7              ;point at 8th set in group.
		     mov   dx, seg SetPtr2    ;point at 1st set in group.
		     lea   si, SetPtr2
		     setintersect

Description:  SetIntersect computes the intersection of two sets, leaving
	      the result in the destination set.  The new set consists
	      only of those items which previously appeared in
	      both the source and destination sets.

Include:             stdlib.a or charsets.a


Routine:  SetDifference
-----------------------

Category:            Character Set Routine

Register on entry:   ES:DI - pointer to the first byte of destination set.
		     DX:SI - pointer to the first byte of the source set.

Register on return:  None

Flags affected:      None

Example of Usage:
		     les   di, SetPtr
		     add   di, 7               ;point at 8th set in group.
		     mov   dx, seg SetPtr2     ;point at 1st set in group.
		     lea   si, SetPtr2
		     setdifference


Description:  SetDifference computes the result of (ES:DI) := (ES:DI) -
	      (DX:SI).  The destination set is left with its original
	      items minus those items which are also in the source set.

Include:             stdlib.a or charsets.a


Routine:  Nextitem
------------------

Category:             Character Set Routine

Registers on entry:   ES:DI (contains the address of first byte of the set)

Registers on return:  AL (contains the first item in the set)

Flags affected:       None

Example of Usage:
		      les di, SetPtr
		      add di, 7		;Point at eighth set in group.
		      nextitem


Description:  Nextitem is the routine to search the first character (item)
	      in the set with ES:DI pointing to its mask byte. AL will
	      return the character in the set. If the set is empty, AL
	      will contain zero.

Include:              stdlib.a or charsets.a


Routine:  Rmvitem
-----------------

Category:             Character Set Routine

Registers on entry:   ES:DI (contains the address fo first byte of the set)

Registers on return:  AL (contains the first item in the set)

Flags affected:       None

Example of Usage:
		      les di, SetPtr
		      add di, 7
		      rmvitem

Description:  Rmvitem locates the first available item in the set and
	      removes it with ES:DI pointing to its mask byte. AL will
	      return the item removed. If the set is empty, AL will
	      return zero.

Include:              stdlib.a or charsets.a



Floating Point Routines
-----------------------

The floating point routines provide a basic floating point package for
80x86 assembly language users.  The floating point package deals with
four different floating point formats: IEEE 32-bit, 64-bit, and 80-bit
formats, and an internal 81-bit format.  The external formats mostly
support the IEEE standard except for certain esoteric values such as
denormalized numbers, NaNs, infinities, and other such cases.

The package provides two "pseudo-registers", a floating point accumulator
and a floating point operand.  It provides routines to load and store these
pseudo-registers from memory operands (using the various formats) and then
all other operations apply to these two operands.  All computations use the
internal 81-bit floating point format.  The package automatically converts
between the internal format and the external format when loading and storing
values.

Do not write code which assumes the internal format is 81 bits.  This format
will change in the near future when I get a chance to add guard bits to
all the computations.  If your code assumes 81 bits, it will break at that
point.  Besides, there is no reason your code should count on the size of
the internal operations anyway.  Stick with the IEEE formats and you'll
be much better off (since your code can be easily upgraded to deal with
numeric coprocessors).

WARNING: These routines have not been sufficiently tested as of 10/10/91.
Use them with care.  Report any problems with these routines to Randy Hyde
via the electronic addresses provided in this document or by sending a
written report to UC Riverside.  As I get more time, I will further test
these routines and add additional functions to the package.

					*** Randy Hyde



Routine:  lsfpa
---------------

Category:             Floating point Routine

Registers on entry:   ES:DI points at a single precision (32-bit) value to load

Registers on return:  None

Flags affected:       None

Example of Usage:
			les di, FPValue
			lsfpa

Description:	LSFPA loads a single precision floating point value into the
		internal floating point accumulator.  It also converts the
		32-bit format to the internal 81-bit format used by the
		floating point package.

Include:	stdlib.a or fp.a

Routine:  ssfpa
---------------

Category:             Floating point Routine

Registers on entry:   ES:DI points at a single precision (32-bit) value where
		      this routine should store the floating point acc.

Registers on return:  None

Flags affected:       Carry set if conversion error.

Example of Usage:
			les di, FPValue
			ssfpa

Description:	SSFPA stores the floating point accumulator into a single
		precision variable in memory (pointed at by ES:DI).  It
		converts the value from the 81-bit format to the 32-bit
		value before storing the result.   The 64-bit mantissa used
		by the FP package is rounded to 24 bits during the store.
		The exponent could be out of range.  If this occurs, SSFPA
		returns with the carry flag set.

Include:	stdlib.a or fp.a


Routine:  ldfpa
---------------

Category:             Floating point Routine

Registers on entry:   ES:DI points at a double precision (64-bit) value to load

Registers on return:  None

Flags affected:       None

Example of Usage:
			les di, FPValue
			ldfpa

Description:	LDFPA loads a double precision floating point value into the
		internal floating point accumulator.  It also converts the
		64-bit format to the internal 81-bit format used by the
		floating point package.

Include:	stdlib.a or fp.a

Routine:  sdfpa
---------------

Category:             Floating point Routine

Registers on entry:   ES:DI points at a double precision (64-bit) value where
		      this routine should store the floating point acc.

Registers on return:  None

Flags affected:       Carry set if conversion error.

Example of Usage:
			les di, FPValue
			sdfpa

Description:	SDFPA stores the floating point accumulator into a double
		precision variable in memory (pointed at by ES:DI).  It
		converts the value from the 81-bit format to the 64-bit
		value before storing the result.   The 64-bit mantissa used
		by the FP package is rounded to 51 bits during the store.
		The exponent could be out of range.  If this occurs, SDFPA
		returns with the carry flag set.

Include:	stdlib.a or fp.a


Routine:  lefpa
---------------

Category:             Floating point Routine

Registers on entry:   ES:DI points at an extended precision (80-bit) value to
		      load

Registers on return:  None

Flags affected:       None

Example of Usage:
			les di, FPValue
			lefpa

Description:	LEFPA loads an extended precision floating point value into
		the internal floating point accumulator.  It also converts the
		80-bit format to the internal 81-bit format used by the
		floating point package.

Include:	stdlib.a or fp.a


Routine:  lefpal
----------------

Category:             Floating point Routine

Registers on entry:   CS:RET points at an extended precision (80-bit) value to
		      load

Registers on return:  None

Flags affected:       None

Example of Usage:
			lefpal
			dt	1.345e-3

Description:	LEFPAL loads an extended precision floating point value into
		the internal floating point accumulator.  It also converts the
		80-bit format to the internal 81-bit format used by the
		floating point package.

		Unlike LEFPA, LEFPAL gets its operand directly from the code
		stream.  You must follow the call to lefpal with a ten-byte
		(80-bit) floating point constant.
Include:	stdlib.a or fp.a

Routine:  sefpa
---------------

Category:             Floating point Routine

Registers on entry:   ES:DI points at an extended precision (80-bit) value
		      where this routine should store the floating point acc.

Registers on return:  None

Flags affected:       Carry set if conversion error.

Example of Usage:
			les di, FPValue
			sefpa

Description:	SEFPA stores the floating point accumulator into an extended
		precision variable in memory (pointed at by ES:DI).  It
		converts the value from the 81-bit format to the 80-bit
		value before storing the result.

		The exponent could be out of range.  If this occurs, SEFPA
		returns with the carry flag set.

Include:	stdlib.a or fp.a


Routine:  lsfpo
---------------

Category:             Floating point Routine

Registers on entry:   ES:DI points at a single precision (32-bit) value to load

Registers on return:  None

Flags affected:       None

Example of Usage:
			les di, FPValue
			lsfpo

Description:	LSFPA loads a single precision floating point value into the
		internal floating point operand.  It also converts the
		32-bit format to the internal 81-bit format used by the
		floating point package.

Include:	stdlib.a or fp.a


Routine:  ldfpo
---------------

Category:             Floating point Routine

Registers on entry:   ES:DI points at a double precision (64-bit) value to load

Registers on return:  None

Flags affected:       None

Example of Usage:
			les di, FPValue
			ldfpo

Description:	LDFPO loads a double precision floating point value into the
		internal floating point operand.  It also converts the
		64-bit format to the internal 81-bit format used by the
		floating point package.

Include:	stdlib.a or fp.a


Routine:  lefpo
---------------

Category:             Floating point Routine

Registers on entry:   ES:DI points at an extended precision (80-bit) value to
		      load

Registers on return:  None

Flags affected:       None

Example of Usage:
			les di, FPValue
			lefpo

Description:	LEFPO loads an extended precision floating point value into
		the internal floating point operand.  It also converts the
		80-bit format to the internal 81-bit format used by the
		floating point package.

Include:	stdlib.a or fp.a


Routine:  lefpol
----------------

Category:             Floating point Routine

Registers on entry:   CS:RET points at an extended precision (80-bit) value to
		      load

Registers on return:  None

Flags affected:       None

Example of Usage:
			lefpal
			dt	1.345e-3

Description:	LEFPOL loads an extended precision floating point value into
		the internal floating point operand.  It also converts the
		80-bit format to the internal 81-bit format used by the
		floating point package.

		Unlike LEFPO, LEFPOL gets its operand directly from the code
		stream.  You must follow the call to lefpal with a ten-byte
		(80-bit) floating point constant.
Include:	stdlib.a or fp.a


Routine:  itof
--------------

Category:             Floating point Routine

Registers on entry:   AX contains a signed integer value

Registers on return:  None

Flags affected:       None

Example of Usage:
			mov	ax, -1234
			itof

Description:	ITOF converts the 16-bit signed integer in AX to a floating
		point value, storing the result in the floating point
		accumuator.

Include:	stdlib.a or fp.a


Routine:  utof
--------------

Category:             Floating point Routine

Registers on entry:   AX contains an unsigned integer value

Registers on return:  None

Flags affected:       None

Example of Usage:
			mov	ax, -1234
			itof

Description:	UTOF converts the 16-bit unsigned integer in AX to a floating
		point value, storing the result in the floating point
		accumuator.

Include:	stdlib.a or fp.a


Routine:  ultof
---------------

Category:             Floating point Routine

Registers on entry:   DX:AX contains an unsigned 32-bit integer value

Registers on return:  None

Flags affected:       None

Example of Usage:
			mov	dx, word ptr val32+2
			mov	ax, word ptr val32
			ultof

Description:	ULTOF converts the 32-bit unsigned integer in DX:AX to a
		floating point value, storing the result in the floating
		point accumuator.

Include:	stdlib.a or fp.a


Routine:  ltof
--------------

Category:             Floating point Routine

Registers on entry:   DX:AX contains a signed 32-bit integer value

Registers on return:  None

Flags affected:       None

Example of Usage:
			mov	dx, word ptr val32+2
			mov	ax, word ptr val32
			ltof

Description:	LTOF converts the 32-bit signed integer in DX:AX to a
		floating point value, storing the result in the floating
		point accumuator.

Include:	stdlib.a or fp.a


Routine:  ftoi
--------------

Category:             Floating point Routine

Registers on entry:   None

Registers on return:  AX contains 16-bit signed integer

Flags affected:       Carry is set if conversion error occurs.

Example of Usage:
			ftoi
			puti		;Print AX as integer value


Description:	FTOI converts the floating point accumulator value to a
		16-bit signed integer and returns the result in AX.  If
		the floating point number will not fit in AX, FTOI returns
		with the carry flag set.

Include:	stdlib.a or fp.a


Routine:  ftou
--------------

Category:             Floating point Routine

Registers on entry:   None

Registers on return:  AX contains 16-bit unsigned integer

Flags affected:       Carry is set if conversion error occurs.

Example of Usage:
			ftou
			putu		;Print AX as an unsigned value


Description:	FTOU converts the floating point accumulator value to a
		16-bit unsigned integer and returns the result in AX.  If
		the floating point number will not fit in AX, FTOU returns
		with the carry flag set.

Include:	stdlib.a or fp.a


Routine:  ftol
--------------

Category:             Floating point Routine

Registers on entry:   None

Registers on return:  DX:AX contains a 32-bit signed integer

Flags affected:       Carry is set if conversion error occurs.

Example of Usage:
			ftol
			putl		;Print DX:AX as integer value


Description:	FTOL converts the floating point accumulator value to a
		32-bit signed integer and returns the result in DX:AX.  If
		the floating point number will not fit in DX:AX, FTOL returns
		with the carry flag set.

Include:	stdlib.a or fp.a


Routine:  ftoul
---------------

Category:             Floating point Routine

Registers on entry:   None

Registers on return:  DX:AX contains a 32-bit unsigned integer

Flags affected:       Carry is set if conversion error occurs.

Example of Usage:
			ftoul
			putul		;Print DX:AX as an integer value


Description:	FTOUL converts the floating point accumulator value to a
		32-bit unsigned integer and returns the result in DX:AX.  If
		the floating point number will not fit in DX:AX, FTOUL returns
		with the carry flag set.

Include:	stdlib.a or fp.a


Routine:  fpadd
---------------

Category:             Floating point Routine

Registers on entry:   None

Registers on return:  None

Flags affected:       None

Example of Usage:
			fpadd

Description:	FPADD adds the floating point operand to the floating point
		accumulator leaving the result in the floating point
		accumulator.

Include:	stdlib.a or fp.a


Routine:  fpsub
---------------

Category:             Floating point Routine

Registers on entry:   None

Registers on return:  None

Flags affected:       None

Example of Usage:
			fpsub

Description:	FPSUB subtracts the floating point operand from the floating
		point accumulator leaving the result in the floating point
		accumulator.

Include:	stdlib.a or fp.a


Routine:  fpcmp
---------------

Category:             Floating point Routine

Registers on entry:   None

Registers on return:  AX contains result of comparison.

Flags affected:       As appropriate for a comparison.  You can use the
		      conditional branches to check the comparison after
		      calling this routine.  Be sure to use the *signed*
		      conditional jumps (e.g., JG, JGE, etc.).

Example of Usage:
			fpcmp
			jge	FPACCgeFPOP

Description:	FPCMP compares the floating point accumulator to the
		floating point operand and sets the flags according to the
		result of the comparison.  It also returns a value in AX
		as follows:

			AX	Result
			-1	FPACC < FPOP
			 0	FPACC = FPOP
			 1	FPACC > FPOP

Include:	stdlib.a or fp.a


Routine:  fpmul
--------------

Category:             Floating point Routine

Registers on entry:   None

Registers on return:  None

Flags affected:       None

Example of Usage:
			fpmul

Description:	FPMUL multiplies the floating point accumulator by the floating
		point operand and leaves the result in the floating point
		accumulator.

Include:	stdlib.a or fp.a


Routine:  fpdiv
---------------

Category:             Floating point Routine

Registers on entry:   None

Registers on return:  None

Flags affected:       None

Example of Usage:
			fpdiv

Description:	FPDIV divides the floating point accumulator by the floating
		point operand and leaves the result in the floating point
		accumulator.

Include:	stdlib.a or fp.a


Routine:  ftoa (2,m)
--------------------

Category:             Floating point Routine

Registers on entry:   ES:DI points at buffer to hold result (ftoa/ftoa2 only)
		      AL- Field width for floating point value.
		      AH- Number of positions to the right of the dec pt.

Registers on return:  ES:DI points at beginning of string (ftoa/ftoam only)
		      ES:DI points at zero terminating byte (ftoa2 only)

Flags affected:       Carry is set if malloc error (ftoam only)

Example of Usage:
			mov	di, seg buffer
			mov	es, di
			lea	di, buffer
			mov	ah, 2		;Two digits after "."
			mov	al, 10		;Use a total of ten positions
			ftoa



Description:	FTOA (2,M) converts the value in the floating point accumulator
		to a string of characters which represent that value.  These
		routines use a decimal representation.  The value in AH is
		the number of digits to put after the decimal point, AL
		contains the total field width (including room for the sign
		and decimal point).  The field width specification works
		just like Pascal or FORTRAN.  If the number will not fit in
		the specified field width, FTOA outputs a bunch of "#"
		characters.

		FTOA stores the converted string at the address specified by
		ES:DI upon entry.  There must be at least AL+1 bytes at this
		address.  It returns with ES:DI pointing at the start of this
		buffer.

		FTOA2 works just like FTOA except it does not preserve DI.
		It returns with DI pointing at the zero terminating byte.

		FTOAM allocates storage for the string on the heap and returns
		a pointer to the converted string in ES:DI.

		Note: this routine preserves the value in the floating point
		accumulator but it wipes out the value in the floating point
		operand.

Include:	stdlib.a or fp.a


Routine:  etoa (2,m)
--------------------

Category:             Floating point Routine

Registers on entry:   ES:DI points at buffer to hold result (etoa/etoa2 only)
		      AL- Field width for floating point value.

Registers on return:  ES:DI points at beginning of string (etoa/etoam only)
		      ES:DI points at zero terminating byte (etoa2 only)

Flags affected:       Carry is set if malloc error (etoam only)

Example of Usage:
			mov	al, 14		;Use a total of 14 positions
			etoam
			puts
			putcr
			free



Description:	ETOA (2,M) converts the value in the floating point accumulator
		to a string of characters which represent that value.  These
		routines use an exponential (scientific notation)
		representation.  AL contains the field width.  It contains
		the number of print position to use when outputting the
		number.  The field width specification works just like Pascal
		or FORTRAN.  If the number will not fit in the specified
		field width, ETOA outputs a bunch of "#" characters.

		ETOA stores the converted string at the address specified by
		ES:DI upon entry.  There must be at least AL+1 bytes at this
		address.  It returns with ES:DI pointing at the start of this
		buffer.

		ETOA2 works just like ETOA except it does not preserve DI.
		It returns with DI pointing at the zero terminating byte.

		ETOAM allocates storage for the string on the heap and returns
		a pointer to the converted string in ES:DI.

		Note: this routine preserves the value in the floating point
		accumulator but it wipes out the value in the floating point
		operand.

Include:	stdlib.a or fp.a


Routine:  atof
--------------

Category:             Floating point Routine

Registers on entry:   ES:DI points at a string containing the representation
		      of a floating point number in ASCII form.

Registers on return:  None

Flags affected:       None

Example of Usage:
			les	di, FPStr
			atof


Description:    ATOF converts the string pointed at by ES:DI into a floating
		point value and leaves this value in the floating point
		accumulator.  Legal floating point values are described
		by the following regular expression:


		{" "}* {+ | -} ( ([0-9]+ {"." [0-9]*}) | ("." [0-9]+)}
				{(e | E) {+ | -} [0-9] {[0-9]*}}

 "{}" denote optional items.
 "|"  denotes OR.
 "()" groups items together.



Include:	stdlib.a or fp.a



******************************************************************************

		File I/O Routines

	       Featuring:
		       - Opening and closing files
		       - Creating new files
		       - Deleting files
		       - Renaming files
		       - File "seeking"
		       - Blocked I/O:
			       - Reading from files using getc
			       - Writing to files using putc and puts
			       - File flushing

******************************************************************************

	       Written by:

		       Mark Radleigh
			   &

		       Brian Harvey

******************************************************************************


fcreate
*	Creates a new file.
*	If a file already exists with the requested name, it will be deleted
	and a new one will take its place.
Inputs: ES:DI- Contains address of the filename for the new file
Outputs: AX- If no error occured in creating the file, it contains a
		filehandle number assigned to this file by DOS.
	     If an error has occurred, it contains one of the following error
		codes:
		 3 - Path not found
		 4 - Too many open files
		 5 - Access denied
	 Carry flag- 0 if no error occured, 1 if error
Include:	Stdlib.a or files.a
Updated:	6/14/91		First public release

This routine creates a new file on the specified pathname. If no pathname or
device is specified, the file will be created in the current working directory.
If the file has been successfully created (No errors occured!), then this
routine returns in the ax register a number that is the DOS filehandle for
this file. Don't lose this value. You will need it when to want to close the
file (using fclose). Save the ax register in a variable after the routine call
and move the variable back into the ax register before you call the fclose
stdlib routine. See documentation for fclose for more information.

FILEHANDLE NOTICE: The filehandle returned in the ax register is not the true
DOS filehandle for this file. However, this filehandle is too be used when
calling the file routines in stdlib. In order to get the true filehandle for a
certain file, see the documentation for the stdlib routine, DOSHandle

Example:

		print
		db      "What do you desire to create?",0
		gets                            ;Get filename and store in es:di
		fcreate          	        ;Call routine to create file
		jc      error                   ;If the carry flag is set,
						;an error has occured.
		mov     fileptr, ax             ;Save the filehandle stored in
						;the ax register for future
						;use

fopen
*	Opens a file for reading or writing.
*	File I/O depends on value in the al register.
Inputs: ES:DI- Contains address of the filename for the file to be opened
	AL- Contains 0 if the file is to be opened for reading.
	    Contains 1 if the file is to be opened for writing.
Outputs: AX- If no error occured in opening the file, it contains a
		filehandle number assigned to this file by DOS.
	     If an error has occured, it contains one of the following error
		codes:
		 2 - File not found
		 4 - Too many open files
		 5 - Access denied
		 12 - Invalid access
	 Carry flag- 0 if no error occured, 1 if error
Include:	Stdlib.a or files.a
Updated:	6/14/91		First public release

This routine opens a file for reading or writing using the specified filename
and directory (any standard DOS file pathway) in ES:DI. Using the stdlib gets
routine is an excellent and advisable way (Not to mention an easy way!) of
getting the filename in ES:DI. The user must also move one of two values into
the al register before calling fopen. To open a file for reading, the al
register must contain the value 0 and to open a file for writing, the al
register must contain the value 1. If the file has been successfully opened, a
filehandle for this file assigned by DOS. Save this filehandle in some sort of
variable so you can move it back into the ax register when you call the stdlib
routine fclose to close the file. See documentation for fclose for more
information. Examine the examples below for a suggested way of saving the
filehandle (the example uses a variable called fileptr, but the name is
arbritary).

FILEHANDLE NOTICE: The filehandle returned in the ax register is not the true
DOS filehandle for this file. However, this filehandle is too be used when
calling the file routines in stdlib. In order to get the true filehandle for a
certain file, see the documentation for the stdlib routine, DOSHandle

NOTICE FOR MULTIPLE OPEN FILES: fopen, along with fcreate and fclose, allows the
				user have up to 10 files open at the same time.
				In order to keep track of all the filehandles of
				these open files, it is suggested that a
				separate variable for the filehandle of each
				of the open files be used to keep track of the
				handles.

Example for opening mulitple files (same theory applies with fcreate):
		print
		db      "What do you desire to open?",0
		gets                            ;Get filename and store in es:di
		mov     al, 1                   ;1 so the file will be opened
						;for writing
		fopen                		;Call routine to open file
		jc      error                   ;If the carry flag is set,
						;an error has occured, so quit!
		mov     fileptr, ax             ;Save the filehandle stored in
						;the ax register for future
						;use
		print
		db	"What is the 2nd file you wish to open?",0
		gets
		mov	al, 1
		fopen				;Open 2nd file for writing
		jc	error			;Error??
		mov	fileptr2,ax		;Save the filehandle for the 2nd
						;open file in a separate
						;variable


Warning:  If the file the user wishes to open already exists and the user wants
	  to open it for writing, then the data written to the file will
	  overwrite the pre-exeisting data. See docs for fseek to overcome
	  this problem.

Example:

;Open a file for writing
		print
		db      "What do you desire to open?",0
		gets                            ;Get filename and store in es:di
		mov	al, 1			;1 so the file will be opened
						;for writing


		fopen                		;Call routine to open file
		jc      error                   ;If the carry flag is set,
						;an error has occured, so quit!
		mov     fileptr, ax             ;Save the filehandle stored in
						;the ax register for future
						;use

;Open a file for reading
		print
		db      "What do you desire to open?",0
		gets                            ;Get filename and store in es:di
		mov     al, 0                   ;0 so the file will be opened
						;for reading
                fopen                		;Call routine to open file
                jc      error                   ;If the carry flag is set,
                                                ;an error has occured, so quit!
		mov     fileptr, ax             ;Save the filehandle stored in
                                                ;the ax register for future
                                                ;use

fclose
*	Closes an open file
*	Filehandle for file to be closed needs to be in the ax register
Input: AX- Contains the filehandle variable of the file to close.
Outputs: AX- If carry flag is set (error occured), then ax contains an error
		code.
	     If an error has occured, it contains the following error code:
		6 - Invalid file handle
		10 - Trouble with FREE (memory freeing routine)
	 Carry flag- 0 if no error occured, 1 if error.
Include:	Stdlib.a or files.a
Updated:	6/14/91		First public release

This routine closes an open file. Once the file is closed no I/O processes
can be made on the file. Before calling the routine, fclose, the user must
move into the ax register the filehandle assigned to this file when the file
was opened or created. The only error that can occur is if the user moved into
the ax register a filehandle that does not belong to one of the opened files.
The following example demonstrates how to close a file that was opened in one of
the fopen examples or the file that was created in the fcreate example, whose
filehandle was saved in variable called fileptr.
Example:
                mov     ax, fileptr		;Move the DOS filehandle into
						;the ax register before
						;calling routine
                fclose				;Close the file
                cmp     ax, 6			;If the filehandle was an
						;invalid filehandle jump to
						;user's code for error's
                je      error
;The following code is a continuation in the case that multiple files are
;open. The code close the second open file.
		mov	ax, fileptr2
		fclose
		cmp	ax, 6
		je	error

fwriteon
*	Turns on the write to file mode.
*	Redirects the ouput of stdlib routines putc and puts to a open file
Input: AX- Contains the filehandle of which open file to write data to.
Outputs: AX- If an error occurs in attempting to write to a file, ax will
		contain one of the following error codes:
		  5 - Accessed denied
		  6 - Invalid handle
	 Carry flag- 0 if no error occured, 1 if error.
Include:	Stdlib.a or files.a
Updated:	6/14/91		First public release

This routine turns the write to disk mode on. In other words, it redirects the
output of the stdlib putc routine so that instead of writing data to the screen,
the data is written to the file whose filehandle is in the ax register when
fwriteon is called. The routine that replaces the output device of putc's ouput
actually uses what is known as Blocked I/O. Instead of writing one character
to the file each time the user calls getc, each character is stored in a buffer
in memory. When the buffer contains 256 characters, that buffer is written to
the file as a block. The buffer is then cleared and more characters can be read
with getc. Using blocked I/O is a lot faster than one character at a time. Along
with getc, the stdlib routine gets' ouput is also redirected during fwriteon
mode, since in the stdlib, gets actually just calls getc many times.

Example:
;This code would appear in a program after a file has been created or opened
;for "gets"
		mov	ax, fileptr		;Move into ax filehandle of
						;file to write to
                fwriteon             		;Call function to redirect
                                                ;the output of putc and puts
		puts
		fwriteoff			;Turn off write to disk mode
		puts
;The puts must appear after the fwriteoff command because gets automatically
;writes whatever is in ES:DI to the screen (or in this case the file). The puts
;appearing after the writeoff, prints whatever is at ES:DI to the screen. If
;the puts were to appear in the writeoon mode, the string at ES:DI would be
;written to the file twice

Example:
;This code would appear in a program after a file has been created or opened
;for "getc"
		mov	ax, fileptr		;Move into ax filehandle of
						;file to write to
		fwriteon 		        ;Call function to redirect
						;the output of putc and puts
		getc
		putc
		fwriteoff
;Unlike in the previous example, getc and putc may both appear in the writeon
;mode. The getc will get a character from the keyboard and store it in the al
;register. Putc will then write whatever is in the al register to the
;specified open file. In order for the user to see what character they typed
;in, in the previous example, a putc should appear after the fwriteoff call.
;Since fwriteoff redirects the putc ouput back to normal (See docs for fwriteoff
;for more info) the character in al will be put on the screen.

fwriteoff
*	Turns off the write to file mode
*	Redirects the output of putc back to normal (the screen!)
		mode.
Include:	Stdlib.a or files.a
Updated:	6/14/91		First public release

This routines changes or redirects the ouput of stdlib's putc back to normal.
In other words, since the routine fwriteon made the ouput go to a disk file,
changing it back to normal means that after this routine is called, all putc's
used will print whatever is in the al register to the screen.

Example:
;This example gets a character from the keyboard, prints to a disk file and then
;prints to the screen the character in the al register that was entered.
		mov	ax, fileptr		;Move into ax filehandle of
						;file to write to
		fwriteon 		        ;Call function to redirect
						;the output of putc and puts
		getc				;Get character and store in al
		putc				;Print character in al to file
		fwriteoff			;Change ouput of putc back to
						;normal
		putc				;Prints character in al to
						;screen
fflush
*	Flushes the buffer in an opened write file to that file
Inputs:	AX- Contains Stdlib filehandle of file whose buffer is to be flushed
Outputs: None.
Include:	Stdlib.a or files.a
Updated:        6/14/91         First public release

This routine takes all data from the buffer associated with the Stdlib
filehandle passed in AX and writes it to the file. It then clears the buffer.
NOTE: This routine is automatically called on by Fclose.

freadon
*	Turns on the read from file mode
*	Changes the source of the input for the stdlib function getc
Input:	AX- Contains the filehandle of which open file to read data from.
Output: AX- If an error occurs in attempting to read from a file, ax will
		contain one of the following error codes:
		  5 - Access denied
		  6 - Invalid handle
		  8 - EOF
	Carry flag- 0 if no error occured, 1 if error.
Include:	Stdlib.a or files.a
Updated:	6/14/91		First public release

This routine turns the read from file mode on. It redirects the source from
which stdlib's getc routine gets its "character" from. Instead of getting the
character from the keyboard, the redirected getc reads a character from a opened
file. Actually, this routine uses the blocked I/O idea discussed in the writeon
documentation. This routine when called for the first time, meaning the buffer
for the current file to be read from is clear, will read it 256 characters from
(If there is that many) a file and store it in the buffer. The first character
in the buffer is then put in the al register for the user to then use for
whatever they wish. The next time the user calls getc (without calling the
freadoff rotuine yet) the next character in the buffer will be stored in the al
register. When the buffer is empty, another 256 bytes will be read into it. When
the routine freadoff is called, any getc routines called after that will get
a character from the keyboard.

Example:
		mov	ax, fileptr		;Move the filehandle of the
						;file to read from into ax
		freadon				;Turn on read mode!
		mov	cx, 10			;Set up loop to read 10
						;characters from a file and
						;print them to the screen
loop1:		getc				;Get character from buffer and
						;store in al
		jc	error			;If error in reading from file
						;jump to user's code for
						;handling code
		putc				;Print character in al to the
						;screen
		loop	loop1
		freadoff			;turn read mode off from this
						;file

freadoff
*	Turns off the read from file mode
*	Redirects the source of the data for stdlib's getc routine back to
	normal

This routine changes the source from which stdlib's getc routine gets its
"character" from back to normal. After calling this routine, instead of reading
characters from the disk, using blocked I/O, the getc routine will get
it's "character" from the keyboard.

For code example of how to use freadoff, see the example of code above for
freadon.


fseek
*	Moves the file pointer of a file to anywhere in the file
Inputs:	SI- Contains the filehandle variable of the file to be used, or "seeked"
	AL- Contains the offset from where to start the file seeking.
		0 - Seek from the begining of the file.
		1 - Seek from current pointer position
		2 - Seek backwards from the end of file
	CX:DX- Distance to move in file, in bytes.
Outputs: DX:AX- Contains the new file position if no error
	 AX- One of the following error codes if an error occured while
		"seeking":
		  1 - Invalid function
		  6 - Invalid handle
	Carry flag- 0 if no error occured, 1 if error.
Include:	Stdlib.a or files.a
Updated:	6/14/91		First public release

This routine allows the user the move the file pointer to any position within
a file. You can not move backwards in a file by having a negative value in
CX:DX. The value in CX:DX must be an unsigned integer. 

Example:
		mov	si, fileptr		;Move the filehandle of the
						;file to be seeked
		mov	al, 0			;Start moving pointer from
						;beginning of file
		xor	cx, cx			;Clear the cx register
		mov	dx, 10			;Move file pointer 10 bytes
						;into file
		fseek				;Seek!!!
		jc	error			;Jump to error code if error

To find out where the file pointer currently is in the file, first xor cx and 
dx registers and call fseek. It will return in DX:AX the file pointer's
position.
		mov	si, fileptr		;Move the filehandle of the
						;file to be seeked
		mov	al, 1			;Start moving pointer from
						;the current position
		xor	cx, cx			;Clear the cx register
		xor	dx, dx			;Clear the dx register
		fseek				;Seek!!!
		jc	error			;Jump to error code if error
						;else DX:AX contains the current
						;File pointer position.


DOSHandle
*	Returns in the ax register the true DOS filehandle for a file
Input:	AX- Contains the filehandle for the file given to the user from
		stdlib routine, fopen or fcreate
Ouputs:	AX- Contains the true filehandle given to the requested file by DOS
	AX- If an error occured, it contains the following error code:
		  1 - Invalid pseudo-filehandle
	Carry flag- 0 if no error occured, 1 if error.
Include:	Stdlib.a or files.a
Updated:	6/14/91		First public release

This routine returns in the ax register the true filehandle variable given by
DOS for a particular file. The filehandle returned when calling the stdlib
functions, fcreate and fopen, is not the true filehandle for the file used
in those routines. The value returned is a value created by the routines, which
stores the filehandles for multiple files in a structure in memory. The value
returned from those functions is actually the index into the structure to the
real filehandle for the file. This function, DOSHandle, returns from this
structure in memory the actual filehandle for a file that has been opened. 
NOTICE: This routine is only useful to those who need to know the real
filehandle of a file that has been created or opened with fopen or fcreate. For
those who will only be using the File I/O routines provided in stdlib then
this routine will be of no importance. It is provided only for advanced assembly
language programmers who with to do other things with files and need to know
their real filehandle values.

Example:
		mov	ax, fileptr		;Move into ax the filehandle
						;given to the user file fopen
						;or fcreate
		DOSHandle			;Get the true filehandle for
						;a file and store it in the
						;ax register
		mov	truehandle, ax
 
frename
*	Renames a file
Input:	DX:SI- Contains the original pathname of the file
	ES:DI- Contains the new pathname of the file
Ouputs:	AX- Contains one of the following error codes if an error occured:
	      2 - File not found
	      5 - Access denied
	      17 - Not the same device
	Carry flag- 0 if no error occured, 1 if error.
Include:	Stdlib.a or files.a
Updated:	6/14/91		First public release

This routine renames the file whose name appears in a string at DX:SI with the
name that appears at the string pointed at by ES:DI. If an error occurs, then
an appropriate error code appears in the ax register.

Example:
		print
		db	"Enter the source filename: ",0
		gets
		mov	dx, es
		mov	si, di
		print
		db	cr, lf, "Enter the new filename: ",0
		gets
		frename
		jc	error

fdel
*	Deletes a file
Input: ES:DI- Contains the address of zero terminated pathname of file
Output: AX- Contains one of the following error codes if an error occured:
	      2 - File not found
	      5 - Access denied
        Carry flag- 0 if no error occured, 1 if error.
Include:        Stdlib.a or files.a
Updated:        6/14/91         First public release

This routine deletes the filename that is in the string that ES:DI points to.

Example:
		print
		db	"Name of file to delete?",0
		gets
		fdel				;Delete the file!
		jc	error			;Jump to error code if an error




======================
Miscellaneous Routines
======================

This routines either defy categorization, or they haven't been properly
organized yet.

Mostly (like the rest of this library) they have simply been stuck here
until somebody gets the time to reorganize *everything*.




Routine:  Random
----------------

Author:		      Unknown.  Copied off a file on one of the networks,
		      tweaked, and added to the library.  Any info on the
		      original author would be appreciated.

Category:             Miscellaneous

Registers on entry:   None

Registers on return:  AX-	Contains random number

Flags affected:       None

Example of Usage:
			random	;Generate random number in AX
			puti	;Print the random number.


Description:    

 This routine computes a 16-bit random number each time you call it.  It
returns the random number in the AX register.  You may treat this as a signed
or unsigned value as it utilizes all 16 bits.  This code uses an internal
table of seed values.  If you are interested in producing repeatable sequences
of random numbers, please look at the source listings for this file.

 If you are interested in producing truly random values (well, closer than you
will get from this code by calling it right off the bat) look at the randomize
routine which tweaks the seed table based on the current time of day clock
value.

Include:	stdlib.a or misc.a


Routine:  Randomize
-------------------

Author:		      Unknown.  Copied off a file on one of the networks,
		      tweaked, and added to the library.  Any info on the
		      original author would be appreciated.

Category:             Miscellaneous

Registers on entry:   None

Registers on return:  None

Flags affected:       None

Example of Usage:
			randomize	;Randomize the seeds.
			random		;Get a brand new random number
			puti		;Print it

Description:    

Random's internal seed table is hard coded.  It was designed to produce a
sequence of random numbers with a very long period.  However, each time you
run a program using Random, it will generate the exact same sequence of
random numbers.  This could be distressing, for example, in a game where
after a while the player(s) could memorize some sequence of events based
on the random number generator.

 Randomize uses the time of day clock value to scramble the internal random
seed table.  If you call randomize before using random the first time, you
will generally get a different sequence of random numbers each time you
run the program.

 Note that it is dangerous to call randomize more than once inside any program.
The time of day clock is not a random source when invoked fairly often.
Furthermore, once the seeds are randomized, random does a pretty good job of
randomizing the results.

Include:	stdlib.a or misc.a


Routine:  cpuid
---------------

Author:		      Original implementation was supplied by Intel Corp.
		      Various modifications were made for inclusion into
		      the UCR Standard Library.

Category:             Miscellaneous

Registers on entry:   None

Registers on return:  AX-	Contains processor ID (86, 286, 386, or
				486.  Note 8088=86).

		      BX-	Contains coprocessor ID (87, 286, 387,
				or 487).  Note that a true 486 will have
				an 80487 built-in, 486sx chips, however, will
				not.

Flags affected:       None

Example of Usage:
			cpuid
			cmp	ax, 8086	;Is this an 8086?

Description:    

 For those programs which absolutely need to know the CPU in use, CPUID does
a reasonable job (in DOS real mode) of figuring this out for you.  As with
all CPU identification routines, there are bound to be some problems with this
one when operating in protected mode. But for normal DOS applications it
appears to work great.  This routine came straight from the horse's mouth
(Intel Corporation) so you can place a little more faith in it than most that
are floating around.  Intel's blessing doesn't guarantee that this routine
is perfect, though; always keep that in mind.

Include:	stdlib.a or misc.a


===================
SmartArray Routines
===================

  The SmartArray routines provide a consistent and easy to master interface to
vectors, matrices, and higher-dimension arrays.  It is a weak attempt at an
abstract, encapsulated, array data type (weak because the internal structure
is still visible, indeed, intended to be visible, to the main program).  These
routines include many operations stolen from the APL programming language.  As
such, they comprise a powerful set of matrix operations.  On the other hand,
because of their generality, they do not perform as quickly as hand-optimized
code doing the same thing.  These routines definitely represent a trade-off
between ease of use and performance.  That is not to say that these routines
are all slow.  Some operations, like matrix multiplication, are so slow that
the overhead of dealing with arrays in this fashion pales in comparison.
For other operations (e.g., extracting an element of an array), the overhead
required may far exceed the actual work performed.  This is why these routines
do provide access to the internal data structures.

The array access routines come in two basic groups: general array access and
array operations.  The general array access routines let you allocate arrays,
access arrays, initialize arrays, and copy arrays.  The array operation
routines let you perform high-level operations on the arrays.

SmartArrays are described by a descriptor (also called a "dope vector").  This
descriptor uses the following data structure:

	DopeVector	struc
	ArrayData	dd	?
	SizeInBytes	dw	?
	ElementSize	dw	?
	NumDimensions	dw	?
	DimensionList	dw	?	;One word for each dimension
	DopeVector	ends

The first double word is a pointer to the actual array data.  This is typically
(though not necessarily) allocated somewhere on the heap with malloc.  The
SmartArrays package stores all multi-dimensional arrays in row major order.

The second field above, SizeInBytes, gives the total size of the array data.
The SmartArray routines use this field for block copies and other operations
where it's nice to know the actual size of the array, in bytes.  Although
SmartArrays are typically allocated on the heap, there is no guarantee of this.
In particular, the SmartArray routines make no assumptions about free bytes
immediately following the array's data.  The SmartArray routines only
manipulate the specified number of bytes when treating the array as a whole.

The ElementSize field gives the number of bytes per array element.  Any value
may go here, but the SmartArrays package handles 1, 2, 4, 8, and 10 byte
elements best (especially 1, 2, and 4 byte element sizes).  Since most arrays
use one of these sizes, you're in great shape.

The NumDimensions field is an small integer which gives the number of dimen-
sions in this array.

The DimensionList is an array (despite its declaration) containing the number
of elements specified in the NumDimensions field.  Each entry is a word giving
the number of array elements in that dimension.



The SmartArrays package current defines the following error codes (which also
appear as equates in the stdlib.a files):

AryNoError	=	0			;Should never occur
AryTypeMismatch	=	1			;Array type mismatch
AryOverflow	=	2			;Arithmetic overflow
AryDiv0		=	3			;Division by zero
AryIllegalOp	=	4			;Illegal operation on array
AryBounds	=	5			;Array index error
AryMemory	=	6			;Memory allocation error
AryBadDV	=	7			;Illegal dope vector
AryNull		=	8			;Null pointer to array data


If an error occurs, the SmartArray routines return with the carry set and
the error code in AX.  If no error occurs, then the SmartArray routines return
with the carry flag clear.  This is assuming that you have *not* defined the
"AryErrorAbort" symbol before the "include stdlib.a" statement in your program.
If you define the "AryErrorAbort" symbol before the include, the calls to the
SmartArray routines emit some additional code which checks for any errors.  If
an error occurs in this case, the system will print an appropriate error
message and abort the program.

In addition to the array dope vector structure, the stdlib.a files
also contain a macro for declaring SmartArrays within your program.  Although
it is perfectly possible to allocate dope vectors on the heap (and, indeed,
this is a common occurrence), more often than not it is possible to allocate
the dope vectors, and even the array data, in your data segment.  The
SmartArrays package provides a macro, "array", to specifically aid in this
task.  The array macro takes the following parameters:

	array	name, element_size, dimension_list, opt_initial_values

The name is the label you wish to attach to this smart array data structure.
This must be a valid assembly language symbol.  Note that the symbol must
*not* appear in the normal label field.  The macro does the processing of this
label and it must appear as a parameter to the macro.

The element_size parameter must be an integer value which is the number of
bytes to allocate for each array element.

The dimension_list parameter is a list of numbers, separated by commas and
surrounded by "<" and ">" which list the number of elements in each array
dimension.  This list must not be empty and none of the dimension values should
be zero.

The optional initial values is another list of values surrounded by "<" and
">".  This parameter is optional and need not be present.  If absent, the
array macro generates a dope vector *only*.  It initializes the array data
pointer field to NULL.  If there are values present in the initial values
list, the array macro will allocate storage for the array immediately following
the dope vector and initializes the array elements to the value(s) in the
initial value list.  If there are too many items in the initial values list,
the array macro ignores the extra values.  If there are too few items, the
array macro reuses the values from the beginning of the list (over and over
again, if necessary).

Some examples (no initial values):


a1:array [0..1,0..1] of integer2;

	array	a1, 2, <2,2>


a2:array [0..7] of unsigned4;

	array	a2, 4, <8>

a3:array [0..3,0..3,0..3] of real8;

	array	a3, 8, <4,4,4>


Some examples with initial values:

	array	b1, 2, <4>, <1,2,3,4>

	array	b2, 2, <3>, <1,2,3,4>	;ignores "4"

	array	b3, 2, <4>, <1,2,3>	;Generates 1,2,3,1

	array	b4, 2, <4,4>, <1,0,0,0,0>

The last example generates the following identity matrix:

		1 0 0 0
		0 1 0 0
		0 0 1 0
		0 0 0 1

The array macro reuses initial values once it exhausts the list.  It also fills
the array in row-major order (that is, it fills up the array a row at a time).
Since each row in b4 is four bytes long and the initial values list contains
five bytes, the first pass through the initial values list creates the follow-
ing:

		1 0 0 0
		0 x x x
		x x x x
		x x x x

Since the initialization is not complete, the second pass through the initial
values list generates:

		1 0 0 0
		0 1 0 0
		0 0 x x
		x x x x

and so on.  It is important to note that the array macro ignores row/column
boundaries while initializing the array.  Array simply treats each array as
a one-dimensional object during initialization.

The array routines themselves come in three basic forms: general array manip-
ulation routines which operate on arrays of any size or dimension, vector
operations which operate only on single dimension arrays, and matrix operations
which operate on two-dimensional arrays.  General array operations typically
begin with the letters "Ary", vector operations usually begin with "vect", and
matrix routines usually begin with the letters "Mat".  All of these routines,
despite their name, belong to the SmartArrays package.



Interrupt-Driven Serial Port I/O Package
========================================

One major problem the the PC's BIOS is the lack of good interrupt driven
I/O support for the serial port.  The BIOS provides a mediocre set of polled
I/O facilities, but completely drops the ball on interrupt driven I/O.

This set of routines in the standard library provides polled I/O support
to read and set the registers on the 8250 (or other comparable chip, e.g.,
16450) as well as read and write data (polled).  In addition, there are
a pair of routines to initialize and disable the interrupt system as well
as perform I/O using interrupts.

Typical polled I/O session:

1. Initialize chip using polled I/O routines.
2. Read and write data using ComRead and ComWrite routines.

Typical interrupt driven I/O session:

1. Initialize chip using polled I/O routines.
2. Read and write data using ComIn and ComOut routines.

Of course, all the details of serial communications cannot be discussed
here- it's far too broad a subject.  These routines, like most in the
library, assume you know what you're doing.  They just make it a little
easier on you.  If you don't understand anything about serial communications,
you *might* be able to use these routines, but they were not written with
that audience in mind.  There are several good references on serial communi-
cations; "C Programmer's Guide to Serial Communications" comes to mind.  If
you've never looked at the 8250 or comparable chips before, you might want
to take a look at a reference such as this one if the routines in this
section don't make much sense.

Note: This routines are set up to use the COM1: hardware port.  See the
source listings if you want to access a different serial port.  Perhaps in
a future release we will modify this code to work with any serial port.


Routine:  ComBaud
-----------------

Author:		      	Randall Hyde

Category:		Serial Communications

Registers on entry:   	AX-	BPS (baud rate): 110, 150, 300, 600, 1200,
						 2400, 4800, 9600, 19200

Registers on return:  	None

Flags affected:       	None

Example of Usage:
			mov	ax, 9600	;Set system to 9600 bps
			ComBaud
Description:

ComBaud programs the serial chip to change its "baud rate" (technically,
it's "bits per second" not baud rate).  You load AX with the appropriate
bps value and call ComBaud, as above.  Note: if AX is not one of the legal
values, ComBaud defaults to 19.2kbps.

Include:	ser.a or stdlib.a

Routine:  ComStop
-----------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	AX-	# of stop bits (1 or 2)

Registers on return:  	None

Flags affected:       	None

Example of Usage:
			mov	ax, 2		;Set system to send 2 stop bits
			ComStop
Description:

ComStop programs the serial chip to transmit the specifed number of stop
bits when sending data.  You load AX with the appropriate value and call
ComStop, as above.  Note that this only affects the output data stream. The
serial chip on the PC will always work with one incoming stop bit, regardless
of the setting.  Since additional stop bits slow down your data transmission
(by about 10%) and most devices work fine with one stop bit, you should
normally program the chip with one stop bit unless you encounter some
difficulties.  The setting of this value depends mostly on the system you
are connecting to.

Include:	ser.a or stdlib.a

Routine:  ComSize
-----------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	AX-	# of data bits to transmit (5, 6, 7, or 8)

Registers on return:  	None

Flags affected:       	None

Example of Usage:
			mov	ax, 8	;Set system to send 8 data bits
			ComSize
Description:

ComSize programs the serial chip to transmit the specifed number of data
bits when sending data.  You load AX with the appropriate value and call
ComSize, as above.  The setting of this value depends mostly on the system
you are connecting to.

Include:	ser.a or stdlib.a

Routine:  ComParity
-------------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	AX-    Bits 0, 1, and 2 are defined as follows:
			       bit 0- 1 to enable parity, 0 to disable.
			       bit 1- 0 for odd parity, 1 for even.
			       bit 2- Stuck parity bit.  If 1 and bit 0 is 1, then the parity bit
				      is always set to the inverse of bit 1.

Registers on return:  	None

Flags affected:       	None

Example of Usage:
			mov	ax, 0	;Set NO parity
			ComParity
			 .
			 .
			 .
			mov	ax, 11b	;Set even parity
			ComParity
Description:

ComParity programs the serial chip to use various forms of parity error
checking.  If bit zero of AX is zero, then this routine disables parity
checking and transmission.  In this case, ComParity ignores the other
two bits (actually, the 8250 ignores them, ComParity just passes them
through).  If bit zero is a one, and bit two is a zero, then bit #1
defines even/odd parity during transmission and receiving.  If bit #0
is a one and bit two is a one, then the 8250 will always transmit bit #1
as the parity bit (forced on or off).

Include:	ser.a or stdlib.a

Routine:  ComRead
-----------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	None

Registers on return:  	AL-	Character read from port

Flags affected:       	None

Example of Usage:
			ComRead
			mov	Buffer, al

Description:

ComRead polls the port to see if a character is available in the on-chip
data register.  If not, it waits until a character is available.  Once
a character is available, ComRead reads it and returns this character in
the AL register.

Warning: do *not* use this routine while operating in the interrupt mode.
This routine is for polled I/O only.

Include:	ser.a or stdlib.a

Routine:  ComWrite
------------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	AL-	Character to write to port

Registers on return:  	None

Flags affected:       	None

Example of Usage:
			mov	al, 'a'
			ComWrite

Description:

ComWrite polls the port to see if the transmitter is busy.  If so, it waits
until the current transmission is through.  Once the 8250 is done with the
current character, ComWrite will put the character in AL into the 8250
transmit register.

Warning: do *not* use this routine while operating in the interrupt mode.
This routine is for polled I/O only.

Include:	ser.a or stdlib.a

Routine:  ComTstIn
------------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	None

Registers on return:  	AL=0 if no char available, 1 if char available

Flags affected:       	None

Example of Usage:

		Wait4Data:	ComTstIn
				cmp	al, 0
				je	Wait4Data

Description:

ComTstIn polls the port to see if any input data is available.  If so,
it returns a one in AL, else it returns a zero.

Warning: do *not* use this routine while operating in the interrupt mode.
This routine is for polled I/O only.

Include:	ser.a or stdlib.a

Routine:  ComTstOut
-------------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	None

Registers on return:  	AL = 1 if xmitr available, 0 if not

Flags affected:       	None

Example of Usage:

		WriteData:	<Do Something>
				ComTstOut
				cmp	al, 0
				je	WriteData
				mov	al, 'a'
				ComWrite

Description:

ComTstIn polls the port to see if the transmitter is currently busy.  If so,
it returns a zero in AL, else it returns a one.

Warning: do *not* use this routine while operating in the interrupt mode.
This routine is for polled I/O only.

Include:	ser.a or stdlib.a

Routine:  ComGetLSR
-------------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	None

Registers on return:  	AL = LSR value

Flags affected:       	None

Example of Usage:

			ComGetLSR
			<do something with value in LSR>
Description:

Reads the LSR (line status register) and returns this value in AL.  The
LSR using the following layout.

 Line Status Register (LSR):

 bit 0-	Data Ready
 bit 1-	Overrun error
 bit 2-	Parity error
 bit 3-	Framing error
 bit 4-	Break Interrupt
 bit 5-	Transmitter holding register is empty.
 bit 6-	Transmit shift register is empty.
 bit 7-	Always zero.

Warning: In general, it is not a good idea to call this routine while
the interrupt system is active.  It won't hurt anything, but the value
you get back may not reflect properly upon the last/next character you
read.

Include:	ser.a or stdlib.a

Routine:  ComGetMSR
-------------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	None

Registers on return:  	AL = MSR value

Flags affected:       	None

Example of Usage:

			ComGetMSR
			<do something with value in MSR>
Description:

The MSR (modem status register) bits are defined as follows:

 Modem Status Register (MSR):

 bit 0-	Delta CTS
 bit 1-	Delta DSR
 bit 2-	Trailing edge ring indicator
 bit 3-	Delta carrier detect
 bit 4-	Clear to send
 bit 5-	Data Set Ready
 bit 6-	Ring indicator
 bit 7-	Data carrier detect


Warning: In general, it is not a good idea to call this routine while
the interrupt system is active.  It won't hurt anything, but the value
you get back may not reflect properly upon the last/next character you
read.

Include:	ser.a or stdlib.a

Routine:  ComGetMCR
-------------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	None

Registers on return:  	AL = MCR value

Flags affected:       	None

Example of Usage:

			ComGetMCR
			<do something with value in MCR>
Description:

The MCR (modem control register) bits are defined as follows:

 Modem Control Register (MCR):

 bit 0-		Data Terminal Ready (DTR)
 bit 1-		Request to send (RTS)
 bit 2-		OUT 1
 bit 3-		OUT 2
 bit 4-		Loop back control.
 bits 5-7-	Always zero.


The DTR and RTS bits control the function of these lines on the 8250.
They are useful mainly for polled I/O handshake operations (though they
*could* be used with interrupt I/O, it's rarely necessary unless your
main application is *really* slow and the data is coming in real fast.

Out1 and Out2 control output pins on the 8255.  Keep in mind that the OUT1
pin enables/disables the serial port interrupts.  Play with this *only* if
you want to control the interrupt enable.

Loop back control is mainly useful for testing the serial port or checking
to see if a serial chip is present.

Include:	ser.a or stdlib.a

Routine:  ComSetMCR
-------------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	AL = new MCR value

Registers on return:  	None

Flags affected:       	None

Example of Usage:

			mov	al, NewMCRValue
			ComSetMCR

Description:

This routine writes the value in AL to the modem control register.  See
ComGetMCR for details on the MCR register.

Include:	ser.a or stdlib.a

Routine:  ComGetLCR
-------------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	None

Registers on return:  	AL = LCR value

Flags affected:       	None

Example of Usage:

			ComGetLCR
			<do something with value in LCR>
Description:

The LCR (line control register) bits are defined as follows:

 Line Control Register (LCR):

 bits 0,1-	Word length (00=5, 01=6, 10=7, 11=8 bits).
 bit 2-		Stop bits (0=1, 1=2 stop bits [1-1/2 if 5 data bits]).
 bit 3-		Parity enabled if one.
 bit 4-		0 for odd parity, 1 for even parity (assuming bit 3 = 1).
 bit 5-		1 for stuck parity.
 bit 6-		1=force break.
 bit 7-		1=Divisor latch access bit.  0=rcv/xmit access bit.

Since the standard library provides routines to initialize the serial chip
(which is the purpose of this port) you shouldn't really mess with this
port at all.  You may, however, use ComGetLCR to see what the current
settings are before making any changes.

Warning: (applies mainly to ComSetLCR) DO NOT, UNDER ANY CIRCUMSTANCES,
CHANGE THE DIVISOR LATCH ACCESS BIT WHILE OPERATING IN INTERRUPT MODE.
The interrupt service routine assumes the rcv/xmit register is mapped in
whenever an interrupt occurs.  If you must play with the divisor latch,
turn off interrupts before changing it.  Always set the divisor latch
access bit back to zero before turning interrupts back on.

Include:	ser.a or stdlib.a

Routine:  ComSetLCR
-------------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	AL = new LCR value

Registers on return:  	None

Flags affected:       	None

Example of Usage:

; If this maps in the divisor latch, be sure we're not operating with
; serial interrupts!

			mov	al, NewLCRValue
			ComSetLCR

Description:

This routine writes the value in AL to the line control register.  See
ComGetLCR for details on the LCR register.  Especially note the warning
about the divisor latch access bit.

Include:	ser.a or stdlib.a

Routine:  ComGetIIR
-------------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	None

Registers on return:  	AL = IIR value

Flags affected:       	None

Example of Usage:

			ComGetIIR
			<do something with value in IIR>
Description:

The IIR (interrupt identification register) bits are defined as follows:

 Interrupt ID Register (IIR):

 bit 0-		No interrupt is pending (interrupt pending if zero).
 bits 1,2-	Binary value denoting source of interrupt:
			00-Modem status
			01-Transmitter Hold Register Empty
			10-Received Data Available
			11-Receiver line status
 bits 3-7	Always zero.

This value is of little use to anyone except the interrupt service routine.
The ISR is the only code which should really access this port.

Include:	ser.a or stdlib.a

Routine:  ComGetIER
-------------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	None

Registers on return:  	AL = IER value

Flags affected:       	None

Example of Usage:

			ComGetIER
			<do something with value in IER>
Description:

The IER (line control register) bits are defined as follows:

 Interupt enable register (IER):

		If one:
 bit 0-		Enables received data available interrupt.
 bit 1-		Enables transmitter holding register empty interrupt.
 bit 2-		Enables receiver line status interrupt.
 bit 3-		Enables the modem status interrupt.
 bits 4-7-	Always set to zero.

Normally, the interrupt initialization procedure sets up this port.  You may
read or change its value as you deem necessary to control the types of
interrupts the system generates.  Note that the interrupt service routine
(ISR) in the library ignores errors.  You will need to modify the ISR if you
need to trap errors.

Include:	ser.a or stdlib.a

Routine:  ComSetIER
-------------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	AL = new IER value

Registers on return:  	None

Flags affected:       	None

Example of Usage:

			mov	al, NewIERValue
			ComSetIER

Description:

Writes the value in AL to the IER.  See ComGetIER for more details.

Include:	ser.a or stdlib.a

Routine:  ComInitIntr
---------------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	None

Registers on return:  	None

Flags affected:       	None

Example of Usage:

			ComInitIntr

Description:

Sets up the chip to generate interrupts and programs the PC to transfer
control to the library serial interrupt service routine when an interrupt
occurs.  Note that other than interrupt initialization, this code does not
initialize the 8250 chip.

Include:	ser.a or stdlib.a

Routine:  ComDisIntr
--------------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	None

Registers on return:  	None

Flags affected:       	None

Example of Usage:

			ComDisIntr

Description:

This routine uninstalls the ISR and programs the chip to stop the generation
of interrupts.  You must call ComInitIntr after calling this routine to
turn the interrupt system back on.

Include:	ser.a or stdlib.a

Routine:  ComIn
---------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	None

Registers on return:  	AL=character read from buffer or port

Flags affected:       	None

Example of Usage:

			ComIn
			<Do something with AL>

Description:

ComIn is the input routine associated with interrupt I/O.  It reads the
next available character from the serial input buffer.  If no characters
are avialable in the buffer, it waits until the system receives one before
returning.

Include:	ser.a or stdlib.a

Routine:  ComOut
----------------

Author:		      	Randall Hyde

Category:             	Serial Communications

Registers on entry:   	AL=Character to output

Registers on return:  	None

Flags affected:       	None

Example of Usage:

			<Get character to write into AL>
			ComOut

Description:

ComOut is the output routine associated with interrupt I/O.  If the serial
transmitter isn't currently busy, it will immediately write the data to the
serial port.  If it is busy, it will buffer the character up.  In most cases
this routine returns quickly to its caller.  The only time this routine
will delay is if the buffer is full can you cannot add any additional
characters to it.

Include:	ser.a or stdlib.a

Linked list manipulation routines
=================================

These routines manipulate items in a linked list.  Internally the system
represents the data as a doubly linked list, although your program should
not rely on the internal structure of the data structure.

There are two structures of interest defined in the LISTS.A file: LIST
and NODE.  Use variables of type LIST to create brand new lists.  Use
variables of type NODE to hold the entries in the list.

These structures take the following form:

List		struc
Size		dw	?		;Size, in bytes, of a node in the list
Head		dd	0		;Ptr to start of list
Tail		dd	0		;Ptr to end of list
Current		dd	0		;Pointer to current node
List		ends

Node		struc
Next		dd	?		;Ptr to next node in list
Prev		dd	?		;Ptr to prev node in list
NodeData	db	??		;Data immediately follows Prev
Node		ends


There are two ways to create a new list: statically or dynamically.
Consider static allocation first.  In this case, you create a list variable
by declaring an object of type LIST in a data segment, e.g.,

MyList		list	<25>

You *must* supply the size (in bytes) of a node in the list.  Note that the
size should *not* include the eight bytes required for the next and prev
pointers.  This allows you to change the internal structure of the list
(e.g., to a singly linked list) without having to change other code.  You
can easily compute this as follows:

MyList		list	<(sizeof MyNode) - (sizeof Node)>

When you declare lists in this fashion, the definition automatically
initializes the list to an empty list.

You can also create a list dynamically by calling the CreateList routine.
To CreateList you must pass the size of a Node (not including the pointers)
in the CX register.  It allocates storage for the list variable on the
heap and returns a pointer to this new (empty) list in es:di.

		mov	cx, (sizeof MyNode) - (sizeof Node)
		CreateList
		mov	word ptr MyListPtr, di
		mov	word ptr MyListPtr+2, es


To create nodes for your list, you should "overload" the NODE definition
appearing the in LISTS.A file.  This works best under MASM 6.0 and TASM 3.0,
which support object-oriented programming, though it isn't that difficult to
accomplish with other assemblers.  A mechanism compatible with *all*
assemblers follows:

To create a brand new node is easy,  just do the following:

MyNode		struc
		db	(size Node) dup (0) 	;Inherit all fields from NODE.
Field1		db	?			;User-supplied fields for this
Field2		dw	?			; particular node type.
Field3		dd	?			;  "    "     "    "
Field4		real4	3.14159			;  "    "     "    "
MyNode		ends

Note that the NODE fields must appear *first* in the data structure.
The list manipulation routines assume that the list pointers in NODE appear
at the beginning of the structure.

The CurrentNode field of the list data structure points at a "current" node
in the list.  The current node is the last node operated on in the case of
insert, append, peek, etc.  In the event a node is removed, the current node
will be the next node after the node removed.  In general, the current node
can be thought of as a "cursor" which wanders through the list according to
the operations occuring.  Since most list operations occur on the next node
in a list, keeping the CurrentNode field updated speeds up access to the
list.

You can use the following routines to implement the corresponding data
structures (which can all be implemented using lists):

FIFO Queues:

AppendLastm, AppendLast, Remove1st, and Peek1st (technically, using Peek1st
is cheating, but so what).



Deques (double ended queues):

All the FIFO routines plus InsertFirstm, InsertFirst, RemoveLast, and
PeekLast (PeekLast is cheating too).


Lists:

All of the above plus InsertCur, InsertmCur, AppendCur, AppendmCur,
RemoveCur, Insert, Insertm, Append, Appendm, Remove, Index, RotateLeft,
RotateRight, NextNode, and PrevNode.

For those who care about such things, the UCR Standard Library implements
the list data structure using a doubly linked list.  However, it is a
true generic (encapsulated) data type and your code needed be at all
concerned about the internal structure.  Furthermore, assuming you treat
it like an encapsulated data structure, you can modify the internal list
structure and not break any programs which use the list data types.





Routine:  CreateList
--------------------

Author:		      Randall Hyde

Category:             List Manipulation

Registers on entry:   	CX-	Size of data (in bytes) to store at each node

Registers on return:  	ES:DI-	Pointer to new list variable on heap

Flags affected:       	Carry set if CreateList cannot allocate sufficient
			storage on the heap for the list variable.

Example of Usage:
			mov	cx, (sizeof MyNode) - (sizeof Node)
			CreateList
			jc	ListError
			mov	word ptr ListVarPtr, di
			mov	word ptr ListVarPtr+2, es

Description:

CreateList allocates storage for a list variable on the head and initializes
that variable to the empty list.  It also sets up the size field of the
list variable based on the value passed in the CX register.  It returns
a pointer to the newly created list in the ES:DI registers.

This routine initializes the CurrentNode field to NIL.  Any node inserted
before or after the current node will be inserted as the first node in this
case.

Include:	lists.a or stdlib.a



Routine:  AppendLast (m)
------------------------

Author:		      Randall Hyde

Category:             List Manipulation

Registers on entry:   	DX:SI-	Pointer to node to add to list (AppendLast)
			DX:SI-	Pointer to block of data (sans list stuff)
				to add to end of list (AppendLastm)
			ES:DI-	Pointer to list.

Registers on return:  	ES:DI-	Pointer to list.

Flags affected:       	Carry set if AppendLastm cannot allocate sufficient
			storage on the heap for the list variable.

Examples of Usage:

; Append data statically declared as ANode to the end of the list pointed at
; by the list variable "ListVar".

			ldxi	ANode
			les	di, ListVar
			AppendLast

; Create a node from the data at address "MyData".  Build the node on the
; heap and append this node to the end of the list pointed at by ListVar.

			ldxi	MyData
			les	di, ListVar
			AppendLastm
			jc	BadListError

Description:

AppendLast and AppendLastm add a node to the end of a list.  AppendLast works
with whole nodes.  It is useful, for example when moving a node from one
list to another or when dealing with nodes that were created statically in
the program.  It requires nodes properly declared using the NODE data type
in the LIST.A include file.

AppendLastm builds a new node on the heap and appends this node to the end
of the specified list.  The difference between AppendLastm and AppendLast is
that AppendLastm does not require a predefined node.  Instead, DX:SI points
at the data for the node (the number of bytes is specified by the ListSize
field of the LIST data type).  AppendLastm allocates memory, copies the data
from DX:SI to the data field of the new node, and then links in the new node
to the specified list.

The new node added to the list becomes the CurrentNode.

Include:	stdlib.a or lists.a



Routine:  Remove1st
-------------------

Author:		      	Randall Hyde

Category:             	List Manipulation

Registers on entry:   	ES:DI-	Pointer to list variable.

Registers on return:	DX:SI-	Pointer to node removed from the front of
				the list (NIL if nothing in list).

Flags affected:       	Carry set if the list was empty.

Examples of Usage:

; The following loop removes all the items from a list and processes each
; item.

DoAllOfList:		les	di, MyList
			Remove1st
			jc	DidItAll
			<manipulate this item>
			jmp	DoAllOfList
DidItAll:


Description:

Remove1st removes the first item from a list and returns a pointer to that
item in DX:SI.  If the list was empty, then it returns a NIL pointer in
DX:SI and returns with the carry flag set.

Note that you can use the AppendLast(m) and Remove1st routines to implement
and manipulate a FIFO queue data structure.  Peek1st is another useful
routine which returns the first item on a list without removing it from
the list.

The second node in the list (the one after the node just removed) becomes
the new CurrentNode.  If there are no additional nodes in the list, the
CurrentNode variable gets set to NIL.

Include:	stdlib.a or lists.a




Routine:  Peek1st
-----------------

Author:		      	Randall Hyde

Category:             	List Manipulation

Registers on entry:   	ES:DI-	Pointer to list variable.

Registers on return:	DX:SI-	Pointer to node at the beginning of
				the list (NIL if nothing in list).

Flags affected:       	Carry set if the list was empty.

Examples of Usage:

			les	di, MyList
			Peek1st
			jc	NothingThere

Description:

Peek1st is similar to Remove1st in that it returns a pointer to the first
item in a list (NIL if the list is empty).  However, it does not remove the
item from the list.  This is useful for performing a "non-destructive" read
of the first item in a FIFO queue.

This routine sets the CurrentNode field to the first node in the list.

Include:	stdlib.a or lists.a



Routine:  Insert1st (m)
-----------------------

Author:		      Randall Hyde

Category:             List Manipulation

Registers on entry:   	DX:SI-	Pointer to node to add to list (Insert1st)
			DX:SI-	Pointer to block of data (sans list stuff)
				to add to end of list (Insert1stm)
			ES:DI-	Pointer to list.

Registers on return:  	ES:DI-	Pointer to list.

Flags affected:       	Carry set if Insertm cannot allocate sufficient
			storage on the heap for the list variable.

Examples of Usage:

; Insert data statically declared as ANode to the beginning of the list
; pointed at by the list variable "ListVar".

			ldxi	ANode
			les	di, ListVar
			Insert1st

; Create a node from the data at address "MyData".  Build the node on the
; heap and insert this node to the beginning of the list pointed at by
; ListVar.

			ldxi	MyData
			les	di, ListVar
			Insert1stm
			jc	BadListError

Description:

Insert1st and Insert1stm add a node to the beginning of a list.  Insert1st
works with whole nodes.  It is useful, for example when moving a node from one
list to another or when dealing with nodes that were created statically in
the program.  It requires nodes properly declared using the NODE data type
in the LISTS.A include file.

Insert1stm builds a new node on the heap and inserts this node to the start
of the specified list.  The difference between Insert1stm and Insert1st is
that Insert1stm does not require a predefined node.  Instead, DX:SI points
at the data for the node (the number of bytes is specified by the ListSize
field of the LIST data type).  Insert1stm allocates memory, copies the data
from DX:SI to the data field of the new node, and then links in the new node
to the specified list.

Note that Insert1st/Insert1stm can be used to create Deque data structures.

The newly inserted node becomes the CurrentNode in the list.

Include:	stdlib.a or lists.a



Routine:  RemoveLast
--------------------

Author:		      	Randall Hyde

Category:             	List Manipulation

Registers on entry:   	ES:DI-	Pointer to list variable.

Registers on return:	DX:SI-	Pointer to node removed from the end of
				the list (NIL if nothing in list).

Flags affected:       	Carry set if the list was empty.

Examples of Usage:

; The following loop removes all the items from a list and processes each
; item.

DoAllOfList:		les	di, MyList
			RemoveLast
			jc	DidItAll
			<manipulate this item>
			jmp	DoAllOfList
DidItAll:


Description:

RemoveLast removes the last item from a list and returns a pointer to that
item in DX:SI.  If the list was empty, then it returns a NIL pointer in
DX:SI and returns with the carry flag set.

Note that you can use the Insert1st(m) and RemoveLast routines to implement
and manipulate a DEQUE queue data structure (along with the FIFO routines:
AppendLast(m), Rmv1st, and Peek1st).  PeekLast is another useful
routine which returns the last item on a list without removing it from
the list.

The last node in the list (the one before the node just removed) becomes the
new CurrentNode in the list.  If the list is empty, CurrentNode gets set to
NIL.

Include:	stdlib.a or lists.a




Routine:  PeekLast
------------------

Author:		      	Randall Hyde

Category:             	List Manipulation

Registers on entry:   	ES:DI-	Pointer to list variable.

Registers on return:	DX:SI-	Pointer to node at the end of
				the list (NIL if nothing in list).

Flags affected:       	Carry set if the list was empty.

Examples of Usage:

			les	di, MyList
			PeekLast
			jc	NothingThere

Description:

PeekLast is just like Peek1st except it looks at the last node on the list
rather than the first.  It does the same job as RemoveLast except it does
not remove the node from the list.  Great for implementing Deques.

This routine also sets the CurrentNode field to point at the last node in
the list.

Include:	stdlib.a or lists.a




Routine:  InsertCur
-------------------

Author:		      	Randall Hyde

Category:             	List Manipulation

Registers on entry:   	ES:DI-	Pointer to list.
			DX:SI-	Pointer to node to insert

Examples of Usage:

			les	di, MyList
			ldxi	NewNode
			InsertCur

Description:

InsertCur inserts the node pointed at by DX:SI before the "current" node in
the list.  The current node is the last one operated on by the software.

The newly inserted node becomes the CurrentNode in the list.

Include:	stdlib.a or lists.a




Routine:  InsertmCur
--------------------

Author:		      	Randall Hyde

Category:             	List Manipulation

Registers on entry:   	ES:DI-	Pointer to list.
			DX:SI-	Pointer to data for node to insert

Flags on exit:		Carry flag is set if malloc error occurs.

Examples of Usage:

			les	di, MyList
			ldxi	DataBlock
			InsertmCur
			jc	Error

Description:

InsertmCur builds a new node on the heap (using the block of data pointed at
by DX:SI and the size of a node in the size field of the list variable) and
then inserts the new node before the "current" node in the list.  The current
node is the last one operated on by the software.

This code treats the newly inserted node as the current node.

Include:	stdlib.a or lists.a



Routine:  AppendCur
-------------------

Author:		      	Randall Hyde

Category:             	List Manipulation

Registers on entry:   	ES:DI-	Pointer to list.
			DX:SI-	Pointer to node to append

Examples of Usage:

			les	di, MyList
			ldxi	NewNode
			AppendCur

Description:

AppendCur inserts the node pointed at by DX:SI after the "current" node in
the list.  The current node is the last one operated on by the software.

The newly inserted node becomes the CurrentNode in the list.

Include:	stdlib.a or lists.a




Routine:  AppendmCur
--------------------

Author:		      	Randall Hyde

Category:             	List Manipulation

Registers on entry:   	ES:DI-	Pointer to list.
			DX:SI-	Pointer to data for node to insert.

Flags on exit:		Carry flag is set if malloc error occurs.

Examples of Usage:

			les	di, MyList
			ldxi	DataBlock
			AppendmCur
			jc	MallocError

Description:

AppendmCur builds a new node on the heap (using the block of data pointed at
by DX:SI and the size of a node in the size field of the list variable) and
then inserts the new node after the "current" node in the list.  The current
node is the last one operated on by the software.

This code treats the newly inserted node as the current node.

Include:	stdlib.a or lists.a



Routine:  RemoveCur
-------------------

Author:		      	Randall Hyde

Category:             	List Manipulation

Registers on entry:   	ES:DI-	Pointer to list.

Registers on exit:	DX:SI-	Points at node removed from list (NIL if
				no such node).

Flags on return:	Carry set if the list was empty.

Examples of Usage:

			les	di, MyList
			RemoveCur
			jc	EmptyList

Description:

RemoveCur removes the current node (pointed at by CurrentNode) from the list
and returns a pointer to this node in DX:SI.  If the list was empty, RemoveCur
returns NIL in DX:SI and sets the carry flag.

This routine modifies CurrentNode so that it points at the next item in the
list (the node normally following the current node).  If there is no such
node (i.e., CurrentNode pointed at the last node in the list upon calling
RemoveCur) then this routine stores the value of the *previous* node into
CurrentNode.  If you use this routine to delete the last node in the list,
it sets CurrentNode to NIL before leaving.

Include:	stdlib.a or lists.a



Routine:  PeekCur
-----------------

Author:		      	Randall Hyde

Category:             	List Manipulation

Registers on entry:   	ES:DI-	Pointer to list.

Registers on exit:	DX:SI-	Points at the current node (i.e., contains
				a copy of CurrentNode), NIL if the list
				is empty.

Flags on return:	Carry set if the list was empty.

Examples of Usage:

			les	di, MyList
			PeekCur
			jc	EmptyList

Description:

PeekCur simply returns CurrentNode in DX:SI (assuming the list is not empty).
If the list is empty, it returns the carry flag set and NIL in DX:SI.
It does not affect the value of CurrentNode.

Include:	stdlib.a or lists.a



Routine:  SetCur
----------------

Author:		      	Randall Hyde

Category:             	List Manipulation

Registers on entry:   	ES:DI-	Pointer to list.
			CS-	Node number of new current node.

Registers on exit:	DX:SI-	Returned pointing at selected node.
				NIL if the list is empty.  Points at the
				last node in the list if the value in CX
				is greater than the number of nodes in the
				list.

Flags on return:	Carry set if the list was empty.

Examples of Usage:

			les	di, MyList
			mov	cx, NodeNum
			SetCur
			jc	EmptyList

Description:

SetCur locates the specified node in the list and sets CurrentNode to the
address of that node. It also returns a pointer to that node in DX:SI.
If CX is greater than the number of nodes in the list (or zero) then
SetCur sets CurrentNode to the last node in the list.  If the list is
empty, SetCur returns NIL in DX:SI and returns with the carry flag set.

Include:	stdlib.a or lists.a



Routine:  Insert (m)
--------------------

Author:		      	Randall Hyde

Category:             	List Manipulation

Registers on entry:   	ES:DI-	Pointer to list.
			DX:SI-	Address of node to insert (Insert)
			DX:SI-	Pointer to data block to create node from
				(Insertm).
			CX-	Number of node to insert DX:SI in front of;
				Note that the list is one-based.  That is,
				the number of the first node in the list is
				one.  Zero corresponds to the last node in
				the list.


Flags on return:	Carry set if malloc error occurs (Insertm only).

Examples of Usage:

			les	di, MyList
			ldxi	NewNode
			mov	cx, 5
			Insert			;Inserts before Node #5.

; The following example builds a new node on the heap from the data at
; location "RawData" and inserts this before node #5 in MyList.

			les	di, MyList
			ldxi	RawData
			mov	cx, 5
			Insertm
			jc	MallocError

Description:

Insert(m) inserts a new node before a specified node in the list.  The node to
insert in front of is specified by the value in the CX register.  The first
node in the list is node #1, the second is node #2, etc.  If the value in
CX is greater than the number of nodes in the list (in particular, if CX
contains zero, which gets treated like 65,536) then Insert(m) appends the
new node to the end of the list.

Insertm allocates a new node on the heap (DX:SI points at the data fields
for the node).  If a malloc error occurs, Insertm returns the carry flag
set.

CurrentNode gets set to the newly inserted node.

Include:	stdlib.a or lists.a



Routine:  Append (m)
--------------------

Author:		      	Randall Hyde

Category:             	List Manipulation

Registers on entry:   	ES:DI-	Pointer to list.
			DX:SI-	Address of node to insert (Append)
			DX:SI-	Pointer to data block to create node from
				(Appendm).
			CX-	Number of node to insert DX:SI after;
				Note that the list is one-based.  That is,
				the number of the first node in the list is
				one.  Zero corresponds to the last node in
				the list.


Flags on return:	Carry set if malloc error occurs (Appendm only).

Examples of Usage:

			les	di, MyList
			ldxi	NewNode
			mov	cx, 5
			Append			;Inserts after Node #5.

; The following example builds a new node on the heap from the data at
; location "RawData" and inserts this after node #5 in MyList.

			les	di, MyList
			ldxi	RawData
			mov	cx, 5
			Appendm
			jc	MallocError

Description:

Append(m) inserts a new node after a specified node in the list.  The node to
insert in front of is specified by the value in the CX register.  The first
node in the list is node #1, the second is node #2, etc.  If the value in
CX is greater than the number of nodes in the list (in particular, if CX
contains zero, which gets treated like 65,536) then Insert(m) appends the
new node to the end of the list.

Appendm allocates a new node on the heap (DX:SI points at the data fields
for the node).  If a malloc error occurs, Appendm returns the carry flag
set.

CurrentNode gets set to the newly inserted node.

Include:	stdlib.a or lists.a




Routine:  Remove
----------------

Author:		      	Randall Hyde

Category:             	List Manipulation

Registers on entry:   	ES:DI-	Pointer to list.
			CX-	# of node to delete from list.

Registers on exit:	DX:SI-	Points at node removed from list (NIL if
				no such node).

Flags on return:	Carry set if the list was empty.

Examples of Usage:

			les	di, MyList
			mov	cx, NodeNumbr
			Remove
			jc	EmptyList

Description:

Remove removes the specified node (given by CX) from the list
and returns a pointer to this node in DX:SI.  If the list was empty, Remove
returns NIL in DX:SI and sets the carry flag.

This routine modifies CurrentNode so that it points at the next item in the
list (the node normally following the current node).  If there is no such
node (i.e., CurrentNode pointed at the last node in the list upon calling
Remove) then this routine stores the value of the *previous* node into
CurrentNode.  If you use this routine to delete the last node in the list,
it sets CurrentNode to NIL before leaving.

Include:	stdlib.a or lists.a


