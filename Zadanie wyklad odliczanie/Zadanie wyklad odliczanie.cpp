// Zadanie wyklad odliczanie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
    int start;
    std::cout << "Podaj liczbe calkowita dodatnia, od ktorej rozpoczniemy odliczanie do 0:\n";
    std::cin >> start;

    if (start < 0)
        
    {
        std::cout << "Podales liczbe mniejsza od zero.";
    }

    else

     std::cout << "Odliczam od " << start << ":\n";

    for (int i = start; i >= 0; i--)
       
    {
       
       std::cout << i << "\n";
    }

   return 0;
}

