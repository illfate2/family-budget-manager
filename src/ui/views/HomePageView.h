//
// Created by illfate on 12/10/20.
//

#ifndef FAMILY_BUDGET_MANAGER_HOMEPAGEVIEW_H
#define FAMILY_BUDGET_MANAGER_HOMEPAGEVIEW_H

#include <QTabWidget>
#include <QLineSeries>
#include <QtCharts>
#include "TabWidget.h"
#include "OverviewTab.h"
#include "ProfilePage.h"
#include "ReportsTab.h"
#include "MockGraphic.h"


class OptimizationsTab : public QWidget {
public:
    OptimizationsTab(QWidget *pwgt = nullptr) : QWidget(pwgt) {
        auto graphic = new MockGraphic();
        auto vBox = new QVBoxLayout();
        vBox->addWidget(graphic);

        setLayout(vBox);
    }
};


class LimitsTab : public QWidget {
public:
    LimitsTab(QWidget *pwgt = nullptr) : QWidget(pwgt) {
        auto mshLabel = new QLabel("List of limits");
        auto table = new QTableWidget(0, 3, this);
        QStringList names = {"List", "fdsfsd", "fdsfds"};
        table->setHorizontalHeaderLabels(names);

        auto addBtn = new QPushButton("Add new limit");
        auto vBox = new QVBoxLayout();
        vBox->addWidget(mshLabel);
        vBox->addWidget(table);
        vBox->addWidget(addBtn);
        setLayout(vBox);
    }
};

class AddLimit : public QWidget {
public:
};

class PaymentConnectionTab : public QWidget {
public:
    PaymentConnectionTab(QWidget *pwgt = nullptr) : QWidget(pwgt) {
        auto radioButton = new QRadioButton("Alfabank");
        auto connectBtn = new QPushButton("Connect");
        auto l = new QVBoxLayout();
        l->addWidget(radioButton);
        l->addWidget(connectBtn);
        l->setAlignment(Qt::AlignCenter);
        setLayout(l);
    }
};

class InputFinanceChange : public QDialog {
public:
    InputFinanceChange(QWidget *parent) : QDialog(parent) {
        auto nameLabel = new QLabel("Name of change");
        auto name = new QLineEdit();

        auto typeLabel = new QLabel("Type of change");
        auto currencyLabel = new QLabel("Currency label");

        auto amountLabel = new QLabel("Amount of change");
        auto amount = new QLineEdit();
        auto vBox = new QVBoxLayout();
        QGroupBox *groupBox = new QGroupBox();
        auto vBoxComes = new QVBoxLayout();
        groupBox->setLayout(vBoxComes);
        auto outcomeBtn = new QRadioButton("Outcome");
        auto incomeBtn = new QRadioButton("Income");

        vBoxComes->addWidget(outcomeBtn);
        vBoxComes->addWidget(incomeBtn);

        auto usdBtn = new QRadioButton("USD", this);
        auto btn = new QPushButton("Record");
        vBox->addWidget(nameLabel, 0, Qt::AlignTop);
        vBox->addWidget(name, 0, Qt::AlignTop);
        vBox->addWidget(typeLabel, 0, Qt::AlignHCenter);
        vBox->addWidget(groupBox, 0, Qt::AlignHCenter);
        vBox->addWidget(currencyLabel);
        vBox->addWidget(usdBtn);
        vBox->addWidget(amountLabel);
        vBox->addWidget(amount);
        vBox->addWidget(btn);
        vBox->setSpacing(0);
        vBox->addStretch();
        setLayout(vBox);
    }
};


class RecordFinanceTab : public QWidget {
public:
    RecordFinanceTab(QWidget *pwgt = nullptr) : QWidget(pwgt) {
        auto inputFinanceChanges = new InputFinanceChange(pwgt);
        auto vBox = new QVBoxLayout();
        vBox->addWidget(inputFinanceChanges);
        setLayout(vBox);
    }
};


class HomePageView : public QWidget {
private:
    User user;
private slots:

    void openProfile() {
        auto profile = new ProfilePage(user);
        profile->resize(1200, 700);
        profile->show();
    }

public:
    HomePageView(QWidget *pwgt = nullptr) : QWidget(pwgt) {
        auto tab = new TabWidget();
        auto l = new QVBoxLayout();

        QMenuBar *mnuBar = new QMenuBar();
        auto pmnu = new QMenu("&Account");
        auto action = pmnu->addAction("&Profile");
        connect(action, &QAction::triggered, this, &HomePageView::openProfile);
        pmnu->addAction("&Quit");
        pmnu->addSeparator();
        mnuBar->addMenu(pmnu);

        l->addWidget(mnuBar);
        l->addWidget(tab);

        auto overviewTab = new OverviewTab();
        tab->addTab(overviewTab, "Overview");

        auto optimizationTab = new OptimizationsTab();
        tab->addTab(optimizationTab, "Optimizations");

        auto reportsTab = new ReportsTab();
        tab->addTab(reportsTab, "Reports");

        auto limitsTab = new LimitsTab();
        tab->addTab(limitsTab, "Limits");

        auto paymentConnectionTab = new PaymentConnectionTab();
        tab->addTab(paymentConnectionTab, "PaymentConnection");

        auto recordFinanceTab = new RecordFinanceTab();
        tab->addTab(recordFinanceTab, "Record finances");

        tab->setStyleSheet("QTabBar::tab { height: 200px; width: 100px; }");
        setLayout(l);
    }

    void setUser(const User &user) {
        this->user = user;
    }
};


#endif //FAMILY_BUDGET_MANAGER_HOMEPAGEVIEW_H
