#ifndef KSTD2_H
#define KSTD2_H
/****************************************
*  Computer Algebra System SINGULAR     *
****************************************/
/* $Id: kstd2.h,v 1.4 1997-08-05 13:04:06 Singular Exp $ */
/*
* ABSTRACT -  Kernel: alg. of Buchberger
*/
#include "structs.h"
#ifdef STDTRACE
#include "comm.h"
#endif
/*2
*input: F: a set (array) of polys with <= Fmax entries (0..Fmax-1)
*       *S: a set (array) of polys with *Smax initialized entries (0..*Smax-1)
*output:*S: the standard base: a set (array) with <= *Smax+1 entries (0..*Smax)
*/
#ifdef STDTRACE
lists bbaLink(ideal F, ideal Q, intvec *w, intvec *h, kStrategy strat, stdLink =NULL);
#else
ideal bba (ideal F, ideal Q,intvec *w,intvec *hilb,kStrategy strat);
#endif
poly kNF2 (ideal F, ideal Q, poly q, kStrategy strat, int lazyReduce);
ideal kNF2 (ideal F,ideal Q,ideal q, kStrategy strat, int lazyReduce);

void initBba(ideal F,kStrategy strat);
#endif
