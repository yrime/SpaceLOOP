/*
 * Star.h
 *
 *  Created on: 13.11.2014
 *      Author: felix
 */
#include "Astro.h"
#ifndef STAR_H_
#define STAR_H_

class Star: Astro{
public:
	Star(float T);
	virtual ~Star();
	float getTemp();
private:
	float temp = 0;
};

#endif /* STAR_H_ */
