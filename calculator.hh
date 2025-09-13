
namespace oldking
{
	class Add;
	class Sub;
	class Mul;
	class Div;

	class Operation 
	{
	public:
		Operation() = default;
		~Operation() = default;

		Add& add();
		const Add& add() const;
		Sub& sub();
		const Sub& sub() const;
		Mul& mul();
		const Mul& mul() const;
		Div& div();
		const Div& div() const;
	};
	
	class Add : public Operation
	{
	public:
		Add() = default;
		~Add() = default;

		int operator()(const int& left, const int& right) const;	
	};

	class Sub : public Operation
	{
	public:
		Sub() = default;
		~Sub() = default;

		int operator()(const int& left, const int& right) const;	
	};

	class Mul : public Operation
	{
	public:
		Mul() = default;
		~Mul() = default;

		int operator()(const int& left, const int& right) const;	
	};
	
	class Div : public Operation
	{
	public:
		Div() = default;
		~Div() = default;

		int operator()(const int& left, const int& right) const;	
	};
}

