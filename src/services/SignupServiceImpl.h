//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_SIGNUPSERVICEIMPL_H
#define FAMILY_BUDGET_MANAGER_SIGNUPSERVICEIMPL_H

#include <utility>

#include "TokenGenerator.h"
#include "UserWriterService.h"
#include "TokenInfo.h"
#include "SignupService.h"
#include "memory"


class SignupServiceImpl : public SignupService {
    std::shared_ptr<TokenGenerator> tokenGenerator;
    std::shared_ptr<UserWriterService> userWriterService;
    int expTime;
public:
    SignupServiceImpl(std::shared_ptr<TokenGenerator> tokenGenerator,
                      std::shared_ptr<UserWriterService> userWriterService, int expTime) : tokenGenerator(std::move(
            tokenGenerator)), userWriterService(std::move(userWriterService)), expTime(expTime) {}

    Response Signup(const User &user) override {
        User u = userWriterService->Create(user);
        std::string token = tokenGenerator->GenerateToken(TokenInfo().setExpTime(expTime).setUserID(u.getId()));
        return {token};
    }
};


#endif //FAMILY_BUDGET_MANAGER_SIGNUPSERVICEIMPL_H
