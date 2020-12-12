//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_LOGINSERVICEIMPL_H
#define FAMILY_BUDGET_MANAGER_LOGINSERVICEIMPL_H

#include <utility>

#include "LoginService.h"
#include "../entities/User.h"
#include "UserReaderService.h"
#include "TokenGenerator.h"
#include "TokenInfo.h"

class LoginServiceImpl : public LoginService {
public:
    Response Login(const User &user) override {
        User u = userReaderService->GetByEmail(user.getEmail());
        if (u.getPassword() != user.getPassword()) {
            throw std::invalid_argument("passwords don't match");
        }
        std::string token = tokenGenerator->GenerateToken(TokenInfo().setExpTime(expTime).setUserID(u.getId()));
        return {token};
    }

    LoginServiceImpl(int expTime, std::shared_ptr<TokenGenerator> tokenGenerator,
                     std::shared_ptr<UserReaderService> userReaderService) : expTime(expTime),
                                                                             tokenGenerator(std::move(tokenGenerator)),
                                                                             userReaderService(std::move(
                                                                                     userReaderService)) {}

private:
    int expTime;
    std::shared_ptr<TokenGenerator> tokenGenerator;
    std::shared_ptr<UserReaderService> userReaderService;
};


#endif //FAMILY_BUDGET_MANAGER_LOGINSERVICEIMPL_H
