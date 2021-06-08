#pragma once
#include <string>
#include <iostream>

class man {
    protected:
    /**
     * @brief имя name
     */
    std::string name;

    /**
     * @brief возраст age 
     * 
     */
    double age;

    /**
     * @brief пол человека man_woman
     */
    std::string gender;

    /**
     * @brief вес weight
     * 
     */
    double weight;



    public:

    /**
     * @brief Параметризированный конструктор
     * @param name имя человека
     * @param age возраст человека 
     * @param gender пол человека
     * @param weight вес человека 
     */

    explicit man(const std::string name, const double age, const std::string gender, const double weight);
    /**
     * @brief Конструктор копирования
     * посмотреть 
     */

    man(const man& other);

    /**
     * @brief конструтор перемещения 
     * 
     * @param other 
     */
    man(man&& other) = default;

    /**
     * @brief Деструктор
     */
    ~man() = default;

    /**
     * @brief Get the name object
     * 
     * @return std::string 
     */
    std::string get_name() const;

    /**
     * @brief Get the age object
     * 
     * @return double 
     */
    double get_age() const;    

    /**
     * @brief Get the man woman object
     * 
     * @return std::string 
     */
    std::string gender() const;

    /**
     * @brief Get the weight object
     * 
     * @return double 
     */
    double get_weight() const;


    /**
     * @brief переназначение имени 
     * @return переназначенное name
     */

    void set_name(const std::string name);

    /**
     * @brief переназначение возраста 
     * @return переназначенное age
     */
    void set_age(const double age);

    /**
     * @brief переназначение веса 
     * @return переназначенное weight
     */
    void set_weight(const double weight);

    std::string to_string() const;

    friend std::ostream& operator << (std::ostream& out, const man& vector);

};