//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_FAMILYSERVICE_H
#define FAMILY_BUDGET_MANAGER_FAMILYSERVICE_H


#include "../entities/FamilyMember.h"
#include "../entities/Family.h"
#include "../entities/HeadOfFamily.h"
#include "../entities/User.h"

class FamilyService {
public:
    virtual FamilyMember AddUserByLink(const User &user, const std::string &joinLink) = 0;

    virtual void RemoveUserFromFamily(const User &user, const Family &family) = 0;

    virtual std::string GenerateInviteLink(const HeadOfFamily &headOfFamily) = 0;
};


#endif //FAMILY_BUDGET_MANAGER_FAMILYSERVICE_H
