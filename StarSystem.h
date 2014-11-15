/*
 * StarSystem.h
 *
 *  Created on: 15.11.2014
 *      Author: felix
 */
#include "Planet.h"
#include "Ships.h"
#ifndef STARSYSTEM_H_
#define STARSYSTEM_H_

class StarSystem {
public:
	StarSystem(float starTemp);
	virtual ~StarSystem();
	void getPlanet(Planet pl);
private:
	int SystemRad = 0;//radius Systel, say usialy langvitch, location
	std::vector<Planet> pl_vec;//all naturaly obj
	std::vector<Planet>::iterator itr_pl;
	std::vector<Ships> sh;//all createing of people obj
};

#endif /* STARSYSTEM_H_ */
