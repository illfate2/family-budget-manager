//
// Created by illfate on 12/5/20.
//

#ifndef FAMILY_BUDGET_MANAGER_USERWRITERSERVICE_H
#define FAMILY_BUDGET_MANAGER_USERWRITERSERVICE_H

#include "../entities/User.h"

class UserWriterService {
public:
    virtual User Create(const User &user) = 0;
};


#endif //FAMILY_BUDGET_MANAGER_USERWRITERSERVICE_H
