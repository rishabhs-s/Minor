/********************************************************************************
** Form generated from reading UI file 'symptom.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYMPTOM_H
#define UI_SYMPTOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Symptom
{
public:
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QLabel *txt;
    QCheckBox *checkBox_4;
    QLabel *label;
    QPushButton *symptomcheck;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox;
    QCheckBox *checkBox_10;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Symptom)
    {
        if (Symptom->objectName().isEmpty())
            Symptom->setObjectName(QString::fromUtf8("Symptom"));
        Symptom->resize(1132, 713);
        checkBox_7 = new QCheckBox(Symptom);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(384, 400, 70, 17));
        checkBox_8 = new QCheckBox(Symptom);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setGeometry(QRect(604, 400, 141, 17));
        txt = new QLabel(Symptom);
        txt->setObjectName(QString::fromUtf8("txt"));
        txt->setGeometry(QRect(320, 530, 621, 131));
        checkBox_4 = new QCheckBox(Symptom);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(604, 340, 131, 17));
        label = new QLabel(Symptom);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(410, 460, 61, 20));
        symptomcheck = new QPushButton(Symptom);
        symptomcheck->setObjectName(QString::fromUtf8("symptomcheck"));
        symptomcheck->setGeometry(QRect(544, 490, 75, 23));
        checkBox_2 = new QCheckBox(Symptom);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(604, 310, 151, 17));
        checkBox_5 = new QCheckBox(Symptom);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(384, 370, 121, 17));
        checkBox_6 = new QCheckBox(Symptom);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(604, 370, 131, 17));
        checkBox_3 = new QCheckBox(Symptom);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(384, 340, 111, 17));
        checkBox_9 = new QCheckBox(Symptom);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setGeometry(QRect(384, 430, 111, 17));
        checkBox = new QCheckBox(Symptom);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(384, 310, 91, 17));
        checkBox_10 = new QCheckBox(Symptom);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
        checkBox_10->setGeometry(QRect(604, 430, 70, 17));
        lineEdit = new QLineEdit(Symptom);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(504, 460, 361, 20));

        retranslateUi(Symptom);

        QMetaObject::connectSlotsByName(Symptom);
    } // setupUi

    void retranslateUi(QDialog *Symptom)
    {
        Symptom->setWindowTitle(QCoreApplication::translate("Symptom", "Dialog", nullptr));
        checkBox_7->setText(QCoreApplication::translate("Symptom", "COUGH", nullptr));
        checkBox_8->setText(QCoreApplication::translate("Symptom", "BREATHLESSNESS", nullptr));
        txt->setText(QString());
        checkBox_4->setText(QCoreApplication::translate("Symptom", "HEAD ACHE", nullptr));
        label->setText(QCoreApplication::translate("Symptom", "ANY OTHER", nullptr));
        symptomcheck->setText(QCoreApplication::translate("Symptom", "CHECK", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Symptom", "WEAKNESS", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Symptom", "LOSS OF APPETITE", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Symptom", "CONSTIPATION", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Symptom", "STOMACH PAIN", nullptr));
        checkBox_9->setText(QCoreApplication::translate("Symptom", "CHESTPAIN", nullptr));
        checkBox->setText(QCoreApplication::translate("Symptom", "HIGH FEVER", nullptr));
        checkBox_10->setText(QCoreApplication::translate("Symptom", "NAUSEA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Symptom: public Ui_Symptom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMPTOM_H
