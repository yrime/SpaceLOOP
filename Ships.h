/*
 * Ships.h
 *
 *  Created on: 15.11.2014
 *      Author: felix
 */
#include "Astro.h"

#ifndef SHIPS_H_
#define SHIPS_H_

class Ships:Astro {
public:
	Ships();
	virtual ~Ships();
	double getSpeed();//mod of speed ships

	double getSpeedX();//vectr of speed ships
	double getSpeedY();//x,y,z
	double getSpeedZ();
	void putSpeedX(double X);
	void putSpeedY(double Y);
	void putSpeedZ(double Z);
private:
	double speed = 0;
	double vX = 0;
	double vY = 0;
	double vZ = 0;
};

#endif /* SHIPS_H_ */
