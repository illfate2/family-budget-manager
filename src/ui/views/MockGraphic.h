//
// Created by illfate on 12/12/20.
//

#ifndef FAMILY_BUDGET_MANAGER_MOCKGRAPHIC_H
#define FAMILY_BUDGET_MANAGER_MOCKGRAPHIC_H

#include <QWidget>

class MockGraphic : public QWidget {
public:
    MockGraphic(QWidget *parent = nullptr) : QWidget(parent) {
        QChartView *chartView = new QChartView(this);
        QChart *chart = new QChart();
        chart->legend()->hide();
        chart->setTitle("Optimization Graphic");
        chartView->setChart(chart);
        auto vBox = new QVBoxLayout();
        vBox->addWidget(chartView);

        QLineSeries *series = new QLineSeries();
        series->append(0, 6);
        series->append(2, 4);
        series->append(3, 8);
        series->append(7, 4);
        series->append(10, 5);
        *series << QPointF(11, 1) << QPointF(13, 3) << QPointF(17, 6) << QPointF(18, 3) << QPointF(20, 2);
        chart->legend()->hide();
        chart->addSeries(series);
        chart->createDefaultAxes();
        chartView->setRenderHint(QPainter::Antialiasing);
        setLayout(vBox);
    }
};


#endif //FAMILY_BUDGET_MANAGER_MOCKGRAPHIC_H
