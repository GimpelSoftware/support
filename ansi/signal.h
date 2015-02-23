
/*  signal.h  --  ANSI header file
    Copyright 1988-90, Gimpel Software, All Rights Reserved
 */

#ifndef __SIGNAL_H
#define __SIGNAL_H

    /* signals */

#define SIGABRT 1   /* abnormal termination as in abort() */
#define SIGFPE 2    /* erroneous arithmetic operator */
#define SIGILL 3    /* illegal instruction */
#define SIGINT 4    /* interactive attention (Control Break) */
#define SIGSEGV 5   /* invalid access to storage */
#define SIGTERM 6   /* program termination request */

typedef void (*_sigfunc_t)(int);   /* the type returned
	    by and passed to (as second argument) the signal function */

    /*  actions */

#define SIG_DFL (_sigfunc_t)0   /* default action */
#define SIG_IGN (_sigfunc_t)1   /* ignore the signal */
#define SIG_ERR (_sigfunc_t)(-1)  /* error return */

extern _sigfunc_t signal(int, _sigfunc_t);
extern int raise(int);

typedef int sig_atomic_t;

#endif
