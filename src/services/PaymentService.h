//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_PAYMENTSERVICE_H
#define FAMILY_BUDGET_MANAGER_PAYMENTSERVICE_H

#include "../entities/Payment.h"

class PaymentService {
public:
    virtual Payment Add(const Payment &payment) = 0;

    virtual void Remove(string id) = 0;

    virtual Payment Get(string id) const = 0;

    virtual std::vector <Payment> List() const = 0;
};


#endif //FAMILY_BUDGET_MANAGER_PAYMENTSERVICE_H
