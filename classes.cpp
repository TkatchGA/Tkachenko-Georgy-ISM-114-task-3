#include <string>
#include <sstream>
#include <iostream>
#include "classes.h"


human(std::string name, int age, int weight, bool gender)
{
    _name = name;
    _age = age;
    _weight = weight;
}

void SetName(std::string name)
{
    _name = name;
}

void SetAge(int age)
{
    if (age > 0) {
        _age = age;
    }
}

void Setweight(int weight)
{
    if (weight > 0) {
        _weight = weight;
    }
}

void SetGender(bool gender)
{
    if (gender == true) {
        _gender = "Мужчина";
    } else {
        _gender = "Женщина";
    }
}

};

student(int year, std::string name, int age, int weight, bool gender) : base(year, name, age, weight, gender)
{
    _year = year;
}

void SetYear(int year)
{
    if (year > 2021) {
        _year = year;
    }
}

void AddYear(int addValue)
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

