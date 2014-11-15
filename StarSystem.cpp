/*
 * StarSystem.cpp
 *
 *  Created on: 15.11.2014
 *      Author: felix
 */

#include "StarSystem.h"

StarSystem::StarSystem(float starTemp) {
	// TODO Auto-generated constructor stub
	Star st = new Star(starTemp);
}

void StarSystem::getPlanet(Planet pl){
	pl_vec.push_back(pl);
}

StarSystem::~StarSystem() {
	// TODO Auto-generated destructor stub
}

