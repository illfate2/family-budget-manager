//
// Created by illfate on 12/13/20.
//

#ifndef FAMILY_BUDGET_MANAGER_PAYMENTREPOSITORY_H
#define FAMILY_BUDGET_MANAGER_PAYMENTREPOSITORY_H


#include <string>
#include "repository.h"

class PaymentRepository : public Repository {
private:
    Repository<>

public:
    T FindByID(const std::string &id) const override {
        return nullptr;
    }

    T Update(const T &t) override {
        return nullptr;
    }

    void Delete(const std::string &id) override {

    }

    T Save(const T &t) override {
        return nullptr;
    }
};


#endif //FAMILY_BUDGET_MANAGER_PAYMENTREPOSITORY_H
