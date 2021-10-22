#include "widget.h"
#include "ui_widget.h"
#include <math.h>
#include <QLineEdit>
#include<cmath>


#define GREEN "color:black;"
#define RED "color:red;"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->x1_LN->setFocus();
    ui->tops_RB->click();

}

Widget::~Widget()
{
    delete ui;
}

double Widget::calcPerimetr()
{
    if(ui->tops_RB->isChecked()) // первый RB
    {
     a = sqrt(pow(top2.x - top1.x, 2) + pow(top2.y - top1.y, 2));
     b = sqrt(pow(top3.x - top2.x, 2) + pow(top3.y - top2.y, 2));
     c = sqrt(pow(top1.x - top3.x, 2) + pow(top1.y - top3.y, 2));
    }
    else if (ui->three_side_RB->isChecked()) // второй RB
    {
     a = A.side;
     b = B.side;
     c = C.side;
    }
    else if (ui->twoSides_angle_RB->isChecked()) // третий RB
    {
        a=A.side;
        b=B.side;
        c=sqrt(pow(A.side,2) + pow(B.side,2) - 2 * A.side * B.side * cos(angle.degree *M_PI/180.0));
        p = a + b + c;
        return p;
    }

    if(valid(a,b,c))
    {
     p = a + b + c;
     return p;
    }
    else
    {
     return 0;
    }


}


bool Widget::valid(float a,float b,float c)
{
    if(a>b & a>c)
    {
       if((b+c)>a) return true;
    }
     else if(b>a & b>c)
    {
       if((a+c)>b) return true;
    }
    else if(c>a & c>b)
    {
       if((a+b)>c) return true;
    }
    return false;

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

    if(p <= 0) ui->perimetr_LN_rslt->setText("некоректный треугольник");
    else  ui->perimetr_LN_rslt->setText(QString::number(p,'o', 3));

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

    if(ui->tops_RB->isChecked()) // первый RB
    {
    top1.x  = ui->x1_LN->text().toFloat(&ok);
    if(!checkLineResult(ui->x1_LN, ok)) Error = true;

    top1.y = ui->y1_LN->text().toFloat(&ok);
    if(!checkLineResult(ui->y1_LN, ok)) Error = true;

    top2.x = ui->x2_LN->text().toFloat(&ok);
    if(!checkLineResult(ui->x2_LN, ok)) Error = true;

    top2.y = ui->y2_LN->text().toFloat(&ok);
    if(!checkLineResult(ui->y2_LN, ok)) Error = true;

    top3.x = ui->x3_LN->text().toFloat(&ok);
    if(!checkLineResult(ui->x3_LN, ok)) Error = true;

    top3.y = ui->y3_LN->text().toFloat(&ok);
    if(!checkLineResult(ui->y3_LN, ok)) Error = true;
    }

    else if (ui->three_side_RB->isChecked()) //  второй RB
    {
     A.side = ui->x1_LN->text().toFloat(&ok);
     if(!checkLineResult(ui->x1_LN, ok)) Error = true;

     B.side = ui->x2_LN->text().toFloat(&ok);
     if(!checkLineResult(ui->x2_LN, ok)) Error = true;

     C.side = ui->x3_LN->text().toFloat(&ok);
     if(!checkLineResult(ui->x3_LN, ok)) Error = true;
    }

    else if (ui->twoSides_angle_RB->isChecked()) // третий RB
    {
      A.side = ui->x1_LN->text().toFloat(&ok);
      if(!checkLineResult(ui->x1_LN, ok)) Error = true;

      angle.degree = ui->x2_LN->text().toFloat(&ok);
      if(!checkLineResult(ui->x2_LN, ok)) Error = true;

      B.side = ui->x3_LN->text().toFloat(&ok);
      if(!checkLineResult(ui->x3_LN, ok)) Error = true;
    }

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




void Widget::on_tops_RB_clicked()
{
    clearing();
    ui->x1_LBL->setText("X1");
    ui->x2_LBL->setText("X2");
    ui->x3_LBL->setText("X3");
    ui->index_LBL->setText("Координаты вершин");
    ui->y1_LN->show();
    ui->y2_LN->show();
    ui->y3_LN->show();   
    ui->y1_LBL->show();
    ui->y2_LBL->show();
    ui->y3_LBL->show();

}

void Widget::on_three_side_RB_clicked()
{
    clearing();
    invise_set();
    ui->x1_LBL->setText("a");
    ui->x2_LBL->setText("b");
    ui->x3_LBL->setText("c");
    ui->index_LBL->setText("Длины сторон");

}

void Widget::on_twoSides_angle_RB_clicked()
{
    clearing();
    invise_set();
    ui->x1_LBL->setText("А");
    ui->x2_LBL->setText("α");
    ui->x3_LBL->setText("В");
    ui->index_LBL->setText("2 стороны и Угол");

}

void Widget::on_oneSide_twoAngl_RB_clicked()
{

}

void Widget::on_TwoTops_twoAngl_RB_clicked()
{

}

void Widget::clearing()
{
    if(ui->tops_RB || ui->three_side_RB ||ui->twoSides_angle_RB->isChecked())
    {
    ui->y1_LN->clear();
    ui->y2_LN->clear();
    ui->y3_LN->clear();
    ui->x1_LN->clear();
    ui->x2_LN->clear();
    ui->x3_LN->clear();
    }

}

void Widget::invise_set()
{
   if(ui->twoSides_angle_RB || ui->three_side_RB || ui->twoSides_angle_RB->isChecked())
   {
    ui->y1_LN->hide();
    ui->y2_LN->hide();
    ui->y3_LN->hide();
    ui->y1_LBL->hide();
    ui->y2_LBL->hide();
    ui->y3_LBL->hide();
    ui->y1_LN->setText(QString::number(1));
    ui->y2_LN->setText(QString::number(1));
    ui->y3_LN->setText(QString::number(1));
   }
}
