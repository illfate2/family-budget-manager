//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_AUTHENTICATORIMPL_H
#define FAMILY_BUDGET_MANAGER_AUTHENTICATORIMPL_H

#include <utility>

#include "authenticator.h"
#include "../entities/User.h"
#include "TokenRetriever.h"
#include "UserReaderService.h"
#include "TokenInfo.h"

class AuthenticatorImpl : public Authenticator {
public:
    AuthenticatorImpl(std::shared_ptr<TokenRetriever> tokenRetriever,
                      std::shared_ptr<UserReaderService> userReaderService) : tokenRetriever(std::move(tokenRetriever)),
                                                                                     userReaderService(std::move(
                                                                                             userReaderService)) {}

    User Authenticate(const std::string &token) const override {
        auto tokenInfo = tokenRetriever->RetrieveToken(token);
        std::string userID = tokenInfo.getUserID();
        return userReaderService->GetByID(userID);
    }

private:
    std::shared_ptr<TokenRetriever> tokenRetriever;
    std::shared_ptr<UserReaderService> userReaderService;
};


#endif //FAMILY_BUDGET_MANAGER_AUTHENTICATORIMPL_H
