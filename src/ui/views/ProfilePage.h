//
// Created by illfate on 12/12/20.
//

#ifndef FAMILY_BUDGET_MANAGER_PROFILEPAGE_H
#define FAMILY_BUDGET_MANAGER_PROFILEPAGE_H

#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QStackedLayout>

class UserInfo : public QWidget {
    User user;
public:
    UserInfo(const User &user, QWidget *pwgt = nullptr) : QWidget(pwgt) {
        QString firstName(std::string("First name: " + user.getFirstName()).data());
        auto firstNameLabel = new QLabel(firstName);

        QString secondName(std::string("Second name: " + user.getSecondName()).data());
        auto secondNameLabel = new QLabel(secondName);

        QString email(std::string("Email: " + user.getEmail()).data());
        auto emailLabel = new QLabel(email);
        auto l = new QVBoxLayout();
        l->addWidget(firstNameLabel);
        l->addWidget(secondNameLabel);
        l->addWidget(emailLabel);
        l->addStretch();
        setLayout(l);
    }

    void setUser(const User &user) {
        this->user = user;
    }
};


class HeadOfFamilyPage : public QWidget {
public:
    HeadOfFamilyPage(QWidget *pwgt = nullptr) : QWidget(pwgt) {
        auto msg = new QLabel("You are head of family");
        auto l = new QVBoxLayout();
        auto genBtn = new QPushButton("Generate and copy link");
        l->addWidget(msg);
        l->addWidget(genBtn);
        setLayout(l);
    }
};

class NonFamilyPage : public QWidget {
    QPushButton *becomeHeadBtn;
public:
    NonFamilyPage(QWidget *pwgt = nullptr) : QWidget(pwgt) {
        auto msg = new QLabel("You don't have a family");
        auto joinCodeLine = new QLineEdit();
        auto joinBtn = new QPushButton("Join by link");
        becomeHeadBtn = new QPushButton("Become head of family");
        auto l = new QVBoxLayout();
        l->addWidget(msg);
        l->addWidget(joinCodeLine);
        l->addWidget(joinBtn);
        l->addWidget(becomeHeadBtn);
        l->addStretch();
        setLayout(l);
    }

    const QPushButton *getHeadBtn() const {
        return becomeHeadBtn;
    }
};

class FamilyInfo : public QWidget {
private:
    QStackedLayout *stack;
public:
    FamilyInfo(QWidget *pwgt = nullptr) : QWidget(pwgt) {
        stack = new QStackedLayout();
        auto headOfFamilyPage = new HeadOfFamilyPage();
        auto nonFamilyPage = new NonFamilyPage();
        stack->addWidget(nonFamilyPage);
        stack->addWidget(headOfFamilyPage);
        stack->setCurrentIndex(0);
        connect(nonFamilyPage->getHeadBtn(), &QPushButton::clicked, this, &FamilyInfo::useHeadOfFamilyPage);
        setLayout(stack);
    }

private slots:

    void useHeadOfFamilyPage() {
        stack->setCurrentIndex(1);
    };
};

class ProfilePage : public QWidget {
    User user;
    UserInfo *userInfo;

public:
    ProfilePage(const User &user, QWidget *pwgt = nullptr) : QWidget(pwgt) {
        auto tab = new TabWidget();
        auto l = new QVBoxLayout();
        l->addWidget(tab);

        userInfo = new UserInfo(user);
        tab->addTab(userInfo, "User Info");

        auto familyInfo = new FamilyInfo();
        tab->addTab(familyInfo, "Family");
        setLayout(l);
    }

    void setUser(const User &user) {
        this->user = user;
        userInfo->setUser(user);
    }
};


#endif //FAMILY_BUDGET_MANAGER_PROFILEPAGE_H
