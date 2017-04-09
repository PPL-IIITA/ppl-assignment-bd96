#ifndef CHOOSY_GIRL_HPP
#define CHOOSY_GIRL_HPP
#include <iostream>
#include <stdio.h>
#include "girl.hpp"
class Choosy_girl : public girl 	/*! \brief CHOOSY_GIRL CLASS
 								 	*         Contains the attributes of all the Choosy girls. it inherits from class girl. 
 								 	*
								 	*  Inherits all the Attributes like: Name, Budget, Intelligent, Committed, Criteria and Type from girl
 								 	*/

{
	public: 
		
		Choosy_girl(int Name, int Attract, int Budget, int Intelligence, int Criteria, int type) : girl(Name,Attract,Budget,Intelligence,Criteria,type)
		{
		
		}
};
#endif