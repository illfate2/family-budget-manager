//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_TOKENINFO_H
#define FAMILY_BUDGET_MANAGER_TOKENINFO_H


#include "../entities/User.h"

class TokenInfo {
private:
    std::string userID;
public:
    std::string getUserID() const {
        return userID;
    }

    TokenInfo &setUserID(const std::string &userID) {
        this->userID = userID;
        return *this;
    }

    int getExpTime() const {
        return expTime;
    }

    TokenInfo &setExpTime(int expTime) {
        this->expTime = expTime;
        return *this;

    }

private:
    int expTime;
};


#endif //FAMILY_BUDGET_MANAGER_TOKENINFO_H
