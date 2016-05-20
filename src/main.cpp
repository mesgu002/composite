#include "base.h"
#include "add.h"
#include <iostream>

using namespace std;

int main()
{
	Op opA;
	Op opB;
	opA.setOp(2);
	opB.setOp(3);
	Add result;
	result.setAdd( opA, opB );
	cout << result.evaluate() << endl;
//	cout << opA.getOp() << endl;
//	cout << "Hello World!" << endl;

	return 0;
}
