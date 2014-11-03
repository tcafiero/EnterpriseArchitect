///////////////////////////////////////////////////////////
//  C.h
//  Implementation of the Class C
//  Created on:      03-nov-2014 14:57:45
//  Original author: Toni
///////////////////////////////////////////////////////////

#if !defined(EA_AA04DC81_32B6_4121_81E6_A300B7BAECC4__INCLUDED_)
#define EA_AA04DC81_32B6_4121_81E6_A300B7BAECC4__INCLUDED_

#include "D.h"
#include "G.h"

class C : public D
{

public:
	C();
	virtual ~C();
	G m_G;

	int mul(int a, int b);

};
#endif // !defined(EA_AA04DC81_32B6_4121_81E6_A300B7BAECC4__INCLUDED_)
