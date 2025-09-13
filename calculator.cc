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

oldking::Mul& oldking::Operation::mul()
{
	return static_cast<oldking::Mul&>(*this);
}
	
const oldking::Mul& oldking::Operation::mul() const 
{
	return static_cast<const oldking::Mul&>(*this);
}

oldking::Div& oldking::Operation::div()
{
	return static_cast<oldking::Div&>(*this);
}
	
const oldking::Div& oldking::Operation::div() const 
{
	return static_cast<const oldking::Div&>(*this);
}



int oldking::Add::operator()(const int& left, const int& right) const 
{
	return left + right;
}

int oldking::Sub::operator()(const int& left, const int& right) const
{
	return left - right;
}

int oldking::Mul::operator()(const int& left, const int& right) const
{
	return left * right;
}

int oldking::Div::operator()(const int& left, const int& right) const
{
	return left * right;
}
