#include "widget.h"
#include "ui_widget.h"

enum DifOperations
{
     AND, OR, XOR, NOT, EQUAL, NOTEQUAL
};


Widget::Widget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    Calculate();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::ChangeBGColor(bool indecatorColor)  //Смена фона в зависимости от результата вычисления
{
    QPalette pal;

    pal.setColor(QPalette::Window,indecatorColor ? (Qt::green) : (Qt::red));

    this->setPalette(pal);
}

void Widget::on_change_btn_2_clicked()
{
   Calculate();
}


void Widget::Calculate()
{
   bool left_index = ui->operand_left->currentIndex();
   bool right_index = ui->operand_right->currentIndex();

   ui->operand_left->show();

   bool result = false; //Первчиная инициализация переменной для хранения результата
   switch(ui->operand_middle->currentIndex())
   {
   case AND:
       result = left_index && right_index;
       break;
   case OR:
       result = left_index || right_index;
       break;
   case XOR:
       result = left_index ^ right_index; //ИСКЛЮЧАЮЩЕЕ ИЛИ
       break;
   case NOT:
       result = !right_index; //НЕ
       ui->operand_left->hide();
       break;
   case EQUAL:
       result = left_index == right_index;
       break;
   case NOTEQUAL:
       result = left_index != right_index;
       break;
   }


   if (ui->change_btn_2->isChecked())
   {
      ui->result_label->setText(result ? "это ложь" : "это правда");
      ChangeBGColor(!result);
   }
   else
   {
       ui->result_label->setText(result ? "это правда" : "это ложь");
       ChangeBGColor(result);
   }
}

void Widget::on_operand_left_currentIndexChanged(int)
{
    Calculate();
}

void Widget::on_operand_middle_currentIndexChanged(int)
{
    Calculate();
}

void Widget::on_operand_right_currentIndexChanged(int)
{
    Calculate();
}


//0 if (result)   // поменять result   //  записать
//   {
//       if(ui->change_btn_2->isChecked())
//       {
//          ui->result_label->setText("это ложь");
//          ChangeBGColor(!result);
//       }
//       else
//       {
//         ui->result_label->setText("это правда");
//         ChangeBGColor(result);
//       }
//   }
//   else
//   {
//      if(ui->change_btn_2->isChecked())
//       {
//           ui->result_label->setText("это правда");
//           ChangeBGColor(!result);
//       }
//      else
//      {
//       ui->result_label->setText("это ложь");
//       ChangeBGColor(result);
//      }
// 25  }
