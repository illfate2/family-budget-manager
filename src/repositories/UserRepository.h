//
// Created by illfate on 12/5/20.
//

#ifndef FAMILY_BUDGET_MANAGER_USERREPOSITORY_H
#define FAMILY_BUDGET_MANAGER_USERREPOSITORY_H

#include <string>
#include "repository.h"
#include "../entities/User.h"

class UserRepository : virtual public Repository<User> {
public:
    virtual User FindByEmail(const std::string &email) const = 0;
};


#endif //FAMILY_BUDGET_MANAGER_USERREPOSITORY_H
