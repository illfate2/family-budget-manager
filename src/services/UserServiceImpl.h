//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_USERSERVICEIMPL_H
#define FAMILY_BUDGET_MANAGER_USERSERVICEIMPL_H

#include <utility>

#include "UserReaderService.h"
#include "UserWriterService.h"
#include "../repositories/UserRepository.h"


class UserServiceImpl : public UserReaderService, public UserWriterService {
private:
    std::shared_ptr<UserRepository> repository;
public:
    UserServiceImpl(std::shared_ptr<UserRepository> repository) : repository(std::move(repository)) {}

    User GetByID(const std::string &id) const override {
        return repository->FindByID(id);
    }

    User GetByEmail(const std::string &email) const override {
        return repository->FindByEmail(email);
    }

    User Create(const User &user) override {
        return repository->Save(user);
    }
};


#endif //FAMILY_BUDGET_MANAGER_USERSERVICEIMPL_H
