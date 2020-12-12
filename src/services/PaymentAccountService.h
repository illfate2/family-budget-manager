//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_PAYMENTACCOUNTSERVICE_H
#define FAMILY_BUDGET_MANAGER_PAYMENTACCOUNTSERVICE_H

#include "../entities/UserPaymentAccount.h"

class PaymentAccountService {
public:
    virtual UserPaymentAccount Add(UserPaymentAccount) = 0;

};


#endif //FAMILY_BUDGET_MANAGER_PAYMENTACCOUNTSERVICE_H
