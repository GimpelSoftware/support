
/*  stdarg.h  --  ANSI header file
    Copyright 1988-90, Gimpel Software, All Rights Reserved
 */

#ifndef __STDARG_H
#define __STDARG_H

#ifndef __VA_LIST
#define __VA_LIST
typedef char *va_list;
#endif

#define va_start(a,b) ((void) ((a) = (char *) ( & (b) + 1)))
#define va_arg(a,b) (*( (b *) ( ((a) += sizeof(b)) - sizeof(b) )))
#define va_end(a)  ( (void) 0 )

#endif
