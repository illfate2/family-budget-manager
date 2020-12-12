//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_FAMILYSERVICEIMPL_H
#define FAMILY_BUDGET_MANAGER_FAMILYSERVICEIMPL_H

#include "FamilyService.h"

class FamilyServiceImpl: public FamilyService {
public:
    FamilyMember AddUserByLink(const User &user, const std::string &joinLink) override {
        return FamilyMember();
    }

    void RemoveUserFromFamily(const User &user, const Family &family) override {

    }

    std::string GenerateInviteLink(const HeadOfFamily &headOfFamily) override {
        return std::string();
    }
};


#endif //FAMILY_BUDGET_MANAGER_FAMILYSERVICEIMPL_H
