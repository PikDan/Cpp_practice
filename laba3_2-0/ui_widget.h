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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *squar_LN_rslt;
    QLabel *all_rslt_LBL;
    QLineEdit *perimetr_LN_rslt;
    QLabel *parimeter_LBL;
    QLabel *index_LBL;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout;
    QLineEdit *y1_LN;
    QLineEdit *x1_LN;
    QLabel *y1_LBL;
    QLabel *x1_LBL;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_3;
    QLineEdit *x3_LN;
    QLabel *x3_LBL;
    QLabel *y3_LBL;
    QLineEdit *y3_LN;
    QLabel *squar_LBL;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_2;
    QLineEdit *y2_LN;
    QLineEdit *x2_LN;
    QLabel *y2_LBL;
    QLabel *x2_LBL;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *tops_RB;
    QRadioButton *three_side_RB;
    QRadioButton *twoSides_angle_RB;
    QRadioButton *oneSide_twoAngl_RB;
    QRadioButton *TwoTops_twoAngl_RB;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(916, 535);
        squar_LN_rslt = new QLineEdit(Widget);
        squar_LN_rslt->setObjectName(QString::fromUtf8("squar_LN_rslt"));
        squar_LN_rslt->setGeometry(QRect(480, 300, 411, 20));
        squar_LN_rslt->setMinimumSize(QSize(0, 15));
        squar_LN_rslt->setMaximumSize(QSize(16777215, 16777215));
        squar_LN_rslt->setToolTipDuration(0);
        squar_LN_rslt->setAlignment(Qt::AlignCenter);
        squar_LN_rslt->setReadOnly(true);
        all_rslt_LBL = new QLabel(Widget);
        all_rslt_LBL->setObjectName(QString::fromUtf8("all_rslt_LBL"));
        all_rslt_LBL->setGeometry(QRect(470, 220, 135, 40));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(all_rslt_LBL->sizePolicy().hasHeightForWidth());
        all_rslt_LBL->setSizePolicy(sizePolicy);
        all_rslt_LBL->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setPointSize(10);
        all_rslt_LBL->setFont(font);
        all_rslt_LBL->setAlignment(Qt::AlignCenter);
        all_rslt_LBL->setWordWrap(true);
        perimetr_LN_rslt = new QLineEdit(Widget);
        perimetr_LN_rslt->setObjectName(QString::fromUtf8("perimetr_LN_rslt"));
        perimetr_LN_rslt->setGeometry(QRect(480, 420, 411, 20));
        perimetr_LN_rslt->setMinimumSize(QSize(0, 15));
        perimetr_LN_rslt->setMaximumSize(QSize(1000000, 16777215));
        perimetr_LN_rslt->setAlignment(Qt::AlignCenter);
        perimetr_LN_rslt->setReadOnly(true);
        parimeter_LBL = new QLabel(Widget);
        parimeter_LBL->setObjectName(QString::fromUtf8("parimeter_LBL"));
        parimeter_LBL->setGeometry(QRect(480, 350, 411, 61));
        sizePolicy.setHeightForWidth(parimeter_LBL->sizePolicy().hasHeightForWidth());
        parimeter_LBL->setSizePolicy(sizePolicy);
        parimeter_LBL->setMinimumSize(QSize(100, 10));
        parimeter_LBL->setMaximumSize(QSize(1000000, 1000000));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        parimeter_LBL->setFont(font1);
        parimeter_LBL->setAlignment(Qt::AlignCenter);
        index_LBL = new QLabel(Widget);
        index_LBL->setObjectName(QString::fromUtf8("index_LBL"));
        index_LBL->setGeometry(QRect(90, 60, 197, 40));
        sizePolicy.setHeightForWidth(index_LBL->sizePolicy().hasHeightForWidth());
        index_LBL->setSizePolicy(sizePolicy);
        index_LBL->setMaximumSize(QSize(16777215, 40));
        index_LBL->setFont(font);
        index_LBL->setAlignment(Qt::AlignCenter);
        index_LBL->setWordWrap(true);
        layoutWidget_4 = new QWidget(Widget);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(100, 110, 171, 71));
        gridLayout = new QGridLayout(layoutWidget_4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        y1_LN = new QLineEdit(layoutWidget_4);
        y1_LN->setObjectName(QString::fromUtf8("y1_LN"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(y1_LN->sizePolicy().hasHeightForWidth());
        y1_LN->setSizePolicy(sizePolicy1);
        y1_LN->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(y1_LN, 1, 1, 1, 1);

        x1_LN = new QLineEdit(layoutWidget_4);
        x1_LN->setObjectName(QString::fromUtf8("x1_LN"));
        sizePolicy1.setHeightForWidth(x1_LN->sizePolicy().hasHeightForWidth());
        x1_LN->setSizePolicy(sizePolicy1);
        x1_LN->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(x1_LN, 0, 1, 1, 1);

        y1_LBL = new QLabel(layoutWidget_4);
        y1_LBL->setObjectName(QString::fromUtf8("y1_LBL"));

        gridLayout->addWidget(y1_LBL, 1, 0, 1, 1);

        x1_LBL = new QLabel(layoutWidget_4);
        x1_LBL->setObjectName(QString::fromUtf8("x1_LBL"));
        x1_LBL->setMaximumSize(QSize(15, 22));

        gridLayout->addWidget(x1_LBL, 0, 0, 1, 1);

        layoutWidget_5 = new QWidget(Widget);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(100, 290, 171, 71));
        gridLayout_3 = new QGridLayout(layoutWidget_5);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        x3_LN = new QLineEdit(layoutWidget_5);
        x3_LN->setObjectName(QString::fromUtf8("x3_LN"));
        sizePolicy1.setHeightForWidth(x3_LN->sizePolicy().hasHeightForWidth());
        x3_LN->setSizePolicy(sizePolicy1);
        x3_LN->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(x3_LN, 0, 1, 1, 1);

        x3_LBL = new QLabel(layoutWidget_5);
        x3_LBL->setObjectName(QString::fromUtf8("x3_LBL"));
        x3_LBL->setMaximumSize(QSize(15, 16777215));

        gridLayout_3->addWidget(x3_LBL, 0, 0, 1, 1);

        y3_LBL = new QLabel(layoutWidget_5);
        y3_LBL->setObjectName(QString::fromUtf8("y3_LBL"));

        gridLayout_3->addWidget(y3_LBL, 1, 0, 1, 1);

        y3_LN = new QLineEdit(layoutWidget_5);
        y3_LN->setObjectName(QString::fromUtf8("y3_LN"));
        sizePolicy1.setHeightForWidth(y3_LN->sizePolicy().hasHeightForWidth());
        y3_LN->setSizePolicy(sizePolicy1);
        y3_LN->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(y3_LN, 1, 1, 1, 1);

        squar_LBL = new QLabel(Widget);
        squar_LBL->setObjectName(QString::fromUtf8("squar_LBL"));
        squar_LBL->setGeometry(QRect(470, 200, 411, 79));
        sizePolicy.setHeightForWidth(squar_LBL->sizePolicy().hasHeightForWidth());
        squar_LBL->setSizePolicy(sizePolicy);
        squar_LBL->setMinimumSize(QSize(100, 10));
        squar_LBL->setMaximumSize(QSize(100000, 100000));
        squar_LBL->setFont(font1);
        squar_LBL->setAlignment(Qt::AlignCenter);
        layoutWidget_3 = new QWidget(Widget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(100, 200, 171, 71));
        gridLayout_2 = new QGridLayout(layoutWidget_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        y2_LN = new QLineEdit(layoutWidget_3);
        y2_LN->setObjectName(QString::fromUtf8("y2_LN"));
        sizePolicy1.setHeightForWidth(y2_LN->sizePolicy().hasHeightForWidth());
        y2_LN->setSizePolicy(sizePolicy1);
        y2_LN->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(y2_LN, 2, 1, 1, 1);

        x2_LN = new QLineEdit(layoutWidget_3);
        x2_LN->setObjectName(QString::fromUtf8("x2_LN"));
        sizePolicy1.setHeightForWidth(x2_LN->sizePolicy().hasHeightForWidth());
        x2_LN->setSizePolicy(sizePolicy1);
        x2_LN->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(x2_LN, 1, 1, 1, 1);

        y2_LBL = new QLabel(layoutWidget_3);
        y2_LBL->setObjectName(QString::fromUtf8("y2_LBL"));

        gridLayout_2->addWidget(y2_LBL, 2, 0, 1, 1);

        x2_LBL = new QLabel(layoutWidget_3);
        x2_LBL->setObjectName(QString::fromUtf8("x2_LBL"));
        x2_LBL->setMaximumSize(QSize(15, 16777215));

        gridLayout_2->addWidget(x2_LBL, 1, 0, 1, 1);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(660, 0, 221, 41));
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(650, 50, 331, 130));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tops_RB = new QRadioButton(verticalLayoutWidget);
        tops_RB->setObjectName(QString::fromUtf8("tops_RB"));

        verticalLayout->addWidget(tops_RB);

        three_side_RB = new QRadioButton(verticalLayoutWidget);
        three_side_RB->setObjectName(QString::fromUtf8("three_side_RB"));

        verticalLayout->addWidget(three_side_RB);

        twoSides_angle_RB = new QRadioButton(verticalLayoutWidget);
        twoSides_angle_RB->setObjectName(QString::fromUtf8("twoSides_angle_RB"));

        verticalLayout->addWidget(twoSides_angle_RB);

        oneSide_twoAngl_RB = new QRadioButton(verticalLayoutWidget);
        oneSide_twoAngl_RB->setObjectName(QString::fromUtf8("oneSide_twoAngl_RB"));

        verticalLayout->addWidget(oneSide_twoAngl_RB);

        TwoTops_twoAngl_RB = new QRadioButton(verticalLayoutWidget);
        TwoTops_twoAngl_RB->setObjectName(QString::fromUtf8("TwoTops_twoAngl_RB"));

        verticalLayout->addWidget(TwoTops_twoAngl_RB);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        all_rslt_LBL->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213:</span></p></body></html>", nullptr));
        parimeter_LBL->setText(QApplication::translate("Widget", "\320\237\320\265\321\200\320\270\320\274\320\265\321\202\321\200", nullptr));
        index_LBL->setText(QApplication::translate("Widget", "\320\222\320\265\321\200\321\210\320\270\320\275\321\213 \321\202\321\200\320\265\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\260", nullptr));
        y1_LBL->setText(QApplication::translate("Widget", "Y1", nullptr));
        x1_LBL->setText(QApplication::translate("Widget", "<html><head/><body><p>X1</p></body></html>", nullptr));
        x3_LBL->setText(QApplication::translate("Widget", "X3", nullptr));
        y3_LBL->setText(QApplication::translate("Widget", "Y3", nullptr));
        squar_LBL->setText(QApplication::translate("Widget", " \320\237\320\273\320\276\321\211\320\260\320\264\321\214", nullptr));
        y2_LBL->setText(QApplication::translate("Widget", "Y2", nullptr));
        x2_LBL->setText(QApplication::translate("Widget", "X2", nullptr));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\320\235\320\260\320\271\321\202\320\270 &quot;S&quot; \320\270 &quot;P&quot; \320\277\320\276 :</span></p></body></html>", nullptr));
        tops_RB->setText(QApplication::translate("Widget", "\320\232\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260\320\274 \320\262\320\265\321\200\321\210\320\270\320\275", nullptr));
        three_side_RB->setText(QApplication::translate("Widget", "\320\224\320\273\320\270\320\275\320\265 \321\202\321\200\321\221\321\205 \321\201\321\202\320\276\321\200\320\276\320\275", nullptr));
        twoSides_angle_RB->setText(QApplication::translate("Widget", "\320\224\320\273\320\270\320\275\320\265 2-\321\205 \321\201\321\202\320\276\321\200\320\276\320\275 \320\270 \321\203\320\263\320\273\321\203 \320\274\320\265\320\266\320\264\321\203 \320\275\320\270\320\274\320\270", nullptr));
        oneSide_twoAngl_RB->setText(QApplication::translate("Widget", "\320\224\320\273\320\270\320\275\320\265 \320\276\320\264\320\275\320\276\320\271 \321\201\321\202\320\276\321\200\320\276\320\275\321\213 \320\270 \320\264\320\262\321\203\320\274 \321\203\320\263\320\273\320\260\320\274", nullptr));
#ifndef QT_NO_TOOLTIP
        TwoTops_twoAngl_RB->setToolTip(QApplication::translate("Widget", "<html><head/><body><p>\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260\320\274 \320\262\320\265\321\200\321\210\320\270\320\275 \320\276\320\264\320\275\320\276\320\271 \321\201\321\202\320\276\321\200\320\276\320\275\321\213</p><p> \320\270 \320\264\320\262\321\203\320\274 \321\203\320\263\320\273\320\260\320\274</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        TwoTops_twoAngl_RB->setText(QApplication::translate("Widget", "\320\222\320\265\321\200\321\210\320\270\320\275\320\260\320\274 \320\276\320\264\320\275\320\276\320\271 \321\201\321\202\320\276\321\200\320\276\320\275\321\213 \320\270 \320\264\320\262\321\203\320\274 \321\203\320\263\320\273\320\260\320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
