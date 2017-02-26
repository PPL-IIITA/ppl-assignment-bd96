#ifndef GIRLS_HPP
#define GIRLS_HPP
#include <iostream>
class girls						/*! \brief GIRL CLASS
 								 *         Contains the attributes of all the GIRLS.
 								 *
								 *  Attributes like: Name, Budget, Intelligent, Committed, criteria and Type of Girl.
 								 */
{
public:
	/** Name of the GIRL.*/
	int name;					
	/** Attraction level of the GIRL.*/
	int attract;				
	/**Maintenance budget of the GIRL.*/
	int maintenance;			
	/** Intelligent level of the GIRL.*/
	int intelligent;			
	/** 1 - MOST ATTRACTIVE, 2- MOST RICH AND 3 - MOST INTELLIGENT*/
	int criteria;				
	/** Wether the girl is committed or not*/
	bool committed;				
	/** 1- CHOOSY, 2- NORMAL AND 3- DESPERATE*/
	int gtype;					
public:
	girls()						/** Constructor */ 
	{
		committed = false;
	}
};
#endif