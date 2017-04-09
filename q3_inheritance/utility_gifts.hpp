#ifndef UTILITY_GIFTS_HPP
#define UTILITY_GIFTS_HPP
using namespace std;
class utility_gifts : public gifts /*! \brief utility_gifts Class
 									*         Stores the information about the utility gifts. Inherits from gifts class.
 									*
 									*/
{
public:
	/** Utility value of gifts*/
	int util_val;
	/** Utility Class of gifts*/
	int util_class;
	utility_gifts(int Gname, int gtype, int Price, int Value, int Util_val, int Util_class) : gifts ( Gname,gtype,Price,Value ) 
	{
		util_val = Util_val;
		util_class = Util_class;
	}
	
};
#endif