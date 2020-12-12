//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_LIMITSERVICEIMPL_H
#define FAMILY_BUDGET_MANAGER_LIMITSERVICEIMPL_H

#include "LimitService.h"
#include "../repositories/repository.h"

class LimitServiceImpl : public LimitService {
public:
    Limit Add(Limit limit) override {

    }

    Limit AddToAllPayments(Limit limit) override {
        return Limit();
    }

    void Remove(Limit limit) override {

    }

private:
    Repository<Limit> limitRepo;
};


#endif //FAMILY_BUDGET_MANAGER_LIMITSERVICEIMPL_H
