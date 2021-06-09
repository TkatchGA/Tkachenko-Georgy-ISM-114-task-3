#include <string>
#include <sstream>
#include <iostream>
#include "classes.h"


human(std::string name, int age, int weight, std::string gender)
{
    _name = name;
    _age = age;
    _weight = weight;
    _gender = gender;
}

void SetName(std::string name)
{
    _name = name;
}

void SetAge(int age)
{
    _age = age;
}

void Setweight(int weight)
{
    _weight = weight;
}

};

student(int year, std::string name, int age, int weight, std::string gender) : base(year, name, age, weight, gender)
{
    _year = year;
}

void SetYear(int year)
{
    _year = year;
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

