#ifndef DESPERATE_GIRL_HPP
#define DESPERATE_GIRL_HPP
#include <iostream>
#include <stdio.h>
#include "girl.hpp"
class Desperate_girl : public girl /*! \brief DESPERATE_GIRL CLASS
 								 	*         Contains the attributes of all the Desperate girls. it inherits from class girl. 
 								 	*
								 	*  Inherits all the Attributes like: Name, Budget, Intelligent, Committed, Criteria and Type from girl
 								 	*/
{
	public: 
		
		Desperate_girl(int Name, int Attract, int Budget, int Intelligence, int Criteria, int type) : girl(Name,Attract,Budget,Intelligence,Criteria,type)
		{
			
		}
};
#endif