#include<iostream>
#include"Fibonacci_RuianZeng.h"

using namespace std;

int main()
{
	int number;
	cout<<"Please input the sequence position term:"<<endl;
	cin>>number;
	while(!cin>>number || number<0)
	{
		cin.clear();
		cin.sync();		
		cout<<"Invalid input. The term must be greater or equal to 0. Please input again!"<<endl;
		cout<<"Please input the sequence position term:"<<endl;
		cin>>number;	
	}

	int fresult;
	fresult=fibonacci(number);
	cout<<"The fibonacii sequence is:"<<endl;
	for(int i=0;i<=number;i++)
	{		
		cout<<fibonacci(i)<<endl;
	}
	cout<<endl;
	
	cout<<"F("<<number<<")"<<"="<<fresult<<endl;
	return 1;
}