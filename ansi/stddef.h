
/*  stddef.h  --  ANSI header file
    Copyright 1988-90, Gimpel Software, All Rights Reserved
 */

#ifndef __STDDEF_H
#define __STDDEF_H

#ifndef __PTRDIFF_T
#define __PTRDIFF_T
typedef int	ptrdiff_t;
#endif

#ifndef __SIZE_T
#define __SIZE_T
typedef unsigned size_t;
#endif

#ifndef __WCHAR_T
#define __WCHAR_T
typedef char wchar_t;
#endif

#ifndef NULL
#define NULL ((void *) 0)
#endif

#define offsetof(type,memb) ((size_t)&((type *)0)->memb)

#endif
