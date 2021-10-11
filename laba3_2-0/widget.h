#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <math.h>

namespace Ui {
class Widget;
}

struct tops
{
    int x = 0;
    int y = 0;
};

class Widget : public QWidget
{
    Q_OBJECT

public:

    explicit Widget(QWidget *parent = nullptr);
    void calculateAll();
    tops top1, top2, top3;
    ~Widget();

private slots:


    void on_x1_LN_textChanged(const QString &arg1);

    void on_y1_LN_textChanged(const QString &arg1);

    void on_x2_LN_textChanged(const QString &arg1);

    void on_y2_LN_textChanged(const QString &arg1);

    void on_x3_LN_textChanged(const QString &arg1);

    void on_y3_LN_textChanged(const QString &arg1);

private:
    double a , b , c ;
    double p;
    double s;
    double calcPerimetr();
    double calcSquare();
    bool checkLineResult(QLineEdit*, bool);
    void refreshResults();
    void read_tops();
    bool Error = false;
    Ui::Widget *ui;

};

#endif // WIDGET_H
