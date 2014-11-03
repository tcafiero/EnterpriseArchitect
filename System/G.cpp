///////////////////////////////////////////////////////////
//  G.cpp
//  Implementation of the Class G
//  Created on:      03-nov-2014 14:57:46
//  Original author: Toni
///////////////////////////////////////////////////////////

#include "G.h"


G::G(){

}



G::~G(){

}





int G::mul(int a, int b){

	int i,p=0;
	for(i=0;i<b;i++)
	p += a;
	return p;
}