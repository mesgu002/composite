#include "base.h"
#include <iostream>

using namespace std;

void Op::setOp(int n)
{
	num = n;
}

int Op::getOp()
{
	return num;
}

double Op::evaluate()
{
	return num;
}
