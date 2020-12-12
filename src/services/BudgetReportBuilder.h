//
// Created by illfate on 12/12/20.
//

#ifndef FAMILY_BUDGET_MANAGER_BUDGETREPORTBUILDER_H
#define FAMILY_BUDGET_MANAGER_BUDGETREPORTBUILDER_H

#include "../entities/User.h"
#include "../entities/BudgetReport.h"
#include "../entities/OutcomeReport.h"
#include "../entities/IncomeReport.h"

class BudgetReportBuilder {
public:
    virtual BudgetReport BuildBudgetReport(const User &user) const = 0;

    virtual IncomeReport BuildIncomeReport(const User &user) const = 0;

    virtual OutcomeReport BuildOutcomeReport(const User &user) const = 0;

};


#endif //FAMILY_BUDGET_MANAGER_BUDGETREPORTBUILDER_H
