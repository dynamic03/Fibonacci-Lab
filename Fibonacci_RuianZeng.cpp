#include "Fibonacci_RuianZeng.h"

int fibonacci(int term)
{
	int static result1;
	int static result2;
	if(term==0)
		return 0;
	if(term==1)
		return 1;
	
	else
	{
		result1=fibonacci(term-1);	
		result2=fibonacci(term-2);
		return fibonacci(term-1)+fibonacci(term-2);
	}
	
}