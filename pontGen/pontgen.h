#ifndef _PONTGEN_H_

#define _PONTGEN_H_



#include <cstdlib> // size_t

using Compare = bool (*)(const void *, const void *);

const void * min ( const void * first , const void * last , size_t size , Compare cmp );

void reverse ( void * first , void * last , size_t size );

void * copy ( const void * first , const void * last , const void * d_first , size_t size );


#endif