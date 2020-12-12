//
// Created by illfate on 12/5/20.
//

#ifndef FAMILY_BUDGET_MANAGER_USER_H
#define FAMILY_BUDGET_MANAGER_USER_H


#include <string>

class User {
private:
    std::string ID;
public:
    const std::string &getId() const {
        return ID;
    }

    void setId(const std::string &id) {
        ID = id;
    }

private:
    std::string first_name;
public:
    const std::string &getFirstName() const {
        return first_name;
    }

    User &setFirstName(const std::string &firstName) {
        first_name = firstName;
        return *this;
    }

    const std::string &getSecondName() const {
        return second_name;
    }

    User &setSecondName(const std::string &secondName) {
        second_name = secondName;
        return *this;
    }

    const std::string &getEmail() const {
        return email;
    }

    User &setEmail(const std::string &email) {
        User::email = email;
        return *this;
    }

    const std::string &getPassword() const {
        return password;
    }

    User &setPassword(const std::string &password) {
        User::password = password;
        return *this;
    }

private:
    std::string second_name;
    std::string email;
    std::string password;
};


#endif //FAMILY_BUDGET_MANAGER_USER_H
