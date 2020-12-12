//
// Created by illfate on 12/13/20.
//

#ifndef FAMILY_BUDGET_MANAGER_PAYMENTSERVICEIMPL_H
#define FAMILY_BUDGET_MANAGER_PAYMENTSERVICEIMPL_H

#include <vector>
#include "PaymentService.h"

class PaymentServiceImpl: public PaymentService {
public:
    Payment Add(const Payment &payment) override {
        return Payment();
    }

    void Remove(string id) override {

    }

    Payment Get(string id) const override {
        return Payment();
    }

    std::vector <Payment> List() const override {
        return nullptr;
    }
};


#endif //FAMILY_BUDGET_MANAGER_PAYMENTSERVICEIMPL_H
