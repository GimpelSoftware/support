
/*  stdarg.h  --  POSIX header
    Copyright 1992, Gimpel Software, All Rights Reserved
 */

#if defined(_lint) && !defined(__STDARG_H)
#define __STDARG_H

#ifndef __VA_LIST
#define __VA_LIST
typedef char *va_list;
#endif

#define va_start(a,b) ((void) ((a) = (char *) ( & (b) + 1)))
#define va_arg(a,b) (*( (b *) ( ((a) += sizeof(b)) - sizeof(b) )))
#define va_end(a)  ( (void) 0 )

#endif
