#include "person.h"

// 1. TODO: Implement a constructor that takes a
// location array and creates a unique_id for the
// object.

Person::Person(std::array<double,2> ini_location):_id(Person::_counter++)
{
    _curr_location = ini_location;
}

//
// 2. TODO: Implement the copy constructor

Person::Person(const Person & oth_person):_id(Person::_counter++)
{
    _status = oth_person._status;
    _curr_location = oth_person._curr_location;
}
//
// 3. TODO: Implement the copy assignment operator.
// only constructor, copy constructor can do member initialization;
// 
Person& Person::operator=(const Person & oth_person)
{
    if(this != &oth_person){
        (*this)._status = oth_person._status;
        (*this)._curr_location = oth_person._curr_location;
        return *this;
    }
    else{
        return *this;
    }

}

std::array<double,2> Person::get_location() const {
   return _curr_location;
}

unsigned Person::get_id() const {
    return _id;
}

void Person::advance(){
    // for now, do advance doesn't
    // do anything sensible
    _curr_location[0] += 0.1;
    _curr_location[1] -= 0.1;
}

