#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:


    void on_summ_Rb_clicked();

    void on_minus_Rb_clicked();

    void on_multiply_Rb_clicked();

    void on_del_Rb_clicked();

    void on_sqrt_Rb_clicked();

    void on_sin_Rb_clicked();

    void on_result_b_clicked();

    void on_sin_Rb_rad_pressed();

    void on_sin_Rb_grad_pressed();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
