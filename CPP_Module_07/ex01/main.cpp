#include <iostream>
#include <string>
#include "iter.hpp"

int main (void)
{
    
    int arr[] = {1, 4, 5, 89, 3, 2}; 
    ::iter(arr, 6, stampa);
    std::string arrs[] = {"ciao ciao", "cavallo e polpette", "pollo secco"}; 
    ::iter(arrs, 3, stampa);
    return (0);
}
