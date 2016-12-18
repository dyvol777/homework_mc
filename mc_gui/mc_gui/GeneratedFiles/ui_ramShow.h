/********************************************************************************
** Form generated from reading UI file 'ramShow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMSHOW_H
#define UI_RAMSHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ramShow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_9;
    QLCDNumber *lcdNumber_13;
    QLCDNumber *lcdNumber_17;
    QVBoxLayout *verticalLayout_3;
    QLCDNumber *lcdNumber_6;
    QLCDNumber *lcdNumber_10;
    QLCDNumber *lcdNumber_14;
    QLCDNumber *lcdNumber_18;
    QVBoxLayout *verticalLayout_4;
    QLCDNumber *lcdNumber_7;
    QLCDNumber *lcdNumber_11;
    QLCDNumber *lcdNumber_15;
    QLCDNumber *lcdNumber_19;
    QVBoxLayout *verticalLayout_5;
    QLCDNumber *lcdNumber_8;
    QLCDNumber *lcdNumber_12;
    QLCDNumber *lcdNumber_16;
    QLCDNumber *lcdNumber_20;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *ramShow)
    {
        if (ramShow->objectName().isEmpty())
            ramShow->setObjectName(QStringLiteral("ramShow"));
        ramShow->resize(749, 361);
        horizontalLayoutWidget = new QWidget(ramShow);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 40, 591, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(horizontalLayoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        horizontalLayout->addWidget(lcdNumber);

        lcdNumber_2 = new QLCDNumber(horizontalLayoutWidget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));

        horizontalLayout->addWidget(lcdNumber_2);

        lcdNumber_3 = new QLCDNumber(horizontalLayoutWidget);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));

        horizontalLayout->addWidget(lcdNumber_3);

        lcdNumber_4 = new QLCDNumber(horizontalLayoutWidget);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));

        horizontalLayout->addWidget(lcdNumber_4);

        horizontalLayoutWidget_2 = new QWidget(ramShow);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(40, 120, 661, 221));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lcdNumber_5 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));

        verticalLayout_2->addWidget(lcdNumber_5);

        lcdNumber_9 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_9->setObjectName(QStringLiteral("lcdNumber_9"));

        verticalLayout_2->addWidget(lcdNumber_9);

        lcdNumber_13 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_13->setObjectName(QStringLiteral("lcdNumber_13"));

        verticalLayout_2->addWidget(lcdNumber_13);

        lcdNumber_17 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_17->setObjectName(QStringLiteral("lcdNumber_17"));

        verticalLayout_2->addWidget(lcdNumber_17);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lcdNumber_6 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));

        verticalLayout_3->addWidget(lcdNumber_6);

        lcdNumber_10 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_10->setObjectName(QStringLiteral("lcdNumber_10"));

        verticalLayout_3->addWidget(lcdNumber_10);

        lcdNumber_14 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_14->setObjectName(QStringLiteral("lcdNumber_14"));

        verticalLayout_3->addWidget(lcdNumber_14);

        lcdNumber_18 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_18->setObjectName(QStringLiteral("lcdNumber_18"));

        verticalLayout_3->addWidget(lcdNumber_18);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lcdNumber_7 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_7->setObjectName(QStringLiteral("lcdNumber_7"));

        verticalLayout_4->addWidget(lcdNumber_7);

        lcdNumber_11 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_11->setObjectName(QStringLiteral("lcdNumber_11"));

        verticalLayout_4->addWidget(lcdNumber_11);

        lcdNumber_15 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_15->setObjectName(QStringLiteral("lcdNumber_15"));

        verticalLayout_4->addWidget(lcdNumber_15);

        lcdNumber_19 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_19->setObjectName(QStringLiteral("lcdNumber_19"));

        verticalLayout_4->addWidget(lcdNumber_19);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        lcdNumber_8 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_8->setObjectName(QStringLiteral("lcdNumber_8"));

        verticalLayout_5->addWidget(lcdNumber_8);

        lcdNumber_12 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_12->setObjectName(QStringLiteral("lcdNumber_12"));

        verticalLayout_5->addWidget(lcdNumber_12);

        lcdNumber_16 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_16->setObjectName(QStringLiteral("lcdNumber_16"));

        verticalLayout_5->addWidget(lcdNumber_16);

        lcdNumber_20 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_20->setObjectName(QStringLiteral("lcdNumber_20"));

        verticalLayout_5->addWidget(lcdNumber_20);


        horizontalLayout_2->addLayout(verticalLayout_5);

        label = new QLabel(ramShow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 90, 68, 19));
        label_2 = new QLabel(ramShow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 10, 68, 19));

        retranslateUi(ramShow);

        QMetaObject::connectSlotsByName(ramShow);
    } // setupUi

    void retranslateUi(QWidget *ramShow)
    {
        ramShow->setWindowTitle(QApplication::translate("ramShow", "ramShow", 0));
        label->setText(QApplication::translate("ramShow", "RAM", 0));
        label_2->setText(QApplication::translate("ramShow", "Registers", 0));
    } // retranslateUi

};

namespace Ui {
    class ramShow: public Ui_ramShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMSHOW_H
