/* tlpi_hdr.h

   Standard header file used by nearly all of our example programs.
*/

#ifndef TLPI_HDR_H
#define TLPI_HDR_H

#include <sys/types.h>  /* Type definitions used by many programs */
#include <stdio.h>      /* Standard I/O functions */
#include <stdlib.h>     /* Prototypes of commonly used library functions,
                           plus EXIT_SUCCESS and EXIT_FAILURE constants */
#include <unistd.h>     /* Prototypes for many system calls */
#include <errno.h>      /* Declares errno and defines error constants */
#include <string.h>     /* Commonly used string-handling functions */

#include "get_num.h"    /* Declares our functions for handling numeric
                           arguments - getInt(), getLong() */
#include "error_functions.h"


/* Unfortunately some UNIX implementations define FALSE and TRUE -
   here we'll undefine them */
#ifdef TRUE
#undef TRUE
#endif

#ifdef FALSE
#undef FALSE
#endif

typedef enum { FALSE, TRUE } Boolean;


#define min(m, n) ((m) < (n) ? (m) : (n))
#define max(m, n) ((m) > (n) ? (m) : (n))


/* Some systems don't define 'socklen_t' */
#if defined(__sgi)
typedef int socklen_t;
#endif

#if defined(__sun)
#include <sys/file.h>       /* Has definition of FASYNC */
#endif

/* Some systems define FASYNC instead of O_ASYNC */
#if !defined(O_ASYNC) && defined(FASYNC)
#define O_ASYNC FASYNC
#endif

/* Some implementations have O_FSYNC instead of O_SYNC */
#if !defined(O_SYNC) && defined(O_FSYNC)
#define O_SYNC O_FSYNC
#endif

/* BSD derivatives usually have MAP_ANON, not MAP_ANONYMOUS */
#if defined(MAP_ANON) && !defined(MAP_ANONYMOUS)
#define MAP_ANONYMOUS MAP_ANON
#endif

/* FreeBSD uses these alternate names for fields in the sigval structure */
#if defined(__FreeBSD__)
#define sival_int sigval_int
#define sival_ptr sigval_ptr
#endif

#endif
