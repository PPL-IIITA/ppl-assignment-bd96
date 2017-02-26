#ifndef GIFTS_HPP
#define GIFTS_HPP
#include "couples.hpp"
#include "gift_alloc.hpp"
using namespace std;
class gifts 	/*! \brief Gifts Class
 				*         Stores the information about the gifts and allocates gifts to couples according to the algorithm.
 				*
 				*/

{
public:
	/** Gift Number */
	int gnumber;	
	/** Type of Gift: 1-Essential, 2-Luxury and 3-Utility */
	int type;		
	/** Price of the gift */
	int price;		
	/** Value of the gift */
	int value;		
	/** luxury rating or utility value */ 
	int uvlr;		
	/** Difficulty or utility class */
	int ucd;		
	/** Extracts information about gifts from input_gifts.txt */
	void inputG ( gifts GIFT[], int *nog );	
	/** Extracts information about couples from q2_input.txt */
	void inputC ( couples c[], int *noc );		
	/** Algorithm to allocate gifts to couples */
	void alloc(gift_alloc GADD[],gifts GIFT[], couples c[], int number_of_couples, int number_of_gifts, int *count );	
};
#endif