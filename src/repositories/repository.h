//
// Created by illfate on 12/5/20.
//

#ifndef FAMILY_BUDGET_MANAGER_REPOSITORY_H
#define FAMILY_BUDGET_MANAGER_REPOSITORY_H

template<typename T>
class Repository {
public:
    virtual T FindByID(const std::string &id) const = 0;

    virtual T Update(const T &t) = 0;

    virtual void Delete(const std::string &id) = 0;

    virtual T Save(const T &t) = 0;

};

#endif //FAMILY_BUDGET_MANAGER_REPOSITORY_H
