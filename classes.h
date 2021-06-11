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

    human(std::string name, int age, int weight, bool gender);
    /**
     * @brief Set the Name object
     * 
     * @param name 
     */
    void SetName(std::string name);

    /**
     * @brief Set the Age object
     * 
     * @param age 
     */
    void SetAge(int age);

    /**
     * @brief 
     * 
     * @param weight 
     */

    void Setweight(int weight);

    /**
     * @brief Set the Gender object
     * 
     * @param gender 
     */

    void SetGender(bool gender);

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

    student(int year, std::string name, int age, int weight, bool gender) 
        : base(year, name, age, weight, gender);

    /**
     * @brief Set the Year object
     * 
     * @param year 
     */

    void SetYear(int year);

    /**
     * @brief Изменение года
     * 
     * @param addValue 
     */

    void AddYear(int addValue);

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
