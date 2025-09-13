#include "calculator.hh"
#include <iostream>

int main(int argc, char* argv[])
{
	oldking::Operation op;

	if(argc != 4)
	{
		std::cerr << "Too many options or few options!" << std::endl;
		std::cerr << "argc: " << argc << std::endl;
		exit(1);
	}

	switch (*argv[2]) 
	{
	case '+':
		std::cout << op.add()(*argv[1] - '0', *argv[3] - '0') << std::endl;
		break;
	case '-':
		std::cout << op.sub()(*argv[1] - '0', *argv[3] - '0') << std::endl;
		break;
	case '*':
		std::cout << op.mul()(*argv[1] - '0', *argv[3] - '0') << std::endl;
		break;
	case '/':
		std::cout << op.div()(*argv[1] - '0', *argv[3] - '0') << std::endl;
		break;
	default:
		std::cerr << "Oprator err!" << std::endl;
		exit(1);
	}	
}


