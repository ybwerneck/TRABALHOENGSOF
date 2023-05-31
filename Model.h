/**
 * Project Untitled
 */


#ifndef _MODEL_H
#define _MODEL_H

class Model {
public: 
    Options opts;
    
/**
 * @param Model opts
 */
void Model(void Model opts);
    
/**
 * @param Domain
 */
void initDomain(void Domain);
    
/**
 * @param t
 * @param Domain
 */
void step(void t, void Domain);
};

#endif //_MODEL_H