#include "widget.h"
#include "ui_widget.h"
#include "math.h"



Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->summ_Rb->click();
    ui->sin_Rb_rad->click();
    ui->error_Lb->setText("введите числа");




}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_summ_Rb_clicked()
{
    QPalette palette = ui->line_number_1->palette();
    QPalette palette_2 = ui->line_number_2->palette();
    ui->line_result->clear();
    ui->error_Lb->clear();
    ui->line_number_2->show();
    ui->op2_Lb->show();
    ui->sin_Rb_rad->hide();
    ui->line_number_2->clear();
    ui->sin_Rb_grad->hide();
    palette.setColor(QPalette::Base, Qt::color0);
    ui->line_number_1->setPalette(palette);

    palette_2.setColor(QPalette::Base, Qt::color0);
    ui->line_number_2->setPalette(palette);



}

void Widget::on_minus_Rb_clicked()
{
    QPalette palette = ui->line_number_1->palette();
    QPalette palette_2 = ui->line_number_2->palette();
    ui->line_result->clear();
    ui->error_Lb->clear();
    ui->op2_Lb->show();
    ui->line_number_2->clear();
    ui->line_number_2->show();
    ui->sin_Rb_rad->hide();
    ui->sin_Rb_grad->hide();
    palette.setColor(QPalette::Base, Qt::color0);
    ui->line_number_1->setPalette(palette);

    palette_2.setColor(QPalette::Base, Qt::color0);
    ui->line_number_2->setPalette(palette);

}

void Widget::on_multiply_Rb_clicked()
{
    QPalette palette = ui->line_number_1->palette();
    QPalette palette_2 = ui->line_number_2->palette();
    ui->line_result->clear();
    ui->error_Lb->clear();
    ui->line_number_2->show();
    ui->op2_Lb->show();
    ui->sin_Rb_rad->hide();
    ui->line_number_2->clear();
    ui->sin_Rb_grad->hide();
    palette.setColor(QPalette::Base, Qt::color0);
    ui->line_number_1->setPalette(palette);

    palette_2.setColor(QPalette::Base, Qt::color0);
    ui->line_number_2->setPalette(palette);

}

void Widget::on_del_Rb_clicked()
{
    QPalette palette = ui->line_number_1->palette();
    QPalette palette_2 = ui->line_number_2->palette();
    ui->line_result->clear();
    ui->error_Lb->clear();
    ui->line_number_2->show();
    ui->op2_Lb->show();
    ui->sin_Rb_rad->hide();
    ui->line_number_2->clear();
    ui->sin_Rb_grad->hide();
    palette.setColor(QPalette::Base, Qt::color0);
    ui->line_number_1->setPalette(palette);

    palette_2.setColor(QPalette::Base, Qt::color0);
    ui->line_number_2->setPalette(palette);

}

void Widget::on_sqrt_Rb_clicked()
{
    QPalette palette = ui->line_number_1->palette();
    QPalette palette_2 = ui->line_number_2->palette();
    ui->line_number_2->setText(QString::number(1));
    ui->line_result->clear();
    ui->error_Lb->clear();   
    ui->line_number_2->hide();
    ui->sin_Rb_rad->hide();
    ui->op2_Lb->hide();
    ui->sin_Rb_grad->hide();
    palette.setColor(QPalette::Base, Qt::color0);
    ui->line_number_1->setPalette(palette);

    palette_2.setColor(QPalette::Base, Qt::color0);
    ui->line_number_2->setPalette(palette);

}

void Widget::on_sin_Rb_clicked()
{
    QPalette palette = ui->line_number_1->palette();
    QPalette palette_2 = ui->line_number_2->palette();
    ui->line_number_2->setText(QString::number(1));
    ui->line_result->clear();
    ui->error_Lb->clear();
    ui->line_number_2->hide();
    ui->sin_Rb_rad->show();
    ui->sin_Rb_grad->show();
    ui->op2_Lb->hide();
    palette.setColor(QPalette::Base, Qt::color0);
    ui->line_number_1->setPalette(palette);

    palette_2.setColor(QPalette::Base, Qt::color0);
    ui->line_number_2->setPalette(palette);

}
void Widget::on_sin_Rb_rad_pressed()
{

}

