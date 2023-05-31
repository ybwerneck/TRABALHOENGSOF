/**
 * Project Untitled
 */

#include"Options.h"
#include"Grid.h"

#ifndef _DOMAIN_H
#define _DOMAIN_H

class Domain {
public: 
    Options opts;
    Grid domain_state;
    
/**
 * @param Options opt
 */
 Domain(Options opt);
    
void init_function();
    
void end_function();
    
void save_state();
    
void restore_state();
    
/**
 * @param void*
 */
void* DifusionOperator(void*);
};

#endif //_DOMAIN_H