//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_USERREPOSITORYIMPL_H
#define FAMILY_BUDGET_MANAGER_USERREPOSITORYIMPL_H

#include "UserRepository.h"
#include "RepositoryImpl.h"

class UserRepositoryImpl : public UserRepository, public RepositoryImpl<User> {
public:
    User FindByID(const std::string &id) const override {
        return RepositoryImpl::FindByID(id);
    }

    User FindByEmail(const std::string &email) const override {
        for (const auto&[id, user]: RepositoryImpl::data) {
            if (user.getEmail() == email) {
                return user;
            }
        }
        throw std::invalid_argument("not found");
    }

    User Update(const User &user) override {
        return RepositoryImpl::Update(user);
    }

    void Delete(const std::string &id) override {
        return RepositoryImpl::Delete(id);

    }

    User Save(const User &user) override {
        return RepositoryImpl::Save(user);
    }
};


#endif //FAMILY_BUDGET_MANAGER_USERREPOSITORYIMPL_H
