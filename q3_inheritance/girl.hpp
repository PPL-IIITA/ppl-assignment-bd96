#ifndef GIRL_HPP
#define GIRL_HPP
#include <iostream>
class girl						/*! \brief GIRL CLASS
 								 *         Contains the attributes of all the GIRLS. Acts as a base class
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
	int intelligence;			
	/** 1 - MOST ATTRACTIVE, 2- MOST RICH AND 3 - MOST INTELLIGENT*/
	int criteria;				
	/** Wether the girl is committed or not*/
	bool committed;				
	/** 1- CHOOSY, 2- NORMAL AND 3- DESPERATE*/
	int type;
	/** Happiness of the girl*/
	double happpiness;

public:
	//!< a parametrised Constructor;
	girl(int Name, int Attract, int Maintenance, int Intelligence, int Criteria, int Type)						
	{
		name = Name;
		attract = Attract;
		maintenance = Maintenance;
		intelligence = Intelligence;
		criteria = Criteria;
		type = Type;
		committed = false;
		happpiness = 0.0;
	}
	//!< a defaultConstructor;
	girl(){
		
	}
	/** A utility function to sort girls according to their maintainence budget*/
	void sortm(girl G[], int n );
};
#endif