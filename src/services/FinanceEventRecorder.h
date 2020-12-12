//
// Created by illfate on 12/12/20.
//

#ifndef FAMILY_BUDGET_MANAGER_FINANCEEVENTRECORDER_H
#define FAMILY_BUDGET_MANAGER_FINANCEEVENTRECORDER_H

#include "../entities/FinancialEvent.h"

class FinanceEventRecorder {
public:
    virtual void Record(const FinancialEvent &event) = 0;
};


#endif //FAMILY_BUDGET_MANAGER_FINANCEEVENTRECORDER_H
