//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_LOGINPAGEVIEW_H
#define FAMILY_BUDGET_MANAGER_LOGINPAGEVIEW_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLineEdit>

class LoginPageView : public QWidget {
    QPushButton *loginButton;
    QVBoxLayout *box;

public:
    LoginPageView(QWidget *pwgt = nullptr) : QWidget(pwgt) {
        loginButton = new QPushButton("Click to login");
        auto *loginName = new QLineEdit();
        auto *password = new QLineEdit();
        auto *emailLabel = new QLabel("Email");
        auto *passwordLabel = new QLabel("Password");
        password->setEchoMode(QLineEdit::Password);
        box = new QVBoxLayout();
        box->addWidget(emailLabel);
        box->addWidget(loginName);
        box->addWidget(passwordLabel);
        box->addWidget(password);
        box->addWidget(loginButton);
        setLayout(box);
    }

    const QPushButton *getLoginButton() const {
        return loginButton;
    }
};


#endif //FAMILY_BUDGET_MANAGER_LOGINPAGEVIEW_H
