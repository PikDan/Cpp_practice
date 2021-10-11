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

    void Calculate();
    void ChangeBGColor(bool);



    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_operand_left_currentIndexChanged(int index);

    void on_operand_middle_currentIndexChanged(int index);

    void on_operand_right_currentIndexChanged(int index);


    void on_change_btn_2_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
