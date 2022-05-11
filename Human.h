//
// Created by Martynas Skrebė on 2022-05-09.
//

#ifndef INC_1_UZD_HUMAN_H
#define INC_1_UZD_HUMAN_H


#include <string>
#include <vector>

class Human {
protected:
    std::string firstName;
    std::string lastName;

public:
    virtual void f() = 0;

    Human();
    Human(const Human &other);
    Human &operator=(const Human &other);
    ~Human();

    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);

    std::string getFirstName();
    std::string getLastName();
};


#endif //INC_1_UZD_HUMAN_H
