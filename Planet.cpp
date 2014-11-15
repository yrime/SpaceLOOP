/*
 * Planet.cpp
 *
 *  Created on: 13.11.2014
 *      Author: felix
 */

#include "Planet.h"

Planet::Planet(double speed, int popul, double sX, double sY, double sZ, double X, double Y, double Z) {
	this->speed = speed;
	this->population = popul;
	this->vX = sX;
	this->vY = sY;
	this->vZ = sZ;
	Astro::putX(X);
	putY(Y);
	this->putZ(Z);
}
double Planet::getSpeed(){
	return speed;
}
void Planet::putSpeed(double S){
	speed = S;
}
int Planet::getPopul(){
	return population;
}
void Planet::putPopul(int P){
	population = P;
}
double Planet::getSpeedX(){
	return vX;
}
double Planet::getSpeedY(){
	return vY;
}
double Planet::getSpeedZ(){
	return vZ;
}
void Planet::putSpeedX(double X){
	vX =X;
}
void Planet::putSpeedY(double Y){
	vY = Y;
}
void Planet::putSpeedZ(double Z){
	vZ = Z;
}

Planet::~Planet() {
	// TODO Auto-generated destructor stub
}

