///////////////////////////////////////////////////////////
//  iE.h
//  Implementation of the Interface iE
//  Created on:      03-nov-2014 14:57:46
//  Original author: Toni
///////////////////////////////////////////////////////////

#if !defined(EA_312873AC_EA0E_4bb5_A5F3_BBCDEAA859E8__INCLUDED_)
#define EA_312873AC_EA0E_4bb5_A5F3_BBCDEAA859E8__INCLUDED_

class iE
{

public:
	iE() {

	}

	virtual ~iE() {

	}

	virtual bool Compare(int a, int b) =0;

};
#endif // !defined(EA_312873AC_EA0E_4bb5_A5F3_BBCDEAA859E8__INCLUDED_)
