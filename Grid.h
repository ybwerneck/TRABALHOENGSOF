/**
 * Project Untitled
 */

#include<string>
#include"grid_atribute.h"
#ifndef _GRID_H
#define _GRID_H

class Grid {
public: 
    grid_atribute* atributes;
    
/**
 * @param String
 */
float getAtribute(std::string);
    
/**
 * @param String
 * @param float*
 */
void setAtributes(std::string,float*);
    

Grid(std::string, float**);
   
};

#endif //_GRID_H