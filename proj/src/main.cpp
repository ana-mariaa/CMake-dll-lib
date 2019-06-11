#include"mymath.h"

int main()
{
	std::cout << "Enter two integers: ";
	int x, y;

	std::cin >> x;
	std::cin >> y;

	Calc op;
	op.setIntegers(x, y);
	std::cout << "Add: " << op.getAdd() << '\n';
	std::cout << "Substract: " << op.getSubstract() << '\n';
	std::cout << "Multiply: " << op.getMultiply() << '\n';
	std::cout << "Divide: " << op.getDivide() << '\n';

	return 0;
}