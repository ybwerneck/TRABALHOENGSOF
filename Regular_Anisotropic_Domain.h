/**
 * Project Untitled
 */


#ifndef _REGULAR_ANISOTROPIC_DOMAIN_H
#define _REGULAR_ANISOTROPIC_DOMAIN_H

#include "Regular_Isotropic_Domain.h"


class Regular_Anisotropic_Domain: public Regular_Isotropic_Domain {
public: 
    
/**
 * @param Options opt
 */
void Domain(void Options opt);
    
void init_function();
    
void end_function();
    
void save_state();
    
void restore_state();
    
/**
 * @param void*
 */
*void DifusionOperator(void void*);
};

#endif //_REGULAR_ANISOTROPIC_DOMAIN_H