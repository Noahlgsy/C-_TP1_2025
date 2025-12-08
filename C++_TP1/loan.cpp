#include "loan.h"

void Loan::verify(Book& b, int id)
{

    if (b.get_take() == 1)
    {
        b.set_take(0);
        std::cout << "Le livre est dispo !" << std::endl;
        b.set_id_readers(id);
    }
    else
        std::cout << "Le livre est pas dispo" << std::endl; 
}

void Loan::return_loan(Book& b, int id)
{
    if (b.get_take() == 1)
    {
        std::cout << "Vous avez deja rendu ce livre !" << std::endl; 
    }
    if (b.get_take() == 0 && id == b.get_id().back())
    {
        b.set_take(1);
        std::cout << "Vous avez bien rendu le livre !" << std::endl;
    }
    else
        std::cout << "Ce n'est pas votre livre" << std::endl; 
}
