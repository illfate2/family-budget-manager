//
// Created by illfate on 12/12/20.
//

#ifndef FAMILY_BUDGET_MANAGER_OPTIMIZATIONADVICESERVICE_H
#define FAMILY_BUDGET_MANAGER_OPTIMIZATIONADVICESERVICE_H

#include "../entities/OptimizationAdvice.h"


class OptimizationAdviceService {
public:
   virtual OptimizationAdvice Get(const std::string &userID) const =0;
};


#endif //FAMILY_BUDGET_MANAGER_OPTIMIZATIONADVICESERVICE_H
