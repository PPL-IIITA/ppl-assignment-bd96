#ifndef LUXURY_GIFTS_HPP
#define LUXURY_GIFTS_HPP
using namespace std;
class luxury_gifts : public gifts /*! \brief luxury_gifts Class
 									*         Stores the information about the luxury gifts. Inherits from gifts class.
 									*
 									*/
{
public:
	/** Luxury rating of gifts*/
	int lux_rat;
	/** Luxury Difference of gifts*/
	int lux_diff;

	luxury_gifts(int Gname, int gtype, int Price, int Value, int Lux_rat, int Lux_diff) : gifts ( Gname,gtype,Price,Value ) 
	{
		lux_rat = Lux_rat;
		lux_diff = Lux_diff;
	}
	
};
#endif