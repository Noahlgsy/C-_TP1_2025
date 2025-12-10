#include "Lib.h"
#include <iostream>

void Lib::lib_Loan(Book& b, Reader& r, Date& d)
{
    // Cherche le livre correspondant dans la bibliothèque (par ISBN) et modifie cette instance
    for (Book& lb : lib_Book) //A la base la liste des livres etait une copie des objets livre et pas les livres eux-memes
    {//On itère sur lib_Book avec Book& (référence) pour pouvoir modifier directement les éléments stockés dans le vecteur.
        if (lb.get_ISBN() == b.get_ISBN()) //•	On compare l'ISBN de l'élément courant lb avec l'ISBN du Book demandé b. L'ISBN sert d'identifiant unique pour trouver le bon livre.
        {
            Loan l(d, lb.get_ISBN(), r.get_id());
            l.verify(lb, r.get_id()); // modifie lb (élément de lib_Book)
            return;
        }
    }
    std::cout << "Livre non trouvé dans la bibliothèque." << std::endl;
}

void Lib::lib_reLoan(Book& b, Reader& r, Date& d)
{
    for (Book& lb : lib_Book)
    {
        if (lb.get_ISBN() == b.get_ISBN())
        {
            Loan l(d, lb.get_ISBN(), r.get_id());
            l.return_loan(lb, r.get_id());
            return;
        }
    }
    std::cout << "Livre non trouvé dans la bibliothèque." << std::endl;
}

std::vector<Book> Lib::find_author_book(const Author& a)
{
     std::vector<Book> resultat;
    for (const Book& b : lib_Book)
    {
        if (b.get_author().get_name() == a.get_name())
        {
            resultat.push_back(b);
        }
    }
    return resultat;
}

std::vector<Book> Lib::find_loan_book(const Reader& r)
{
    std::vector<Book> resultat;
    for (const Book& b : lib_Book)
    {
        if (!b.get_id().empty() && b.get_last_id() == r.get_id())
        {
            resultat.push_back(b);
        }
    }
    return resultat;
}

float Lib::pourcent_of_loan_book(Lib& /*l*/)
{
    if (lib_Book.empty()) return 0.0f;
    size_t count_loaned = 0;
    // Dans ton projet take == 0 signifie "emprunté"
    for (const Book& b : lib_Book)
    {
        if (b.get_take() == 0) ++count_loaned;
    }
    return static_cast<float>(count_loaned) / static_cast<float>(lib_Book.size()) * 100.0f;
}