#pragma once
#include <iostream>

template <class T> void iter(T array[], int size, void (*f)(T const &))
{
	for (int i = 0; i < size; i++)
	{
		(*f)(array[i]);
	}
}

template <typename T> void stampa(T const &ele)
{
	std::cout << ele << std::endl;
}
