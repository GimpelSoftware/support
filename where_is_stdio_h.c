
// The following program is intended to help the programmer
// determine in which directory stdio.h resides.
// Using this information will enable the user of PC-lint/FlexeLint
// to include the following option in his option list:
//
//              -idirectory_containing_stdio_h
//
// This program is not intended to be run but simply compiled by your
// compiler.  It is written in such a way that key variables used within
// stdio.h are predefined to equal a phrase designed to produce a
// diagnostic from within stdio.h.  This diagnostic is normally
// accompanied by a file location from which you can infer the including
// directory name.

// This will be enough to include many standard headers.  There may be
// some compiler headers or 3rd-party library headers that will not
// be a part of the directory that includes stdio.h.  In this case
// simply use the same technique using a different header file
// and a different variable (or variables).


#define _iob just a test
#define _iobuf just a test
#define fprintf just a test

#include <stdio.h>

// the rest of the program is irrelevant.

int main()
    {
    printf( "Hello world\n" );
    }
