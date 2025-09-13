#include "calculator.hh"


oldking::Add& oldking::Operation::add()
{
	return static_cast<oldking::Add&>(*this);
}

const oldking::Add& oldking::Operation::add() const
{
	return static_cast<const oldking::Add&>(*this);
}

oldking::Sub& oldking::Operation::sub()
{
	return static_cast<oldking::Sub&>(*this);
}
	
const oldking::Sub& oldking::Operation::sub() const 
{
	return static_cast<const oldking::Sub&>(*this);
}


int oldking::Add::operator()(const int& left, const int& right) const 
{
	return left + right;
}

int oldking::Sub::operator()(const int& left, const int& right) const
{
	return left - right;
}


