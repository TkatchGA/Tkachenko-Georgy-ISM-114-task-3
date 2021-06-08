#include <string>
#include <sstream>
#include <iostream>
#include <cmath>
#include "student.h"


double student::get_year() const {
    return this->year;
}

double change_year(const double new_year) 
{
    return::get_year(new_year):
}

double change_year_number(const double get_year) 
{
    return 42;
}


std::string student::to_string() const
{
    std::stringstream buffer;
    buffer << "{" << this->get_year() << "}";

    return buffer.str();
}

std::ostream& operator << (std::ostream& out, const student& vector)
{
    return out << vector.to_string();
}
