/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *result_label;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *operand_left;
    QComboBox *operand_middle;
    QComboBox *operand_right;
    QCheckBox *change_btn_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(903, 520);
        result_label = new QLabel(Widget);
        result_label->setObjectName(QString::fromUtf8("result_label"));
        result_label->setGeometry(QRect(370, 270, 251, 101));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 352, 261, 51));
        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(240, 60, 421, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        operand_left = new QComboBox(horizontalLayoutWidget);
        operand_left->addItem(QString());
        operand_left->addItem(QString());
        operand_left->setObjectName(QString::fromUtf8("operand_left"));

        horizontalLayout_3->addWidget(operand_left);

        operand_middle = new QComboBox(horizontalLayoutWidget);
        operand_middle->addItem(QString());
        operand_middle->addItem(QString());
        operand_middle->addItem(QString());
        operand_middle->addItem(QString());
        operand_middle->addItem(QString());
        operand_middle->addItem(QString());
        operand_middle->setObjectName(QString::fromUtf8("operand_middle"));

        horizontalLayout_3->addWidget(operand_middle);

        operand_right = new QComboBox(horizontalLayoutWidget);
        operand_right->addItem(QString());
        operand_right->addItem(QString());
        operand_right->setObjectName(QString::fromUtf8("operand_right"));

        horizontalLayout_3->addWidget(operand_right);

        change_btn_2 = new QCheckBox(Widget);
        change_btn_2->setObjectName(QString::fromUtf8("change_btn_2"));
        change_btn_2->setGeometry(QRect(20, 100, 191, 17));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        result_label->setText(QString());
        label->setText(QApplication::translate("Widget", "    \320\222\320\253\320\221\320\225\320\240\320\230\320\242\320\225 \320\237\320\236 \320\241\320\225\320\240\320\225\320\224\320\230\320\235\320\225 \320\233\320\236\320\223.\320\236\320\237\320\225\320\240\320\220\320\246\320\230\320\256", nullptr));
        operand_left->setItemText(0, QApplication::translate("Widget", "false", nullptr));
        operand_left->setItemText(1, QApplication::translate("Widget", "true", nullptr));

        operand_middle->setItemText(0, QApplication::translate("Widget", "\320\230", nullptr));
        operand_middle->setItemText(1, QApplication::translate("Widget", "\320\230\320\233\320\230", nullptr));
        operand_middle->setItemText(2, QApplication::translate("Widget", "\320\230\320\241\320\232\320\233\320\256\320\247\320\220\320\256\320\251\320\225\320\225 \320\230\320\233\320\230", nullptr));
        operand_middle->setItemText(3, QApplication::translate("Widget", "\320\235\320\225", nullptr));
        operand_middle->setItemText(4, QApplication::translate("Widget", "\320\240\320\220\320\222\320\235\320\236", nullptr));
        operand_middle->setItemText(5, QApplication::translate("Widget", "\320\235\320\225 \320\240\320\220\320\222\320\235\320\236", nullptr));

        operand_right->setItemText(0, QApplication::translate("Widget", "false", nullptr));
        operand_right->setItemText(1, QApplication::translate("Widget", "true", nullptr));

        change_btn_2->setText(QApplication::translate("Widget", "\320\241\320\234\320\225\320\235\320\220 \320\240\320\225\320\227\320\243\320\233\320\254\320\242\320\220\320\242\320\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
