#include <string>
#include <sstream>
#include <iostream>
#include "classes.h"


human::human(const std::string name, const int age, const int weight, const bool gender)
    : name(name), age(age), weight(weight), gender(gender) {}

double human::get_name() const {
    return this->name;
}

double human::get_age() const {
    return this->age;
}
double human::get_name() const {
    return this->weight;
}
double human::get_gender() const {
    return this->gender;
}

void SetName(const std::string name)
{
    _name = this->name;
}

void SetAge(const int age)
{
    if (age <= 0) {
        throw;
    }
    _age = this->age;
}

void Setweight(const int weight)
{
    if (weight <= 0) {
        throw;
    }
    _weight = this->weight;
}

void SetGender(const bool this->gender)
{
    if (gender == true) {
        _gender = "Мужчина";
    } else {
        _gender = "Женщина";
    }
}

};

student(const int year, const std::string name, const int age, const int weight, const bool gender) : base(year, name, age, weight, gender)
    : year(year);

double student::get_gender() const {
    return this->year;
}

void SetYear(const int year)
{
    if (year < CURRENT_YEAR) {
        throw;
    }
    _year = this->year;
}

void AddYear(const int addValue)
{
    _year += addValue;
}

void AddYear()
{
    _year++;
}

std::string student::ToString() const;
{
  std::stringstream buffer;
  buffer << "{" << _name << ", ";
  buffer << _age << ", ";
  buffer << _weight << ", ";
  buffer << _gender << ", ";
  buffer << _year << "}";

  return buffer.str();
}

