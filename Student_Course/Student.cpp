#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

Student::Student(std::string name, std::string reg_num)://, std::vector<Course> ini_course_list):
_reg_num(reg_num)
{
    _name = name;
    // _course_list = ini_course_list;
    std::cout << "my name is" << _name << std::endl;
    std::cout << "my id is" << _reg_num <<std::endl;
}

void Student::register_for(const Course & new_courses){
    _course_list.push_back(new_courses);
}

void Student::list_courses() const {
    std::cout << "registered courses:" <<std::endl;
    for(auto elem: _course_list){
        std::cout << elem.get_id() << "    ";
    }
    std::cout << std::endl;
}
