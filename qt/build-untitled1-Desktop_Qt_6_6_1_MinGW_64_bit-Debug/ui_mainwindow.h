/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action12;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QDateEdit *dateEdit;
    QMenuBar *menubar;
    QMenu *menu11;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1303, 844);
        action12 = new QAction(MainWindow);
        action12->setObjectName("action12");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 70, 191, 18));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(260, 110, 171, 64));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(290, 200, 80, 18));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(550, 110, 116, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1303, 24));
        menu11 = new QMenu(menubar);
        menu11->setObjectName("menu11");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu11->menuAction());
        menu11->addSeparator();
        menu11->addAction(action12);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action12->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\347\247\201\343\202\222\343\202\257\343\203\252\343\203\203\343\202\257\343\201\227\343\201\246", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        menu11->setTitle(QCoreApplication::translate("MainWindow", "11", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
