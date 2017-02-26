#ifndef COUPLES_HPP
#define COUPLES_HPP
#include "boys.hpp"
#include "girls.hpp"

class couples				/*! \brief COUPLE CLASS
 							 *         Contains all the information about COUPLES formed.
 							 *
 							 */
{
public:
	/**OBJECT of CLASS boys*/
	boys b;						
	/** OBJECT of CLASS girls*/
	girls g;					
	/** Function to add details aboout the couples */
	void add(boys b1,girls g1); 
	/** All the couples are printed in a output file. Also all the detalis of couples are printed in another ouput file. */
	void print(couples c[],int count);	
};
#endif