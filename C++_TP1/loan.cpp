#include "loan.h"

void Loan::verify(Book& b)
{

    if (b.get_take() == 1)
    {
        b.set_take(0);
        std::cout << "Le livre est dispo !" << std::endl;

    }
    else
        std::cout << "Le livre est pas dispo" << std::endl; 
}
