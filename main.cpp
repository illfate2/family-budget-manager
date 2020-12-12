#include <iostream>
#include <cassert>
#include "src/entities/User.h"
#include "src/services/SignupServiceImpl.h"
#include "src/services/LoginServiceImpl.h"
#include "src/services/AuthenticatorImpl.h"
#include "src/services/TokenManager.h"
#include "src/services/UserServiceImpl.h"
#include "src/repositories/UserRepositoryImpl.h"
#include <QApplication>
#include <QPushButton>
#include <QWindow>
#include <QColumnView>
#include <QVBoxLayout>
#include <QLabel>
#include <QMainWindow>
#include "src/ui/views/WelcomePageView.h"
#include "src/ui/views/LoginPageView.h"
#include "src/ui/views/SignupPageView.h"
#include "src/ui/views/HomePageView.h"
#include "src/ui/views/MainWindow.h"

void assertUser(const User &want, const User &got) {
    assert(want.getEmail() == got.getEmail());
    assert(want.getFirstName() == got.getFirstName());
    assert(want.getSecondName() == got.getSecondName());
    assert(want.getPassword() == got.getPassword());
}

void testUserSignup() {
    auto u = User().
            setFirstName("Ilya").
            setSecondName("Hontarau").
            setEmail("ilya@gmail.com").
            setPassword("pwd");

    const int expTime = 1;
    auto userRepo = std::make_shared<UserRepositoryImpl>();
    auto tokenManager = std::make_shared<TokenManager>("secret");
    auto userService = std::make_shared<UserServiceImpl>(userRepo);
    auto signupSvc = SignupServiceImpl(tokenManager, userService, expTime);
    auto signupResp = signupSvc.Signup(u);
    auto auth = AuthenticatorImpl(tokenManager, userService);
    auto authUser = auth.Authenticate(signupResp.token);
    assertUser(u, authUser);

    auto loginSvc = LoginServiceImpl(expTime, tokenManager, userService);
    auto loginResp = loginSvc.Login(u);
    authUser = auth.Authenticate(loginResp.token);
    assertUser(u, authUser);

}


int main(int argc, char **argv) {
    testUserSignup();

    const int expTime = 1;
    auto userRepo = std::make_shared<UserRepositoryImpl>();
    auto tokenManager = std::make_shared<TokenManager>("secret");
    auto userService = std::make_shared<UserServiceImpl>(userRepo);
    auto signupSvc = SignupServiceImpl(tokenManager, userService, expTime);
    auto auth = AuthenticatorImpl(tokenManager, userService);

    auto loginSvc = LoginServiceImpl(expTime, tokenManager, userService);

    QApplication app(argc, argv);
    MainWindow main1(nullptr, [&](User &&user) {
        userService->Create(user);
        return user;
    });
    return app.exec();
}


