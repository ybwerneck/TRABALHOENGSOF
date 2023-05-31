/**
 * Project Untitled
 */


#ifndef _ATRIBUTE_H
#define _ATRIBUTE_H
#include <string>

class Atribute {
public: 
    
void* getValue();
    
std::string getNome();
    
 Atribute(void* Value);
private: 
    void* value;
};

#endif //_ATRIBUTE_H