//
// Created by illfate on 12/12/20.
//

#ifndef FAMILY_BUDGET_MANAGER_BUDGETREPORTBUILDERIMPL_H
#define FAMILY_BUDGET_MANAGER_BUDGETREPORTBUILDERIMPL_H

#include "BudgetReportBuilder.h"

class BudgetReportBuilderImpl : public BudgetReportBuilder {
public:
    BudgetReport BuildBudgetReport(const User &user) const override {
        return BudgetReport();
    }

    IncomeReport BuildIncomeReport(const User &user) const override {
        return IncomeReport();
    }

    OutcomeReport BuildOutcomeReport(const User &user) const override {
        return OutcomeReport();
    }
};


#endif //FAMILY_BUDGET_MANAGER_BUDGETREPORTBUILDERIMPL_H
