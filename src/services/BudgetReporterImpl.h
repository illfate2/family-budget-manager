//
// Created by illfate on 12/12/20.
//

#ifndef FAMILY_BUDGET_MANAGER_BUDGETREPORTERIMPL_H
#define FAMILY_BUDGET_MANAGER_BUDGETREPORTERIMPL_H

#include "BudgetReporter.h"

class BudgetReporterImpl : public BudgetReporter {
public:
    BudgetReport GetOverallReport(const User &user) const override {
        return BudgetReport();
    }

    IncomeReport GetIncomeReport(const User &user) const override {
        return IncomeReport();
    }

    OutcomeReport GetOutcomeReport(const User &user) const override {
        return OutcomeReport();
    }
};


#endif //FAMILY_BUDGET_MANAGER_BUDGETREPORTERIMPL_H
