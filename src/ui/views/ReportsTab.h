//
// Created by illfate on 12/12/20.
//

#ifndef FAMILY_BUDGET_MANAGER_REPORTSTAB_H
#define FAMILY_BUDGET_MANAGER_REPORTSTAB_H


#include "MockGraphic.h"

class ReportsBudgetTab : public QWidget {
public:
    ReportsBudgetTab(QWidget *pwgt = nullptr) : QWidget(pwgt) {
        auto graphic = new MockGraphic();
        auto vBox = new QVBoxLayout();
        vBox->addWidget(graphic);

        setLayout(vBox);
    }
};

class ReportsIncomeTab : public QWidget {
public:
    ReportsIncomeTab(QWidget *pwgt = nullptr) : QWidget(pwgt) {
        auto graphic = new MockGraphic();
        auto vBox = new QVBoxLayout();
        vBox->addWidget(graphic);

        setLayout(vBox);
    }
};

class ReportsOutcomeTab : public QWidget {
public:
    ReportsOutcomeTab(QWidget *pwgt = nullptr) : QWidget(pwgt) {
        auto graphic = new MockGraphic();
        auto vBox = new QVBoxLayout();
        vBox->addWidget(graphic);

        setLayout(vBox);
    }
};

class ReportsTab : public QWidget {
public:
    ReportsTab(QWidget *pwgt = nullptr) : QWidget(pwgt) {
        auto l = new QVBoxLayout();
        auto tabWidget = new QTabWidget();
        tabWidget->addTab(new ReportsBudgetTab, "Budget Report");
        tabWidget->addTab(new ReportsIncomeTab, "Income Report");
        tabWidget->addTab(new ReportsOutcomeTab, "Outcome Report");
        l->addWidget(tabWidget);
        tabWidget->setStyleSheet("QTabBar::tab { height: 100px; width: 300px; }");
        setLayout(l);
    }
};


#endif //FAMILY_BUDGET_MANAGER_REPORTSTAB_H
