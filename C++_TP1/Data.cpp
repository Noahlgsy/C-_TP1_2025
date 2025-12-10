#include <iostream>
#include "lib.h"


//Readers
Reader r1(1, "jean", "franc");
Reader r2(2, "lola", "franche");
Reader r3(3, "gilles", "gras");
std::vector<Reader> readers = { r1, r2, r3}; //You gonna use it in the lib 


//Author
Date d1(19, 5, 1978);
Author a1("vareau", "langui", 5, d1);
Date d2(9, 5, 1970);
Author a2("misri", "kadre", 6, d2);
Date d3(6, 9, 1967);
Author a3("shal", "lenvoi", 5, d3);
std::vector<Author> authors = { a1, a2, a3 }; 

//creation list of recent reader_id
std::vector<int> id_readers = { r1.get_id(), r2.get_id(), r3.get_id() };

//Creation of the Books
Date d1_publication(1, 12, 2022);
Book b1("The beginning of the hero", a1, "English", "Fantastic", 1, id_readers, d1_publication, 1);
Date d2_publication(2, 12, 2022);
Book b2("The beginning of the hero", a1, "English", "Fantastic", 2, id_readers, d2_publication, 1);
Date d3_publication(3, 12, 2022);
Book b3("The beginning of the hero", a2, "English", "Fantastic", 3, id_readers, d3_publication, 1);
Date d4_publication(4, 12, 2022);
Book b4("The beginning of the hero", a1, "English", "Fantastic", 4, id_readers, d4_publication, 1);
Date d5_publication(5, 12, 2022);
Book b5("The beginning of the hero", a3, "English", "Fantastic", 5, id_readers, d5_publication, 1);
Date d6_publication(6, 12, 2022);
Book b6("The beginning of the hero", a2, "English", "Fantastic", 6, id_readers, d6_publication, 1);

std::vector<Book> books = { b1, b2, b3, b4, b5, b6 }; 


