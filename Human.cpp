//
// Created by Martynas Skrebė on 2022-05-09.
//

#include "Human.h"
#include <utility>

Human::Human() {}

Human::Human(const Human &other) {
    this->firstName = other.firstName;
    this->lastName = other.lastName;
}

Human &Human::operator=(const Human &other) {
    this->firstName = other.firstName;
    this->lastName = other.lastName;

    return *this;
}

Human::~Human() {
    this->firstName.clear();
    this->lastName.clear();
}

void Human::setFirstName(std::string firstName) {
    this->firstName = std::move(firstName);
}

void Human::setLastName(std::string lastName) {
    this->lastName = std::move(lastName);
}

std::string Human::getFirstName() {
    return this->firstName;
}

std::string Human::getLastName() {
    return this->lastName;
}
