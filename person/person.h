#ifndef __PERSON_H_
#define __PERSON_H_
#include<string>
#include<array>
#include<random>

enum class Status
{
    Healthy,
    Infectious,
};

class Person
{
private:
    Status _status = Status::Healthy;
    // location is two dimensional

    std::array<double, 2> _curr_location = {0.0, 0.0};
    
    // Each person should get a unique id
    const unsigned int _id;

    // static class member: shared across all class objects
    // inline: so we can initialize it here, see worksheet.
    static inline unsigned _counter = 0;


public:
    //constructor
    Person() = default;
    Person(std::array<double,2> ini_location);

    // getter
    std::array<double,2> get_location() const;
    unsigned get_id() const;

    void advance();

    //copy constructor
    Person(const Person & oth_person);

    //copy assignment
    Person & operator= (const Person & oth_person);


};



#endif // __PERSON_H_
