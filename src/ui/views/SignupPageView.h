//
// Created by illfate on 12/6/20.
//

#ifndef FAMILY_BUDGET_MANAGER_SIGNUPPAGEVIEW_H
#define FAMILY_BUDGET_MANAGER_SIGNUPPAGEVIEW_H

#include <QWidget>
#include <utility>
#include "../../entities/User.h"

class SignupPageView : public QWidget {
    QPushButton *signupButton;
    QVBoxLayout *box;
    QLineEdit *firstName;
    QLineEdit *secondName;
    QLineEdit *loginName;
    QLineEdit *password;
    std::function<User(User &&)> signupCallback;

public:
    SignupPageView(QWidget *pwgt = nullptr, std::function<User(User &&)> signupCallback = nullptr) : QWidget(pwgt),
                                                                                                     signupCallback(
                                                                                                             std::move(
                                                                                                                     signupCallback)) {
        signupButton = new QPushButton("Click to signup");
        firstName = new QLineEdit();
        secondName = new QLineEdit();
        loginName = new QLineEdit();
        password = new QLineEdit();
        box = new QVBoxLayout();
        auto *firstNameLabel = new QLabel("First Name");
        auto *secondLabel = new QLabel("Second Name");
        auto *emailLabel = new QLabel("Email");
        auto *passwordLabel = new QLabel("Password");

        box->addWidget(firstNameLabel);
        box->addWidget(firstName);
        box->addWidget(secondLabel);
        box->addWidget(secondName);
        box->addWidget(emailLabel);
        box->addWidget(loginName);
        box->addWidget(passwordLabel);
        box->addWidget(password);
        password->setEchoMode(QLineEdit::Password);
        box->addWidget(signupButton);
        connect(signupButton, &QPushButton::clicked, this, &SignupPageView::onSignUpClick);
        setLayout(box);
    }

    const QPushButton *getSignupButton() const {
        return signupButton;
    }

    User getUser() const {

    }

private slots:

    void onSignUpClick() {
        User user;
        user.setEmail(loginName->text().toStdString()).setSecondName(secondName->text().toStdString()).
                setFirstName(firstName->text().toStdString()).setPassword(password->text().toStdString());
        signupCallback(std::move(user));
    };
};


#endif //FAMILY_BUDGET_MANAGER_SIGNUPPAGEVIEW_H
