/*
 * classA.h
 *
 *  Created on: 16 oct. 2018
 *      Author: Alexis
 */

#ifndef LISTECHAINEE_H_
#define LISTECHAINEE_H_
#include <iostream>
#include "maillon.h"


class Listchainee{
private:
	maillon *tete;
public:
	Listchainee(maillon);
	~Listchainee();
	void addmaillon(int,maillon*);
	void addtete(int);
	void addend(int);
	void parcours();
};




#endif /* LISTECHAINEE_H_ */
