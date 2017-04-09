#ifndef COUPLES_HPP
#define COUPLES_HPP
#include <iostream>
#include <stdio.h>
#include "Miser_boy.hpp"
#include "Generous_boy.hpp"
#include "Geek_boy.hpp"
#include "Choosy_girl.hpp"
#include "Normal_girl.hpp"
#include "Desperate_girl.hpp"

class couples 				/*! \brief COUPLE CLASS
 							 *         Contains all the information about COUPLES formed.
 							 *
 							 */
{
public:
	/**OBJECT of CLASS boy*/
	boy B;
	/**OBJECT of CLASS girl*/
	girl G;
	/** Function to form couples initally ( mainly used in forming the couples for the first time, i.e. without a break-up) */
	void formcouples(couples C[], boy B[], girl G[], int number_of_boys, int number_of_girls, int *cnt);
	/** Function to add details aboout the couples */
	void add(boy b, girl g);
	/** A utility function which performs breakup and form new couples by storing them in a new array */
	void breakup(couples c[],boy B[], girl G[], int number_of_boys, int number_of_girls, couples newCouples[], boy breakup_boy[], girl breakup_girl[], int count_breakup, int countc);
	/** A utility function to print all the couples */
	void printcouples( couples C[], int count);
	/** A utility function to form couples after a breakup ( uses falg array to store information about Exes) */
	void formnewcouples(couples c[], boy B[], girl G[], int number_of_boys, int number_of_girls, int *count, int flag[]);
	/** A utility function to form couples in Question 5*/
	void form2(couples c[], boy B[], girl G[], int number_of_boys, int number_of_girls, int *count);
};
#endif