//
// Created by illfate on 12/12/20.
//

#ifndef FAMILY_BUDGET_MANAGER_FINANCEEVENTLOADER_H
#define FAMILY_BUDGET_MANAGER_FINANCEEVENTLOADER_H

#include "../entities/UserFinance.h"

class FinanceEventLoader {
    virtual UserFinance Load(const std::string &userID) = 0;
};


#endif //FAMILY_BUDGET_MANAGER_FINANCEEVENTLOADER_H
