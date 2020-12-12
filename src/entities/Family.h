//
// Created by illfate on 12/5/20.
//

#ifndef FAMILY_BUDGET_MANAGER_FAMILY_H
#define FAMILY_BUDGET_MANAGER_FAMILY_H


class Family {
private:
    std::string ID;
    HeadOfFamily headOfFamily;
    std::vector <FamilyMember> members;
};


#endif //FAMILY_BUDGET_MANAGER_FAMILY_H
