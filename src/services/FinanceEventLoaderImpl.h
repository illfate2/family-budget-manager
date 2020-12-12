//
// Created by illfate on 12/13/20.
//

#ifndef FAMILY_BUDGET_MANAGER_FINANCEEVENTLOADERIMPL_H
#define FAMILY_BUDGET_MANAGER_FINANCEEVENTLOADERIMPL_H

#include <string>
#include "FinanceEventLoader.h"

class FinanceEventLoaderImpl: public FinanceEventLoader {
    UserFinance Load(const std::string &userID) override {
        return UserFinance();
    }
};


#endif //FAMILY_BUDGET_MANAGER_FINANCEEVENTLOADERIMPL_H
