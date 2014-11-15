/*
 * Astro.h
 *
 *  Created on: 13.11.2014
 *      Author: felix
 */

#ifndef ASTRO_H_
#define ASTRO_H_
//all obj on space system
class Astro {
public:
	Astro();
	int getM();//mass obj
	void putM(int M);
	double getR();//radius obj
	void putR(double R);
	double getF(int m, double R);// all world law of streinght(niuton)
	double getX();//location obj
	void putX(double X);//x,y,z
	double getY();
	void putY(double Y);
	double getZ();
	void putZ(double Z);
	virtual ~Astro();
private:
	int Mass;
	double Rad;
	double F;
	double x, y, z;
};


#endif /* ASTRO_H_ */
