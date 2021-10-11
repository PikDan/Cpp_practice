#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <math.h>

#include "threeugla.h"


namespace Ui {
class Widget;
}

class Widget : public QWidget
{


public:
    Widget(QWidget *parent = nullptr);
    void calculateAll();
    threeugla trngl;
    ~Widget();


private slots:

    void on_pushButton1_clicked();

private:
    bool checkEditResult(QLineEdit*, bool);
    void refreshResultsStyle();
    void read_tops();
    bool Error = false;

    Ui::Widget *ui;
};

#endif // WIDGET_H
