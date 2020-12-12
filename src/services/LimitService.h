//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_LIMITSERVICE_H
#define FAMILY_BUDGET_MANAGER_LIMITSERVICE_H

#include "../entities/Limit.h"


class LimitService {
public:
    virtual Limit Add(Limit) = 0;

    virtual Limit AddToAllPayments(Limit) = 0;

    virtual void Remove(Limit) = 0;
};


#endif //FAMILY_BUDGET_MANAGER_LIMITSERVICE_H
