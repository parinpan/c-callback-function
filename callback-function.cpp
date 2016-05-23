/*
	Author: M Fachrin Aulia Nasution
	Universitas Sumatera Utara
	Teknologi Informasi (141402072)
*/
#include <iostream>
using namespace std;

template<typename T>
T multiply(T a, T b)
{
	return a * b;
}

template<typename T>
T add(T a, T b)
{
	return a + b;
}

template<typename T>
T substract(T a, T b)
{
	return a - b;
}

template<typename T>
T div(T a, T b)
{
	return (int) a / b;
}

template<typename T>
void print(T (*f)(T, T), T a, T b)
{
	cout << f(a, b) << endl;
}

int main()
{
	print(add, 10, 2);
	print(div, 10, 2);
	print(substract, 10, 2);
	print(multiply, 10, 2);

	return 0;
}