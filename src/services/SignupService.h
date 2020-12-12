//
// Created by illfate on 12/5/20.
//

#ifndef FAMILY_BUDGET_MANAGER_SIGNUPSERVICE_H
#define FAMILY_BUDGET_MANAGER_SIGNUPSERVICE_H


class SignupService {
public:
    struct Response {
        std::string token;
    };

    virtual Response Signup(const User &user) = 0;
};


#endif //FAMILY_BUDGET_MANAGER_SIGNUPSERVICE_H
