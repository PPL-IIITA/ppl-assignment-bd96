#ifndef BOY_HPP
#define BOY_HPP
#include <iostream>
#include <stdio.h>
class boy 						/*! \brief BOY CLASS
 								 *         Contains the attributes of all the BOYS. Acts as a base class 
 								 *
								 *  Attributes like: Name, Budget, Intelligent, Committed, Minimum Attraction.
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
	int intelligence;			
	/** Wether the BOY is committed or not.*/
	bool committed;				
	/** Minimum Attraction requirement of the BOY*/
	int min_attract;
	/** 1-MISER, 2-GENEROUS and 3-GEEKS.*/
	int type;	
	/** Happiness of the boy*/
	double happiness;							
public:
	boy(int Name, int Attract, int Budget, int Intelligence, int Min_attract, int Type ) 		
	{
		name = Name;
		attract = Attract;
		budget = Budget;
		intelligence = Intelligence;
		min_attract = Min_attract;
		type = Type;
		committed = false;
		happiness = 0.0;		
	}
	boy(){			
	}
	/** sort all the boys according to their attractiveness*/
	void sorta(boy B[], int n);
};
#endif