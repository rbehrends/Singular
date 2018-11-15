#ifndef CNTRLC_H
#define CNTRLC_H
/****************************************
*  Computer Algebra System SINGULAR     *
****************************************/
/*
* ABSTRACT - interupt and signal handling
*/
#include <setjmp.h>
#include "kernel/mod2.h"
#include "kernel/structs.h"
EXTERN_VAR jmp_buf si_start_jmpbuf;
EXTERN_VAR short si_restart;
EXTERN_VAR int siRandomStart;
void init_signals();
EXTERN_VAR BOOLEAN singular_in_batchmode;
/* TRUE for child of a fork or started with --batch*/

/* for deferring the call of m2_end() in SIGTERM handler if necessary */
extern volatile BOOLEAN do_shutdown;
extern volatile int defer_shutdown;

#endif
