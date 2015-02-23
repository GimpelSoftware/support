
/*  setjmp.h  --  ANSI header file
    Copyright 1988-90, Gimpel Software, All Rights Reserved
 */

#ifndef __SETJMP_H
#define __SETJMP_H

typedef int jmp_buf[9];

void longjmp(jmp_buf , int );
int setjmp(jmp_buf );

#endif
