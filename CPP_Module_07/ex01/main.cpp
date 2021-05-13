#include <iostream>
#include <string>
#include "iter.hpp"

void print(int n)
{
    std::cout << n << std::endl;
}

int main (void)
{
    int arr[] = {1, 4, 5, 89, 3, 2}; 
    ::iter(arr, 6, print);
    std::string arrs[] = {"ciao ciao", "cavallo e polpette", "pollo secco"}; 
    ::iter(arrs, 3, print);
    return (0);
}
