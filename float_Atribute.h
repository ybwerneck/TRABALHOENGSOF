/**
 * Project Untitled
 */

#include<string>

#ifndef _FLOAT_ATRIBUTE_H
#define _FLOAT_ATRIBUTE_H

class float_Atribute {
public: 
    
float* getValue();
    
std::string getNome();
    
/**
 * @param Value
 */
void Atribute(float* Value);
private: 
    float* value;
};

#endif //_FLOAT_ATRIBUTE_H