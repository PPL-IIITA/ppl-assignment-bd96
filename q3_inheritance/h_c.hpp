#ifndef H_C_HPP
#define H_C_HPP
#include "gift_alloc.hpp"
class h_c : public gift_alloc		/*! \brief Happiness and Compatibility Class
 									 *	         Stores the information about the happiness and compatibility of each couple. Inherits from class gift_alloc
 									 *
 									*/
{
public:	
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
	void printmost(h_c H[], int k,int cnt);
	/** Prints K least Happy Couples */
	void least(h_c H[], boy breakup_boy[], girl breakup_girl[], int *count_breakup, int k,int cnt);		
};
#endif