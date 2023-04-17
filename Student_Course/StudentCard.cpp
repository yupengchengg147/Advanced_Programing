#include "StudentCard.h"

StudentCard::StudentCard(Student & student){
    _student_name = student._name;
}

void StudentCard::print() const{
    std::cout << "the card belongs to " << _student_name << std::endl;
}