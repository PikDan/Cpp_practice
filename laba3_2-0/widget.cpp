#include "widget.h"
#include "ui_widget.h"
#include <math.h>
#include <QLineEdit>

#define GREEN "color:green;"
#define RED "color:red;"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->x1_LN->setFocus();
}

Widget::~Widget()
{
    delete ui;
}

double Widget::calcPerimetr()
{
     a = sqrt(pow(top2.x - top1.x, 2) + pow(top2.y - top1.y, 2));
     b = sqrt(pow(top3.x - top2.x, 2) + pow(top3.y - top2.y, 2));
     c = sqrt(pow(top1.x - top3.x, 2) + pow(top1.y - top3.y, 2));
     p = a + b + c;
     return p;
}
double Widget::calcSquare()
{
    p = calcPerimetr();
    double half_p = p/2;
    s = sqrt(half_p*(half_p - a) * (half_p - b) * (half_p - c));
    return s;
}

void Widget::calculateAll()
{
    double p = calcPerimetr();
    double s = calcSquare();
    if(s <= 0) ui->squar_LN_rslt->setText("некоректный треугольник");
    else ui->squar_LN_rslt->setText(QString::number(s, 'o', 3));
    ui->perimetr_LN_rslt->setText(QString::number(p,'o', 3));
}

bool Widget::checkLineResult(QLineEdit* le, bool ok)
{

    le->setStyleSheet(ok ? GREEN : RED);
    refreshResults();
    return ok;
}

void Widget::read_tops()
{
    Error = false;
    bool ok = true;

    top1.x = ui->x1_LN->text().toInt(&ok);
    if(!checkLineResult(ui->x1_LN, ok)) Error = true;

    top1.y = ui->y1_LN->text().toInt(&ok);
    if(!checkLineResult(ui->y1_LN, ok)) Error = true;

    top2.x = ui->x2_LN->text().toInt(&ok);
    if(!checkLineResult(ui->x2_LN, ok)) Error = true;

    top2.y = ui->y2_LN->text().toInt(&ok);
    if(!checkLineResult(ui->y2_LN, ok)) Error = true;

    top3.x = ui->x3_LN->text().toInt(&ok);
    if(!checkLineResult(ui->x3_LN, ok)) Error = true;

    top3.y = ui->y3_LN->text().toInt(&ok);
    if(!checkLineResult(ui->y3_LN, ok)) Error = true;


    if(Error) return refreshResults();

       calculateAll();
}

void Widget::refreshResults()
{
    if(Error)
    {
       if(ui->x1_LN->text()=="" || ui->y1_LN->text()=="" || ui->x2_LN->text()=="" || ui->y2_LN->text()=="" || ui->x3_LN->text()=="" || ui->y3_LN->text()=="")
       {
          ui->perimetr_LN_rslt->setText("заполните координаты");
          ui->squar_LN_rslt->setText("заполните координаты");
       }
       else
       {
            ui->perimetr_LN_rslt->setText("Ошибка. Ввод доступен только в числах");
            ui->squar_LN_rslt->setText("Ошибка. Ввод доступен только в числах");
       }
    }
}


void Widget::on_x1_LN_textChanged(const QString &)
{
    read_tops();
}

void Widget::on_y1_LN_textChanged(const QString &)
{
    read_tops();
}

void Widget::on_x2_LN_textChanged(const QString &)
{
    read_tops();
}

void Widget::on_y2_LN_textChanged(const QString &)
{
    read_tops();
}

void Widget::on_x3_LN_textChanged(const QString &)
{
    read_tops();
}

void Widget::on_y3_LN_textChanged(const QString &)
{
    read_tops();
}
