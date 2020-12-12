//
// Created by illfate on 12/5/20.
//

#ifndef FAMILY_BUDGET_MANAGER_USERREADERSERVICE_H
#define FAMILY_BUDGET_MANAGER_USERREADERSERVICE_H

#include "../entities/User.h"

class UserReaderService {
public:
    virtual User GetByID(const std::string &id) const = 0;

    virtual User GetByEmail(const std::string &email) const = 0;
};


#endif //FAMILY_BUDGET_MANAGER_USERREADERSERVICE_H
