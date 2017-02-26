#ifndef H_C_HPP
#define H_C_HPP
#include "gifts.hpp"
class h_c		/*! \brief Happiness and Compatibility Class
 				*         Stores the information about the happiness and compatibility of each couple.
 				*
 				*/
{
public:
	/** Object of class boys */
	boys B;		
	/** Object of class girls */
	girls G;	
	/** Happiness of the Boy */
	double hb;	
	/** Happiness of the Girl */
	double hg;	
	/** Happiness of the couple */
	double hc;	
	/** Compatibility of the couple */
	double cc;	
	/** Calculates the happiness and compatibility of each couple based on the algorithm provided */
	void happiness( h_c H[], gift_alloc GADD[] , int count, int *cnt ); 
	/** Prints K most Happy and Compatible Couples */
	void printhnc(h_c H[], int k,int cnt);		
};
#endif