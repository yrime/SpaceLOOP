/*
 * Star.cpp
 *
 *  Created on: 13.11.2014
 *      Author: felix
 */

#include "Star.h"

Star::Star(float T) {
	// TODO Auto-generated constructor stub
	if(T > 0) temp = T;

}


float Star::getTemp(){
	return temp;
}

Star::~Star() {
	// TODO Auto-generated destructor stub
}

