/*
 * maillon.h
 *
 *  Created on: 16 oct. 2018
 *      Author: Alexis
 */

#ifndef MAILLON_H_
#define MAILLON_H_

typedef struct maillon maillon;
struct maillon{
			int val;
			struct maillon *nxt;
		};

typedef maillon* llist;




#endif /* MAILLON_H_ */
