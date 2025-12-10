#include "Data.cpp"

int main()
{
    Lib l(books, authors, readers);
    //Creation of loan 
    Date dl1(10, 12, 2025);
    l.lib_Loan(b6, r1, dl1); 
    std::cout << l.get_take_book(b1) << std::endl; 
    std::cout << l.pourcent_of_loan_book(l);

   
    return 0; 
}