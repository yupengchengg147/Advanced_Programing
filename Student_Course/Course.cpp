#include <iostream>
#include "Course.h"


// TODO
Course::Course(std::string id, CourseType type){
    _c_id = id;
    _c_type = type;
    std::cout << "new Coure" << std::endl;
}

std::string Course::get_id() const{
    return _c_id;
}