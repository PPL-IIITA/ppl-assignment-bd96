#ifndef GEEK_BOY_HPP
#define GEEK_BOY_HPP
#include <iostream>
#include <stdio.h>
#include "boy.hpp"
class Geek_boy : public boy 		/*! \brief GEEK_BOY CLASS
 								 	*         Contains the attributes of all the Geek boys. it inherits from class boy. 
 								 	*
								 	*  Inherits all the Attributes like: Name, Budget, Intelligent, Committed, Minimum Attraction from boy
 								 	*/
{
	public:

		Geek_boy(int Name, int Attract, int Budget, int Intelligence, int Min_attract, int type) : boy(Name,Attract,Budget,Intelligence,Min_attract,type)
		{
			
		}
};
#endif