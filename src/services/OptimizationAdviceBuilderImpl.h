//
// Created by illfate on 12/12/20.
//

#ifndef FAMILY_BUDGET_MANAGER_OPTIMIZATIONADVICEBUILDERIMPL_H
#define FAMILY_BUDGET_MANAGER_OPTIMIZATIONADVICEBUILDERIMPL_H

#include <string>
#include "OptimizationAdviceBuilder.h"

class OptimizationAdviceBuilderImpl: public OptimizationAdviceBuilder {
public:
    OptimizationAdvice Build(const std::string &userID) const override {
        return OptimizationAdvice();
    }
};


#endif //FAMILY_BUDGET_MANAGER_OPTIMIZATIONADVICEBUILDERIMPL_H
