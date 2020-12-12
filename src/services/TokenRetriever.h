//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_TOKENRETRIEVER_H
#define FAMILY_BUDGET_MANAGER_TOKENRETRIEVER_H

#include "../entities/User.h"

class TokenRetriever {
public:
    virtual TokenInfo RetrieveToken(const std::string &token) const = 0;
};


#endif //FAMILY_BUDGET_MANAGER_TOKENRETRIEVER_H
