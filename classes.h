#pragma once
#include <string>
#include <iostream>

/**
 * @brief Класс человек
 * 
 */

class human
{
  protected :

    /**
     * @brief имя
     * 
     */
    std::string _name;

    /**
     * @brief возраст
     * 
     */
    int _age;

    /**
     * @brief вес
     * 
     */
    int _weight;

    /**
     * @brief гендер
     * 
     */
    std::string _gender;
  

  public :

    /**
     * \brief Конструктор копирования
     */
    human(const human& other);


    /**
     * \brief Деструктор по умолчанию
     */
    ~human() = default;

    /**
     * @brief конструктор нового обьекта человек
     * 
     * @param name 
     * @param age 
     * @param weight 
     * @param gender 
     */

    human(const std::string name, const int age, const int weight, const bool gender);
    /**
     * @brief Set the Name object
     * 
     * @param name 
     */
    void SetName(const std::string name);

    /**
     * @brief Set the Age object
     * 
     * @param age 
     */
    void SetAge(const int age);

    /**
     * @brief 
     * 
     * @param weight 
     */

    void Setweight(const int weight);

    /**
     * @brief Set the Gender object
     * 
     * @param gender 
     */

    void SetGender(const bool gender);

};

    /**
     * @brief производный класс студент 
     * 
     */

    class student : human
    {

    private :
        /**
         * @brief Создание переменной год
         * 
         */

        int _year;

    public :

    /**
     * \brief Конструктор копирования
     */
    student(const student& other);


    /**
     * \brief Деструктор по умолчанию
     */
    ~student() = default;

    /**
     * @brief конструктор нового обьекта студент
     * 
     * @param year 
     * @param name 
     * @param age 
     * @param weight 
     * @param gender 
     */

    student(const int year, const std::string name, const int age, const int weight, const bool gender) 
        : base(year, name, age, weight, gender);

    /**
     * @brief Set the Year object
     * 
     * @param year 
     */

    void SetYear(const int year);

    /**
     * @brief Изменение года
     * 
     * @param addValue 
     */

    void AddYear(const int addValue);

    /**
     * @brief Увелечение года
     * 
     */
    void AddYear();
    /**
     * @brief Метод для корректного вывода ответа
     */
    std::string ToString();
};
