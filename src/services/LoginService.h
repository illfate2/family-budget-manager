//
// Created by illfate on 12/5/20.
//

#ifndef FAMILY_BUDGET_MANAGER_LOGINSERVICE_H
#define FAMILY_BUDGET_MANAGER_LOGINSERVICE_H


class LoginService {
public:
    struct Response {
        std::string token{};
    };

    virtual Response Login(const User &user) = 0;
};


#endif //FAMILY_BUDGET_MANAGER_LOGINSERVICE_H
