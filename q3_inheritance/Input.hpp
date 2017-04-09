#ifndef INPUT_HPP
#define INPUT_HPP
#include <iostream>
#include <stdio.h>
#include "boy.hpp"
#include "Miser_boy.hpp"
#include "Generous_boy.hpp"
#include "Geek_boy.hpp"
#include "girl.hpp"
#include "Choosy_girl.hpp"
#include "Normal_girl.hpp"
#include "Desperate_girl.hpp"

class Input 						/*! \brief Input Class
 									 *	         Stores the information about all the boys nd girls.
 									 *
 									*/
{
	public:
		/** A utilty function to take input from input.txt*/
		void inputbg(boy b[], girl g[], int *cb, int *cg);
};
#endif;