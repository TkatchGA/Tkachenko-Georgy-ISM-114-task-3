#include <string>
#include <sstream>
#include <iostream>
#include "classes.h"


human::human(const std::string name, const int age, const int weight, const bool gender)
    : name(name), age(age), weight(weight), gender(gender) {}

std::string human::get_name() const {
    return this->name;
}

int human::get_age() const {
    return this->age;
}
int human::get_weight() const {
    return this->weight;
}
bool human::get_gender() const {
    return this->gender;
}

void SetName(const std::string name)
{
    return this->name;
}

void SetAge(const int age)
{
    if (age <= 0) {
        throw;
    }
    return this->age;
}

void Setweight(const int weight)
{
    if (weight <= 0) {
        throw;
    }
    return this->weight;
}

void SetGender(const bool this->gender)
{
    if (this->gender == true) {
        _gender = "Мужчина";
    } else {
        _gender = "Женщина";
    }
}

};

student(const int year, const std::string name, const int age, const int weight, const bool gender) : base(year, name, age, weight, gender)
    : year(year);

int student::get_gender() const {
    return this->year;
}

void SetYear(const int year)
{
    if (year < CURRENT_YEAR) {
        throw;
    }
    return this->year;
}

void AddYear(const int addValue)
{
    this->year += addValue;
}

void AddYear()
{
    this->year++;
}

std::string student::ToString() const;
{
  std::stringstream buffer;
  buffer << "{" << this->name << ", ";
  buffer << this->age << ", ";
  buffer << this->weight << ", ";
  buffer << this->gender << ", ";
  buffer << _year << "}";

  return buffer.str();
}

