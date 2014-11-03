///////////////////////////////////////////////////////////
//  B.h
//  Implementation of the Class B
//  Created on:      03-nov-2014 14:57:44
//  Original author: Toni
///////////////////////////////////////////////////////////

#if !defined(EA_6F932134_AAA2_48e3_8F94_77CB4CAC85B5__INCLUDED_)
#define EA_6F932134_AAA2_48e3_8F94_77CB4CAC85B5__INCLUDED_

#include "C.h"
#include "A.h"
#include "H.h"

class B : public A
{

public:
	B();
	virtual ~B();
	C m_C;
	H *m_H;

	int sub(int a, int b);

};
#endif // !defined(EA_6F932134_AAA2_48e3_8F94_77CB4CAC85B5__INCLUDED_)
