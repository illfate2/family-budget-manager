//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_TOKENGENERATOR_H
#define FAMILY_BUDGET_MANAGER_TOKENGENERATOR_H

#include "TokenInfo.h"

class TokenGenerator {
public:
    virtual std::string GenerateToken(const TokenInfo &tokenInfo) const = 0;
};


#endif //FAMILY_BUDGET_MANAGER_TOKENGENERATOR_H