void Widget::on_sin_Rb_grad_pressed()
{

}


void Widget::on_result_b_clicked()
{
    QPalette palette = ui->line_number_1->palette();
    QPalette palette_2 = ui->line_number_2->palette();
    palette.setColor(QPalette::Base, Qt::color0);
    ui->line_number_1->setPalette(palette);

    palette_2.setColor(QPalette::Base, Qt::color0);
    ui->line_number_2->setPalette(palette);

    ui->error_Lb->clear();
    ui->result_Lb->show();
    QString number;

    bool check_Left, check_Right;
    double a, b, result;

    a=ui->line_number_1->text().toDouble(&check_Left);
    b=ui->line_number_2->text().toDouble(&check_Right);



    if(!check_Left && !check_Right)
    {
        ui->error_Lb->setText("некоректные символы ");
        ui->line_result->hide();
        ui->result_Lb->hide();
        palette.setColor(QPalette::Base, Qt::red);
        ui->line_number_1->setPalette(palette);

        palette_2.setColor(QPalette::Base, Qt::red);
        ui->line_number_2->setPalette(palette);
        return;
    }
    else if(!check_Left)
    {
        ui->error_Lb->setText("некоректные символы в 1 элементе");
        ui->line_result->hide();
        ui->result_Lb->hide();

        palette.setColor(QPalette::Base, Qt::red);
        ui->line_number_1->setPalette(palette);
        return;
    }
    else if(!check_Right)
    {
        ui->error_Lb->setText("некоректные символы во 2 элементе");
        ui->line_result->hide();
        ui->result_Lb->hide();

        palette_2.setColor(QPalette::Base, Qt::red);
        ui->line_number_2->setPalette(palette_2);
        return;
    }

    if(ui->summ_Rb->isChecked())
    {

        result=a+b;

        if(qIsInf(result))
        {
            ui->error_Lb->setText("cлишком большое значение");
            ui->line_result->hide();
        }

        else
        {
            number.setNum(result);
            ui->line_result->setText(number);
            ui->line_result->show();
        }
    }

    else if(ui->minus_Rb->isChecked())
    {
       result=a-b;

       if(qIsInf(result))
       {
           ui->error_Lb->setText("cлишком большое значение");
           ui->line_result->hide();
       }

       else
       {
           number.setNum(result);
           ui->line_result->setText(number);
           ui->line_result->show();
       }
    }

    else if(ui->sqrt_Rb->isChecked())
    {

        result = sqrt(a);

        if(a<0)
        {
           ui->error_Lb->setText("извлечение из отриц.числа");
           ui->line_result->hide();
           ui->result_Lb->hide();
           palette.setColor(QPalette::Base, Qt::red);
           ui->line_number_1->setPalette(palette);
        }

        else
        {
            number.setNum(result);
            ui->line_result->setText(number);
            ui->line_result->show();
        }
    }

    else if(ui->sin_Rb->isChecked())
    {
       if(ui->sin_Rb_rad->isChecked())
       {
           result = sin(a);
       }
       else
       {
           result=sin(fmod(a,180)* M_PI/ 180.0); //fmod возвращает остаток от деления double чисел
           if(sin(a)<0)
           {
              result*=(-1);
           }
       }

       number.setNum(result);
       ui->line_result->setText(number);
       ui->line_result->show();

    }

    if(ui->multiply_Rb->isChecked())
    {

        result=a*b;

        if(qIsInf(result))
        {
            ui->error_Lb->setText("cлишком большое значение");
            ui->line_result->hide();
        }

        else
        {
            number.setNum(result);
            ui->line_result->setText(number);
            ui->line_result->show();
        }
    }

    if(ui->del_Rb->isChecked())
    {

        result=a/b;

        if(qIsInf(result))
        {
            if(b==0)
            {
                ui->error_Lb->setText(" на 0 нельзя делить");
                ui->line_result->hide();
                ui->result_Lb->hide();
                palette_2.setColor(QPalette::Base, Qt::red);
                ui->line_number_2->setPalette(palette_2);
            }
            else
            {
            ui->error_Lb->setText("cлишком большое значение");
            ui->line_result->hide();
            }
        }

        else
        {
            number.setNum(result);
            ui->line_result->setText(number);
            ui->line_result->show();
        }


    }



}



