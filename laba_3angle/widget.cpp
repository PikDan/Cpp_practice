#include "widget.h"
#include "ui_widget.h"

#define COLOR_GREEN "color:green;"
#define COLOR_RED "color:red;"

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

void Widget::calculateAll()
{
    double p = trngl.getPerimetr();
    double s = trngl.getSquare();
    if(s <= 0) ui->squar_LN_rslt->setText("некоректный треугольник");
    else ui->squar_LN_rslt->setText(QString::number(s));
    ui->perimetr_LN_rslt->setText(QString::number(p));
}

bool Widget::checkEditResult(QLineEdit* le, bool ok)
{
    le->setStyleSheet(ok ? COLOR_GREEN : COLOR_RED);
    refreshResultsStyle();
    return ok;
}

void Widget::read_tops()
{
    Error = false;
    bool ok = true;
if(ui->pushButton1->isChecked())
{
    trngl.top1.x = ui->x1_LN->text().toInt(&ok);
    if(!checkEditResult(ui->x1_LN, ok)) Error = true;

    trngl.top1.y = ui->y1_LN->text().toInt(&ok);
    if(!checkEditResult(ui->y1_LN, ok)) Error = true;

    trngl.top2.x = ui->x2_LN->text().toInt(&ok);
    if(!checkEditResult(ui->x2_LN, ok)) Error = true;

    trngl.top2.y = ui->y2_LN->text().toInt(&ok);
    if(!checkEditResult(ui->y2_LN, ok)) Error = true;

    trngl.top3.x = ui->x3_LN->text().toInt(&ok);
    if(!checkEditResult(ui->x3_LN, ok)) Error = true;

    trngl.top3.y = ui->y3_LN->text().toInt(&ok);
    if(!checkEditResult(ui->y3_LN, ok)) Error = true;

}
    if(Error)  refreshResultsStyle();

    calculateAll();
}

void Widget::refreshResultsStyle(){
    if(!Error)
    {
        ui->perimetr_LN_rslt->setStyleSheet(COLOR_GREEN);
        ui->squar_LN_rslt->setStyleSheet(COLOR_GREEN);
    }
    else
    {
        ui->perimetr_LN_rslt->setText("Ошибка");
        ui->perimetr_LN_rslt->setStyleSheet(COLOR_RED);
        ui->squar_LN_rslt->setText("Ошибка ");
        ui->squar_LN_rslt->setStyleSheet(COLOR_RED);
    }
}



void Widget::on_pushButton1_clicked()
{

}
