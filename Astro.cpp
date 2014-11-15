/*
 * Astro.cpp
 *
 *  Created on: 13.11.2014
 *      Author: felix
 */

#include "Astro.h"

//using namespace Astro;

Astro::Astro() {
	// TODO Auto-generated constructor stub

}

double Astro::getR(){
	return Rad;
}
void Astro::putR(double R){
	Rad = R;
}
double Astro::getX(){
	return x;
}
void Astro::putX(double X){
	x = X;
}
double Astro::getY(){
	return y;
}
void Astro::putY(double Y){
	y = Y;
}
double Astro::getZ(){
	return z;
}
void Astro::putZ(double Z){
	z = Z;
}
int Astro::getM(){
	return Mass;
}
void Astro::putM(int M){
	Mass = M;
}
double Astro::getF(int m, double R){
	return Astro::Mass*m*6.67e-11/(R*R);
}

Astro::~Astro() {
	// TODO Auto-generated destructor stub
}

