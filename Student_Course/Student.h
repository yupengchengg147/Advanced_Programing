#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include "Course.h"


class Student {
private:
    std::string _name = "ABC";
    const std::string _reg_num;
    std::vector<Course> _course_list;

public:
    Student(std::string name, std::string reg_num); //, std::vector<Course> ini_course_list);

    void register_for(const Course & new_courses);
    void list_courses() const;

friend class StudentCard;

};

#endif