//
// Created by illfate on 12/12/20.
//

#ifndef FAMILY_BUDGET_MANAGER_OVERVIEWTAB_H
#define FAMILY_BUDGET_MANAGER_OVERVIEWTAB_H


class OverviewTab : public QWidget {
public:
    OverviewTab(QWidget *pwgt = nullptr) : QWidget(pwgt) {
        QLabel *label = new QLabel("hi, i save your money");
        auto font = label->font();
        font.setPointSize(52);
        label->setFont(font);
        auto l = new QVBoxLayout();
        l->setAlignment(Qt::AlignTop);
        l->addWidget(label);

        setLayout(l);
    }
};

#endif //FAMILY_BUDGET_MANAGER_OVERVIEWTAB_H
