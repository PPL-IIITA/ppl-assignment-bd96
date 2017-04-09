#ifndef NORMAL_GIRL_HPP
#define NORMAL_GIRL_HPP
#include <iostream>
#include <stdio.h>
#include "girl.hpp"
class Normal_girl : public girl 	/*! \brief NORMAL_GIRL CLASS
 								 	*         Contains the attributes of all the Normal girls. it inherits from class girl. 
 								 	*
								 	*  Inherits all the Attributes like: Name, Budget, Intelligent, Committed, Criteria and Type from girl
 								 	*/
{
	public: 
	
		Normal_girl(int Name, int Attract, int Budget, int Intelligence, int Criteria, int type) : girl(Name,Attract,Budget,Intelligence,Criteria,type)
		{

		}
};
#endif