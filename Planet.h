/*
 * Planet.h
 *
 *  Created on: 13.11.2014
 *      Author: felix
 */
#include "Astro.h"
#ifndef PLANET_H_
#define PLANET_H_

class Planet:Astro {
public:
	Planet(double speed, int popul, double sX, double sY, double sZ, double X, double Y, double Z);
	virtual ~Planet();
	double getSpeed();//mod of speed planet
	void putSpeed(double S);
	int getPopul();//population planet
	void putPopul(int P);
	double getSpeedX();//vectr of speed planet
	double getSpeedY();//x,y,z
	double getSpeedZ();
	void putSpeedX(double X);
	void putSpeedY(double Y);
	void putSpeedZ(double Z);
private:
	double speed = 0;
	int population = 0;
	double vX = 0;
	double vY = 0;
	double vZ = 0;
	//atmosfer
	//resurce
};

#endif /* PLANET_H_ */
