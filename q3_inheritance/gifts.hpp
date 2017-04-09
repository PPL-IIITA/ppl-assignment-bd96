#ifndef GIFTS_HPP
#define GIFTS_HPP
using namespace std;
class gifts 	/*! \brief Gifts Class
 				*         Stores the information about the gifts. Acts as a base class.
 				*
 				*/

{
public:
	/** Gift Name */
	int gname;
	/** Gift Type */
	int gtype;
	/** Gift Price */
	int price;
	/** Gift Value */
	int value;
	gifts(int Gname, int Gtype, int Price, int Value) { 		
		gname = Gname;
		gtype = Gtype;
		price = Price;
		value = Value;
	}
	gifts() {		

	}
	/** Extracts information about gifts from input_gifts.txt */
	void inputgifts( gifts g[], int *cnt );
	/** Extracts information about couples from q2_input.txt */
	void prints();
};
#endif