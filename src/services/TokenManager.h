//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_TOKENMANAGER_H
#define FAMILY_BUDGET_MANAGER_TOKENMANAGER_H

#include <utility>

#include "TokenRetriever.h"
#include "TokenGenerator.h"
#include "TokenInfo.h"

class TokenManager : public TokenGenerator, public TokenRetriever {
public:
    TokenManager(std::string secret) : secret(std::move(secret)) {}

    std::string GenerateToken(const TokenInfo &tokenInfo) const override {
        return tokenInfo.getUserID() + " " + std::to_string(tokenInfo.getExpTime());
    }

    TokenInfo RetrieveToken(const std::string &token) const override {
        size_t space_idx = token.find(' ');
        std::string userID = token.substr(0, space_idx);
        std::string expTimeStr = token.substr(space_idx + 1, token.size());
        int expTime = std::stoi(expTimeStr);
        return TokenInfo().setUserID(userID).setExpTime(expTime);
    }

private:
    std::string secret;
};


#endif //FAMILY_BUDGET_MANAGER_TOKENMANAGER_H
