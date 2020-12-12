//
// Created by illfate on 12/12/20.
//

#ifndef FAMILY_BUDGET_MANAGER_PAYMENTADAPTER_H
#define FAMILY_BUDGET_MANAGER_PAYMENTADAPTER_H


#include "../entities/FinancialEvent.h"
#include "../entities/UserPaymentAccount.h.h"

class PaymentAdapter {
public:
    virtual void Subscribe(std::functional<void(const FinancialEvent &)>) = 0;

    virtual UserFinance GetInfo(const UserPaymentAccount &account) = 0;
};


#endif //FAMILY_BUDGET_MANAGER_PAYMENTADAPTER_H
