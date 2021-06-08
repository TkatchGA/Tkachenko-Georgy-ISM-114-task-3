#pragma once
#include <string>
#include <iostream>
#include "man.h"


class student : virtual public man {

    private:

    /**
     * @brief Год обучения
     */
    double year;

    public:
    /**
     * @brief Construct a new student object
     * 
     * @param year 
     */
    explicit student(const std::string name, const double age, const std::string gender, const double weight, const double year)
        : man(name, age, gender, weight)
        {
            this->year = year;
        };

    /**
     * @brief Construct a new student object
     * 
     * @param other 
     */
    student(const student& other);

    /**
     * @brief Construct a new student object
     * 
     * @param other 
     */
    student(student&& other) = default;

    /**
     * @brief Destroy the student object
     * 
     */
    ~student() = default;

    /**
     * @brief Get the year object
     * 
     * @return double 
     */

    double get_year() const;

    /**
     * @brief переназначение смена года 
     * @return переназначенное change_year
     */
    double change_year(const double get_year);


    /**
     * @brief Увеличение года на один
     * 
     */
    double change_year_number(const double get_year);


    std::string to_string() const;

    friend std::ostream& operator << (std::ostream& out, const student& vector);

};