
Operation.exe : calculator.cc test.cc 
	g++ -std=c++11 calculator.cc test.cc -o Operation.exe  

.PHONY:clean
clean:
	rm rf *.exe 



