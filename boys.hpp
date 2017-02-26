#ifndef BOYS_HPP
#define BOYS_HPP
#include <iostream>
#include <stdio.h>
class boys 						/*! \brief BOY CLASS
 								 *         Contains the attributes of all the BOYS.
 								 *
								 *  Attributes like: Name, Budget, Intelligent, Committed, Minimum Attraction and Type of Boy.
 								 */
{
public:
	/** Name of the BOY.*/
	int name;					
	/** Attraction level of the BOY.*/
	int attract;				
	/** BOY's Budget.*/
	int budget;					
	/** Intelligent level of the BOY.*/
	int intelligent;			
	/** Wether the BOY is committed or not.*/
	bool committed;				
	/** Minimum Attraction requirement of the BOY*/
	int min_attract;			
	/** 1-MISER, 2-GENEROUS and 3-GEEKS.*/
	int btype;					
public:
	boys()						//!< a Constructor;
	{
		committed = false;		
	}
};
#endif