#ifndef GIFT_ALLOC_HPP
#define GIFT_ALLOC_HPP
#include "couples.hpp"
using namespace std;
class gift_alloc	/*! \brief Gift Allocating Class
 					 *         Stores the information about the gifts exchanged.
 					 *
 					 */

{
public:
	/** Object of class boys */
	boys B;			
	/** Object of class girls */
	girls G;		
	/** Gift number */
	int number;		
	/** Type of gift */
	int gtype;		
	/** Price of Gift */
	int price;		
	/** Valuue of Gift*/
	int value;
	/** Stores the information about the gifts.*/			
	void add(gift_alloc GADD[],int n, int t,int p,int v,couples c,int *count);  
	/** Prints the information about the gifts exchanged between a couple*/ 	
	void print(gift_alloc GADD[],int count);  
};
#endif