#include<iostream>
using namespace std;

int sum(int n, int value...)
{
	int sum = 0;
	int* p_value = &value;
	for (int i = 0; i < n; i++)
	{
		sum += *p_value;
		p_value++;
	}
	return sum;
}


double production(double value...)
{
	double production = 1;
	double* p_value = &value;
	while (*p_value != double())
	{
		production *= *p_value++;
	}
	return production;
}

void main()
{
	cout << sum(4, 5, 8, 13, 21) << endl;
	cout << production(3.14, 5.8, 8.6, 13.3, 21.3);
}