#ifndef MATCH_MAKING_HPP
#define MATCH_MAKING_HPP
#include "couples.hpp"
using namespace std;

class match_making		/*! \brief Match Making Class
 					 	*         Forms couple according to their attributes and requirements.
 					 	*
 					 	*/
{
public:
	/** Implementation of algorithm to form couples */
	void match(couples c[],int *count); 	
};
#endif