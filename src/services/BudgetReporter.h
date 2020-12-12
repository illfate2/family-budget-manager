//
// Created by illfate on 12/12/20.
//

#ifndef FAMILY_BUDGET_MANAGER_BUDGETREPORTER_H
#define FAMILY_BUDGET_MANAGER_BUDGETREPORTER_H

#include "../entities/User.h"
#include "../entities/BudgetReport.h"
#include "../entities/IncomeReport.h"
#include "../entities/OutcomeReport.h"

class BudgetReporter {
public:
    virtual BudgetReport GetOverallReport(const User &user) const = 0;

    virtual IncomeReport GetIncomeReport(const User &user) const = 0;

    virtual OutcomeReport GetOutcomeReport(const User &user) const = 0;
};


#endif //FAMILY_BUDGET_MANAGER_BUDGETREPORTER_H
