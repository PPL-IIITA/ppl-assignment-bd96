#include <iostream>
#include <stdio.h>
#include "boys.hpp"
#include "girls.hpp"
#include "couples.hpp"
using namespace std;	

void couples::add(boys b1,girls g1) 
{  
		b = b1;
		g = g1;
}

void couples::print(couples c[],int count) 
{	 
		freopen("output.txt","w+",stdout);
		int i;
		std::cout << count << std::endl;
		for( i = 0; i < count; i++) {
			std::cout << "Boy " << c[i].b.name << " and Girl " << c[i].g.name << std::endl;
		}
		fclose(stdout);
		freopen("q2_input.txt","w+",stdout);
		std::cout << count << std::endl;
		for( i = 0; i < count; i++) {
			std::cout << c[i].b.name << " " << c[i].b.attract << " " << c[i].b.budget << " "<< c[i].b.intelligent << " " << c[i].b.committed << " " <<c[i].b.min_attract << " "<< c[i].b.btype << " " << c[i].g.name << " " << c[i].g.attract << " " << c[i].g.maintenance << " "<< c[i].g.intelligent << " "<< c[i].g.criteria << " "<< c[i].g.committed << " "<< c[i].g.gtype << std::endl;
		}
		fclose(stdout);
}
