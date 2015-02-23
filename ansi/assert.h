
/*  assert.h  --  ANSI header file
    Copyright 1988-90, Gimpel Software, All Rights Reserved
 */


#ifdef NDEBUG
#define assert(p) ((void)0)
#else
void __assertfail( const char *, ... );
#define assert(p)  ((p) ? (void) 0 : __assertfail(   \
		"Assertion failed: %s, file %s, line %d\n", #p,\
		__FILE__, __LINE__) )
#endif
