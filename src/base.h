#ifndef BASE_H
#define BASE_H

using namespace std;

class Base
{
	public:
		/* Constructors*/
		Base() { };

		/* Pure Virtual Functions*/
		virtual double evaluate() = 0;
};

class Op : public Base
{
	private:
		int num;

	public:
		void setOp(int n);
		int getOp();
		double evaluate();
};

#endif
