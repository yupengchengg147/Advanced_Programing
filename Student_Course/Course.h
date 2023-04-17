#ifndef COURSE_H
#define COURSE_H

#include <string>

enum class CourseType{
    Lecture,
    Seminar,
    Practical,
};

class Course {
private:
    std::string _c_id;
    CourseType _c_type;

public:
    Course(std::string id, CourseType type);
    std::string get_id() const;
};

#endif // COURSE_Η