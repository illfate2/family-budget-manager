//
// Created by illfate on 12/12/20.
//

#ifndef FAMILY_BUDGET_MANAGER_OPTIMIZATIONADVICESERVICEIMPL_H
#define FAMILY_BUDGET_MANAGER_OPTIMIZATIONADVICESERVICEIMPL_H

#include <string>
#include "OptimizationAdviceService.h"

class OptimizationAdviceServiceImpl: public OptimizationAdviceService {
public:
    OptimizationAdvice Get(const std::string &userID) const override {
        return OptimizationAdvice();
    }
};


#endif //FAMILY_BUDGET_MANAGER_OPTIMIZATIONADVICESERVICEIMPL_H
