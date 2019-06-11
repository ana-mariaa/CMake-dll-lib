#ifndef MYMATH_H
#define MYMATH_h

#include<iostream>

#ifdef Lib_as_DLL
#define LIB_EXPORTS __declspec(dllexport)
#else
#define LIB_EXPORTS __declspec(dllimport)
#endif

class LIB_EXPORTS Calc
{
protected:
	int m_x;
	int m_y;

public:
	void setIntegers(int x, int y);

	int getAdd();
	int getSubstract();
	int getMultiply();
	double getDivide();
};

#endif