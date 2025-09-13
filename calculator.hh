
namespace oldking
{
	class Add;
	class Sub;

	class Operation 
	{
	public:
		Operation() = default;
		~Operation() = default;

		Add& add();
		const Add& add() const;
		Sub& sub();
		const Sub& sub() const;
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
}

