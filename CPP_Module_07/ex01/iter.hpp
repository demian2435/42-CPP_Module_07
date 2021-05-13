#pragma once
#include <iostream>

template <class T> void iter(T array[], int size, void (*f)(T &))
{
	for (int i = 0; i < size; i++)
	{
		(*f)(array[i]);
	}
}

template <typename T> void print(T &ele)
{
	std::cout << ele << std::endl;
}
