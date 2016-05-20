#include "add.h"
#include <iostream>

using namespace std;

double Add::evaluate(Op left, Op right)
{
	return left.evaluate() + right.evaluate();
}

void Add::setAdd(Op l, Op r)
{
	left = l;
	right = r;
}

