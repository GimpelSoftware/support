
/*  limits.h  --  ANSI header file
    Copyright 1988-90, Gimpel Software, All Rights Reserved
 */

#ifndef __LIMITS_H
#define __LIMITS_H

#define CHAR_BIT	8
#define CHAR_MIN        (-128)
#define CHAR_MAX        127
#define SCHAR_MAX	127
#define SCHAR_MIN	(-128)
#define UCHAR_MAX	255U
#define SHRT_MAX	32767
#define SHRT_MIN	(-32767-1)
#define USHRT_MAX	65535U
#define INT_MAX         (int) 2147483647
#define INT_MIN         (int) (-2147483647-1)
#define UINT_MAX        4294967295U
#define LONG_MAX	2147483647
#define LONG_MIN	(-2147483647-1)
#define ULONG_MAX       0xFFFFFFFF
#define MB_LEN_MAX	1

#endif
