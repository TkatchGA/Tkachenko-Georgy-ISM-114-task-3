#include <string>
#include <sstream>
#include <iostream>
#include "classes.h"


human(const std::string name, const int age, const int weight, const bool gender)
{
    _name = name;
    _age = age;
    _weight = weight;
}

void SetName(const std::string name)
{
    _name = name;
}

void SetAge(const int age)
{
    if (age <= 0) {
        throw;
    } else {
        _age = age;
    }
}

void Setweight(const int weight)
{
    if (weight < 0) {
        throw;
    } else {
        _weight = weight;
    }
}

void SetGender(const bool gender)
{
    if (gender == true) {
        _gender = "Мужчина";
    } else {
        _gender = "Женщина";
    }
}

};

student(const int year, const std::string name, const int age, const int weight, const bool gender) : base(year, name, age, weight, gender)
{
    _year = year;
}

void SetYear(const int year)
{
    if (year > 2021) {
        _year = year;
    }
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

