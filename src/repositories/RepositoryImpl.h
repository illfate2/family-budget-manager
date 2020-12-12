//
// Created by illfate on 12/5/20.
//

#ifndef FAMILY_BUDGET_MANAGER_REPOSITORYIMPL_H
#define FAMILY_BUDGET_MANAGER_REPOSITORYIMPL_H


#include <string>
#include "repository.h"
#include <unordered_map>
#include <random>

template<typename T>
class RepositoryImpl : public Repository<T> {
public:
    T FindByID(const std::string &id) const override {
        return data.at(id);
    }

    T Update(const T &t) override {
    }

    void Delete(const std::string &id) override {

    }

    T Save(const T &t) override {
        auto id = get_uuid();
        T tmp = t;
        tmp.setId(id);
        data[id] = tmp;
        return tmp;
    }

protected:
    std::unordered_map<std::string, T> data;

private:

    std::string get_uuid() {
        static std::random_device dev;
        static std::mt19937 rng(dev());

        std::uniform_int_distribution<int> dist(0, 15);

        const char *v = "0123456789abcdef";
        const bool dash[] = {0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0};

        std::string res;
        for (int i = 0; i < 16; i++) {
            if (dash[i]) res += "-";
            res += v[dist(rng)];
            res += v[dist(rng)];
        }
        return res;
    }

};


#endif //FAMILY_BUDGET_MANAGER_REPOSITORYIMPL_H
