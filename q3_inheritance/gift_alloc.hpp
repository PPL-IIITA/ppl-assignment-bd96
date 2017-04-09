#ifndef GIFT_ALLOC_HPP
#define GIFT_ALLOC_HPP
#include "couples.hpp"
#include "gifts.hpp"
using namespace std;
class gift_alloc : public gifts	/*! \brief Gift Allocating Class
 					 *         Stores the information about the gifts exchanged. Inherits from class gifts.
 					 *
 					 */

{
public:
	/** Object of class boys */
	boy B;			
	/** Object of class girls */
	girl G;		
	/** allocates the gifts to couples*/
	void make_basket( gift_alloc gift_basket[], gifts gif[], couples C[], int countg, int countc, int *(count) );
	/** Stores the information about the gifts.*/			
	void add(gift_alloc GADD[],int n, int t,int p,int v,couples c,int *count);  
	/** Prints the information about the gifts exchanged between a couple*/ 	
	void print(gift_alloc GADD[],int count);  
};
#endif