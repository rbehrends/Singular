#ifndef HUTIL_H
#define HUTIL_H
/****************************************
*  Computer Algebra System SINGULAR     *
****************************************/
/*
* ABSTRACT
*/

#include "polys/monomials/ring.h"
#include "kernel/polys.h"
#include "misc/intvec.h"

typedef int * scmon;
typedef scmon * scfmon;
typedef int * varset;
struct monrec;
typedef struct monrec monh;
typedef monh * monp;
typedef monp * monf;
struct monrec
{
  scfmon mo;
  int a;
};

typedef struct sindlist indlist;
typedef indlist * indset;
struct sindlist
{
  indset nx;
  intvec * set;
};

#define LEN_MON (sizeof(scfmon) + sizeof(int))
EXTERN_VAR omBin indlist_bin;
EXTERN_VAR scfmon hexist;
EXTERN_VAR scfmon hstc;
EXTERN_VAR scfmon hrad;
EXTERN_VAR scfmon hwork;
EXTERN_VAR scmon hpure;
EXTERN_VAR scmon hpur0;
EXTERN_VAR varset hvar;
EXTERN_VAR varset hsel;
EXTERN_VAR int hNexist;
EXTERN_VAR int hNstc;
EXTERN_VAR int hNrad;
EXTERN_VAR int hNvar;
EXTERN_VAR int hNpure;
EXTERN_VAR monf stcmem;
EXTERN_VAR monf radmem;
EXTERN_VAR int hisModule;
EXTERN_VAR monf stcmem;
EXTERN_VAR monf radmem;
EXTERN_VAR indset ISet;
EXTERN_VAR indset JSet;
EXTERN_VAR int  hCo;
EXTERN_VAR int hMu;
EXTERN_VAR int hMu2;


void hDelete(scfmon ev, int ev_length);
void hComp(scfmon exist, int Nexist, int ak, scfmon stc, int * Nstc);
void hSupp(scfmon stc, int Nstc, varset var, int * Nvar);
void hOrdSupp(scfmon stc, int Nstc, varset var, int Nvar);
void hStaircase(scfmon stc, int * Nstc, varset var, int Nvar);
void hRadical(scfmon rad, int * Nrad, int Nvar);
void hLexS(scfmon stc, int Nstc, varset var, int Nvar);
void hLexR(scfmon rad, int Nrad, varset var, int Nvar);
void hPure(scfmon stc, int a, int *Nstc, varset var, int Nvar,
 scmon pure, int *Npure);
void hElimS(scfmon stc, int * e1, int a2, int e2,varset var, int Nvar);
void hElimR(scfmon rad, int * e1, int a2, int e2,varset var, int Nvar);
void hLex2S(scfmon stc, int e1, int a2, int e2,varset var,
 int Nvar, scfmon w);
void hLex2R(scfmon rad, int e1, int a2, int e2,varset var,
 int Nvar, scfmon w);
void hStepS(scfmon stc, int Nstc, varset var, int Nvar,int *a, int *x);
void hStepR(scfmon rad, int Nrad, varset var, int Nvar,int *a);
monf hCreate(int Nvar);
void hKill(monf xmem, int Nvar);
scfmon hGetmem(int lm, scfmon old, monp monmem);
scmon hGetpure(scmon p);
void hDimSolve(scmon pure, int Npure, scfmon rad, int Nrad,
 varset var, int Nvar);
void hIndMult(scmon pure, int Npure, scfmon rad, int Nrad,
 varset var, int Nvar);
void hIndAllMult(scmon pure, int Npure, scfmon rad, int Nrad,
 varset var, int Nvar);
void hDegreeSeries(intvec *s1, intvec *s2, int *co, int *mu);


scfmon hInit(ideal S, ideal Q, int * Nexist, ring tailRing);
void slicehilb(ideal I);
void HilbertSeries_OrbitData(ideal S, int lV, bool ig, bool mgrad, bool odp, int trunDegHs);
ideal  RightColonOperation(ideal i, poly w, int lV);
#endif
