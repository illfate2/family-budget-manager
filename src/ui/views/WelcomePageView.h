//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_WELCOMEPAGEVIEW_H
#define FAMILY_BUDGET_MANAGER_WELCOMEPAGEVIEW_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include "LoginPageView.h"
#include <QStackedWidget>
#include <QStackedLayout>

class WelcomePageView : public QWidget {
private:
    QPushButton *loginButton;
    QPushButton *signupButton;
    QLabel *label;
    QVBoxLayout *box;
public:
    WelcomePageView(QWidget *pwgt = nullptr) : QWidget(pwgt) {
        label = new QLabel("Welcome");
        auto font = label->font();
        font.setPointSize(50);
        label->setFont(font);
        loginButton = new QPushButton("Click to login");
        signupButton = new QPushButton("Click to signup");
        box = new QVBoxLayout();
        box->addWidget(label);
        box->addWidget(loginButton);
        box->addWidget(signupButton);
        setLayout(box);
    }

    const QPushButton *getLoginButton() const {
        return loginButton;
    }

    const QPushButton *getSignupButton() const {
        return signupButton;
    }

private slots:

};


#endif //FAMILY_BUDGET_MANAGER_WELCOMEPAGEVIEW_H
