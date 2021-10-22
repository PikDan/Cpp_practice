#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <math.h>
#include<cmath>

namespace Ui {
class Widget;
}

struct tops
{
    float x;
    float y;
};
struct sides
{
    float side;

};
struct Angle
{
    float degree;
    float minute;
};

class Widget : public QWidget
{
    Q_OBJECT

public:

    explicit Widget(QWidget *parent = nullptr);
    void calculateAll();
    tops top1, top2, top3;
    sides A,B,C;
    Angle angle;
    ~Widget();

private slots:


    void on_x1_LN_textChanged(const QString &arg1);

    void on_y1_LN_textChanged(const QString &arg1);

    void on_x2_LN_textChanged(const QString &arg1);

    void on_y2_LN_textChanged(const QString &arg1);

    void on_x3_LN_textChanged(const QString &arg1);

    void on_y3_LN_textChanged(const QString &arg1);

    void on_tops_RB_clicked();

    void on_three_side_RB_clicked();

    void on_twoSides_angle_RB_clicked();

    void on_oneSide_twoAngl_RB_clicked();

    void on_TwoTops_twoAngl_RB_clicked();

private:
    void invise_set();
    void clearing();
    bool valid(float a,float b,float c);
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
