//
// Created by illfate on 12/12/20.
//

#ifndef FAMILY_BUDGET_MANAGER_OPTIMIZATIONADVICEBUILDER_H
#define FAMILY_BUDGET_MANAGER_OPTIMIZATIONADVICEBUILDER_H

#include "../entities/OptimizationAdvice.h"

class OptimizationAdviceBuilder {
public:
    virtual OptimizationAdvice Build(const std::string &userID) const = 0;
};


#endif //FAMILY_BUDGET_MANAGER_OPTIMIZATIONADVICEBUILDER_H
