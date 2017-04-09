#ifndef ESSENTIAL_GIFTS_HPP
#define ESSENTIAL_GIFTS_HPP
using namespace std;
class Essential_gifts : public gifts /*! \brief Essential_gifts Class
 									*         Stores the information about the Essential gifts. Inherits from gifts class.
 									*
 									*/
{
public:
	Essential_gifts(int Gname, int gtype, int Price, int Value) : gifts ( Gname,gtype,Price,Value ) 
	{
		
	}
	
};
#endif