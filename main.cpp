#include <iostream>
#include ".\system\H.h"
#include ".\system\B.h"
#include ".\system\F.h"
using namespace std;


class I : public F
{
public:
	virtual bool Compare(int a, int b)
		{
			return a!=b;
		}
};

class J : public F
{
public:
	virtual bool Compare(int a, int b)
		{
			return a==b;
		}
};


int main()
{
  H Hinstance;
  B calculator;
  calculator.m_H=&Hinstance;
  I m_I;
  J m_J;


  cout << "6/2=" << calculator.m_C.div(6,2) << endl;
  cout << "6*2=" << calculator.m_C.mul(6,2) << endl;
  cout << "6*2=" << calculator.m_C.m_G.mul(6,2) << endl;
  cout << "square(4)=" << calculator.m_H->square(4) << endl;

  cout << "Compare(5,5)=" << m_I.Compare(5,5) << endl;
  cout << "Compare(5,5)=" << m_J.Compare(5,5) << endl;

  return 0;
}
