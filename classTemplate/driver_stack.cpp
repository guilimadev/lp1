#include <iostream>
#include <stdexcept>
#include "stack.h"

int main(void)
{
    sc::stack<int> s;

    try {
        std::cout << "No topo temos: " << s.top() << std::endl;
    } catch ( std::out_of_range &e )
    {
        std::cout << "Peguei a execao: \"" << e.what() << "\"\n";
    }

    std::cout << ">>> Empilhando...\n";
    for( auto i(0) ; i < 20 ; ++i )
    {
        s.push( i );
    }

    std::cout << ">>> Desempilhando...\n";
    while( not s.empty() )
    {
        std::cout << s.top() << "\n";
        s.pop();
    }


}

