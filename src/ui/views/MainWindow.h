//
// Created by illfate on 12/12/20.
//

#ifndef FAMILY_BUDGET_MANAGER_MAINWINDOW_H
#define FAMILY_BUDGET_MANAGER_MAINWINDOW_H


#include <utility>

#include "WelcomePageView.h"
#include "LoginPageView.h"

class MainWindow : public QMainWindow {
private:
    QStackedLayout *stack;
    HomePageView *homePage;
    SignupPageView *signupPage;
public:
    MainWindow(QWidget *pwgt = nullptr, std::function<User(User &&)> signupCallback = nullptr) : QMainWindow(pwgt) {
        stack = new QStackedLayout();
        WelcomePageView *welcome = new WelcomePageView();
        LoginPageView *loginPage = new LoginPageView();
        homePage = new HomePageView();
        homePage->resize(1200, 720);
        signupPage = new SignupPageView(pwgt, std::move(signupCallback));
        stack->addWidget(welcome);
        stack->addWidget(loginPage);
        stack->addWidget(signupPage);
        stack->addWidget(homePage);
        stack->setCurrentIndex(0);
        connect(welcome->getLoginButton(), &QPushButton::clicked, this, &MainWindow::useLoginPage);
        connect(welcome->getSignupButton(), &QPushButton::clicked, this, &MainWindow::useSignupPage);
        connect(signupPage->getSignupButton(), &QPushButton::clicked, this, &MainWindow::useHomePage);
        connect(loginPage->getLoginButton(), &QPushButton::clicked, this, &MainWindow::useHomePage);
    }

private

    slots :

    void useLoginPage() {
        stack->setCurrentIndex(1);
    };

    void useSignupPage() {
        stack->setCurrentIndex(2);
    };

    void useHomePage() {
        homePage->setUser(signupPage->getUser());
        stack->setCurrentIndex(3);
    }
};

#endif //FAMILY_BUDGET_MANAGER_MAINWINDOW_H
