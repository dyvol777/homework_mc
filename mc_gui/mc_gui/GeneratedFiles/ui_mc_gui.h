/********************************************************************************
** Form generated from reading UI file 'mc_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MC_GUI_H
#define UI_MC_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mc_guiClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QListWidget *listWidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QMenuBar *menuBar;
    QMenu *menuMicrocontroller_emulation;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mc_guiClass)
    {
        if (mc_guiClass->objectName().isEmpty())
            mc_guiClass->setObjectName(QStringLiteral("mc_guiClass"));
        mc_guiClass->resize(789, 519);
        centralWidget = new QWidget(mc_guiClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 114, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_1 = new QCheckBox(verticalLayoutWidget);
        checkBox_1->setObjectName(QStringLiteral("checkBox_1"));

        verticalLayout->addWidget(checkBox_1);

        checkBox_2 = new QCheckBox(verticalLayoutWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(verticalLayoutWidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(verticalLayoutWidget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(verticalLayoutWidget);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        verticalLayout->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(verticalLayoutWidget);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        verticalLayout->addWidget(checkBox_6);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 350, 351, 34));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(200, 20, 351, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(220, 130, 256, 192));
        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(590, 20, 160, 371));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox_7 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setEnabled(false);

        verticalLayout_2->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setEnabled(false);

        verticalLayout_2->addWidget(checkBox_8);

        checkBox_9 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        checkBox_9->setEnabled(false);

        verticalLayout_2->addWidget(checkBox_9);

        checkBox_10 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));
        checkBox_10->setEnabled(false);

        verticalLayout_2->addWidget(checkBox_10);

        checkBox_11 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_11->setObjectName(QStringLiteral("checkBox_11"));
        checkBox_11->setEnabled(false);

        verticalLayout_2->addWidget(checkBox_11);

        checkBox_12 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_12->setObjectName(QStringLiteral("checkBox_12"));
        checkBox_12->setEnabled(false);

        verticalLayout_2->addWidget(checkBox_12);

        mc_guiClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mc_guiClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 789, 31));
        menuMicrocontroller_emulation = new QMenu(menuBar);
        menuMicrocontroller_emulation->setObjectName(QStringLiteral("menuMicrocontroller_emulation"));
        mc_guiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mc_guiClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mc_guiClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mc_guiClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mc_guiClass->setStatusBar(statusBar);

        menuBar->addAction(menuMicrocontroller_emulation->menuAction());

        retranslateUi(mc_guiClass);

        QMetaObject::connectSlotsByName(mc_guiClass);
    } // setupUi

    void retranslateUi(QMainWindow *mc_guiClass)
    {
        mc_guiClass->setWindowTitle(QApplication::translate("mc_guiClass", "mc_gui", 0));
        checkBox_1->setText(QApplication::translate("mc_guiClass", "pin0", 0));
        checkBox_2->setText(QApplication::translate("mc_guiClass", "pin1", 0));
        checkBox_3->setText(QApplication::translate("mc_guiClass", "pin2", 0));
        checkBox_4->setText(QApplication::translate("mc_guiClass", "pin3", 0));
        checkBox_5->setText(QApplication::translate("mc_guiClass", "pin4", 0));
        checkBox_6->setText(QApplication::translate("mc_guiClass", "pin5", 0));
        pushButton->setText(QApplication::translate("mc_guiClass", "ROM", 0));
        pushButton_2->setText(QApplication::translate("mc_guiClass", "RAM / REG", 0));
        pushButton_3->setText(QApplication::translate("mc_guiClass", "Run all", 0));
        pushButton_4->setText(QApplication::translate("mc_guiClass", "Run 1 step", 0));
        checkBox_7->setText(QApplication::translate("mc_guiClass", "pin0", 0));
        checkBox_8->setText(QApplication::translate("mc_guiClass", "pin1", 0));
        checkBox_9->setText(QApplication::translate("mc_guiClass", "pin2", 0));
        checkBox_10->setText(QApplication::translate("mc_guiClass", "pin3", 0));
        checkBox_11->setText(QApplication::translate("mc_guiClass", "pin4", 0));
        checkBox_12->setText(QApplication::translate("mc_guiClass", "pin5", 0));
        menuMicrocontroller_emulation->setTitle(QApplication::translate("mc_guiClass", "Microcontroller emulation!", 0));
    } // retranslateUi

};

namespace Ui {
    class mc_guiClass: public Ui_mc_guiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MC_GUI_H
