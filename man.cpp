#include <string>
#include <sstream>
#include <iostream>
#include "man.h"

man::man(const std::string name, const double age, const std::string gender, const double weight)
    : name(name), age(age), gender(gender), weight(weight) {}

std::string man::get_name() const {
    return this->name;
}

double man::get_age() const {
    return this->age;
}

std::string man::gender() const {
    return this->gender;
}

double man::get_weight() const {
    return this->weight;
}


    void man::set_name(const std::string name)
    {
        this->name = name;
    };

    void man::set_age(const double age)
    {
        if (age > 0 && age < 120) {
        this->age = age;
        } else {
            
        }
    };

    void man::set_weight(const double weight)
    {
        this->weight = weight;
    };


// создать проверку диапазона 

std::string man::to_string() const
{
    std::stringstream buffer;
    buffer << "{" << this->get_name() << ", ";
    buffer << this->get_age() << ", ";
    buffer << this->gender() << ", ";
    buffer << this->get_weight() << "}";

    return buffer.str();
}

std::ostream& operator << (std::ostream& out, const man& vector)
{
    return out << vector.to_string();
}