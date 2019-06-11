#include"mymath.h"

void Calc::setIntegers(int x, int y)
{
	m_x = x;
	m_y = y;
}
int Calc::getAdd()
{
	return m_x + m_y;
}

int Calc::getSubstract()
{
	return m_x - m_y;
}

int Calc::getMultiply()
{
	return m_x * m_y;
}

double Calc::getDivide()
{
	return m_x / m_y;
}


