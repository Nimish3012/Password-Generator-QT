/********************************************************************************
** Form generated from reading UI file 'password_generator.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORD_GENERATOR_H
#define UI_PASSWORD_GENERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Password_Generator
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QSpinBox *spinBox;
    QLabel *label;
    QCheckBox *checkBox_5;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Password_Generator)
    {
        if (Password_Generator->objectName().isEmpty())
            Password_Generator->setObjectName("Password_Generator");
        Password_Generator->resize(327, 527);
        Password_Generator->setMinimumSize(QSize(327, 527));
        Password_Generator->setMaximumSize(QSize(327, 527));
        centralwidget = new QWidget(Password_Generator);
        centralwidget->setObjectName("centralwidget");
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(20, 230, 281, 181));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 110, 281, 28));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 420, 83, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 420, 83, 29));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(220, 190, 83, 29));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(30, 20, 93, 26));
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(30, 60, 93, 26));
        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(200, 60, 93, 26));
        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(200, 20, 93, 26));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(107, 190, 81, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 190, 70, 31));
        checkBox_5 = new QCheckBox(centralwidget);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setGeometry(QRect(30, 140, 93, 26));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(112, 419, 101, 31));
        label_2->setAutoFillBackground(true);
        label_2->setOpenExternalLinks(true);
        Password_Generator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Password_Generator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 327, 25));
        Password_Generator->setMenuBar(menubar);
        statusbar = new QStatusBar(Password_Generator);
        statusbar->setObjectName("statusbar");
        Password_Generator->setStatusBar(statusbar);

        retranslateUi(Password_Generator);

        QMetaObject::connectSlotsByName(Password_Generator);
    } // setupUi

    void retranslateUi(QMainWindow *Password_Generator)
    {
        Password_Generator->setWindowTitle(QCoreApplication::translate("Password_Generator", "Password_Generator", nullptr));
        pushButton->setText(QCoreApplication::translate("Password_Generator", "Clear", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Password_Generator", "Reset", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Password_Generator", "Generate", nullptr));
        checkBox->setText(QCoreApplication::translate("Password_Generator", "123", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Password_Generator", "@$%", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Password_Generator", "ABC", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Password_Generator", "abc", nullptr));
        label->setText(QCoreApplication::translate("Password_Generator", "Length:", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Password_Generator", "CheckBox", nullptr));
        label_2->setText(QCoreApplication::translate("Password_Generator", "\302\251 Nimish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Password_Generator: public Ui_Password_Generator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORD_GENERATOR_H
