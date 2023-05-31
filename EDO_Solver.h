/**
 * Project Untitled
 */

#include"Options.h"
#include"Domain.h"

#ifndef _EDO_SOLVER_H
#define _EDO_SOLVER_H

class EDO_Solver {
public: 
    Options opts;
    
/**
 * @param Model opts
 */
void Model(Options opts);
    
/**
 * @param Domain
 */
void initDomain( Domain);
    
/**
 * @param t
 * @param Domain
 */
void step(float, Domain);
};

#endif //_EDO_SOLVER_H