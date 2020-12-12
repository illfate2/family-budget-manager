//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_AUTHENTICATOR_H
#define FAMILY_BUDGET_MANAGER_AUTHENTICATOR_H


class Authenticator {
public:
    virtual User Authenticate(const std::string &token) const = 0;
};


#endif //FAMILY_BUDGET_MANAGER_AUTHENTICATORIMPL_H
