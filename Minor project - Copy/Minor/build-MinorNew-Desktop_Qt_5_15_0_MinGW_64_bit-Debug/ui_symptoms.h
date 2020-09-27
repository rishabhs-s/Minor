/********************************************************************************
** Form generated from reading UI file 'symptoms.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYMPTOMS_H
#define UI_SYMPTOMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SYMPTOMS
{
public:
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *txt;
    QPushButton *pushButton1;

    void setupUi(QDialog *SYMPTOMS)
    {
        if (SYMPTOMS->objectName().isEmpty())
            SYMPTOMS->setObjectName(QString::fromUtf8("SYMPTOMS"));
        SYMPTOMS->resize(729, 433);
        checkBox = new QCheckBox(SYMPTOMS);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(130, 70, 91, 17));
        checkBox_2 = new QCheckBox(SYMPTOMS);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(350, 70, 151, 17));
        checkBox_3 = new QCheckBox(SYMPTOMS);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(130, 100, 111, 17));
        checkBox_4 = new QCheckBox(SYMPTOMS);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(350, 100, 131, 17));
        checkBox_5 = new QCheckBox(SYMPTOMS);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(130, 130, 121, 17));
        checkBox_6 = new QCheckBox(SYMPTOMS);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(350, 130, 131, 17));
        checkBox_7 = new QCheckBox(SYMPTOMS);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(130, 160, 70, 17));
        checkBox_8 = new QCheckBox(SYMPTOMS);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setGeometry(QRect(350, 160, 141, 17));
        checkBox_9 = new QCheckBox(SYMPTOMS);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setGeometry(QRect(130, 190, 111, 17));
        checkBox_10 = new QCheckBox(SYMPTOMS);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
        checkBox_10->setGeometry(QRect(350, 190, 70, 17));
        label = new QLabel(SYMPTOMS);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(156, 220, 61, 20));
        lineEdit = new QLineEdit(SYMPTOMS);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(250, 220, 361, 20));
        txt = new QLabel(SYMPTOMS);
        txt->setObjectName(QString::fromUtf8("txt"));
        txt->setGeometry(QRect(66, 290, 621, 131));
        pushButton1 = new QPushButton(SYMPTOMS);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));
        pushButton1->setGeometry(QRect(290, 250, 75, 23));

        retranslateUi(SYMPTOMS);

        QMetaObject::connectSlotsByName(SYMPTOMS);
    } // setupUi

    void retranslateUi(QDialog *SYMPTOMS)
    {
        SYMPTOMS->setWindowTitle(QCoreApplication::translate("SYMPTOMS", "Dialog", nullptr));
        checkBox->setText(QCoreApplication::translate("SYMPTOMS", "HIGH FEVER", nullptr));
        checkBox_2->setText(QCoreApplication::translate("SYMPTOMS", "WEAKNESS", nullptr));
        checkBox_3->setText(QCoreApplication::translate("SYMPTOMS", "STOMACH PAIN", nullptr));
        checkBox_4->setText(QCoreApplication::translate("SYMPTOMS", "HEAD ACHE", nullptr));
        checkBox_5->setText(QCoreApplication::translate("SYMPTOMS", "LOSS OF APPETITE", nullptr));
        checkBox_6->setText(QCoreApplication::translate("SYMPTOMS", "CONSTIPATION", nullptr));
        checkBox_7->setText(QCoreApplication::translate("SYMPTOMS", "COUGH", nullptr));
        checkBox_8->setText(QCoreApplication::translate("SYMPTOMS", "BREATHLESSNESS", nullptr));
        checkBox_9->setText(QCoreApplication::translate("SYMPTOMS", "CHESTPAIN", nullptr));
        checkBox_10->setText(QCoreApplication::translate("SYMPTOMS", "NAUSEA", nullptr));
        label->setText(QCoreApplication::translate("SYMPTOMS", "ANY OTHER", nullptr));
        txt->setText(QString());
        pushButton1->setText(QCoreApplication::translate("SYMPTOMS", "CHECK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SYMPTOMS: public Ui_SYMPTOMS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMPTOMS_H
