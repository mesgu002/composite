#ifndef ADD_H
#define ADD_H

#include "base.h"

using namespace std;

class Add : public Base
{
	private:
		Op left;
		Op right;

	public:
		double evaluate(Op l, Op r);
		void setAdd(Op left, Op right);
};

#endif
