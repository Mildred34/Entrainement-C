/*
 * classH.cpp
 *
 *  Created on: 16 oct. 2018
 *      Author: Alexis
 */

#ifndef CLASSH_CPP_
#define CLASSH_CPP_
#include "Listechainee.h"
#include <iostream>
#include "maillon.h"

Listchainee::Listchainee(maillon A){
	tete = &A;
}

Listchainee::~Listchainee(){


}
void Listchainee::addtete(int val){
	maillon *A = new maillon;
	A->val = val;
	A->nxt = tete->nxt;
	tete = A;
}

void Listchainee::addend(int val){
	maillon *A = new maillon;
	A->val = val;
	A->nxt = NULL;

	maillon *next = tete;

	while(next != NULL)
		{
			next = next->nxt;
		}

	next->nxt = A;
}
void Listchainee::addmaillon(int a,maillon *p){
	maillon *next = tete;

	while(next != p)
	{
		next = next->nxt;
	}






}


#endif /* CLASSH_CPP_ */
