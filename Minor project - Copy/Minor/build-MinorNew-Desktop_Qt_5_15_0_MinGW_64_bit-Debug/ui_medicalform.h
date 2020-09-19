/********************************************************************************
** Form generated from reading UI file 'medicalform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDICALFORM_H
#define UI_MEDICALFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MedicalForm
{
public:
    QLabel *label_2;
    QLineEdit *medical_history;
    QLineEdit *weight;
    QLineEdit *bp;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *height;
    QLineEdit *pulse;
    QLineEdit *allergies;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *glucose;
    QLabel *label;
    QPushButton *Add;

    void setupUi(QDialog *MedicalForm)
    {
        if (MedicalForm->objectName().isEmpty())
            MedicalForm->setObjectName(QString::fromUtf8("MedicalForm"));
        MedicalForm->resize(1096, 682);
        label_2 = new QLabel(MedicalForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 160, 47, 13));
        medical_history = new QLineEdit(MedicalForm);
        medical_history->setObjectName(QString::fromUtf8("medical_history"));
        medical_history->setGeometry(QRect(220, 300, 251, 121));
        weight = new QLineEdit(MedicalForm);
        weight->setObjectName(QString::fromUtf8("weight"));
        weight->setGeometry(QRect(630, 160, 113, 20));
        bp = new QLineEdit(MedicalForm);
        bp->setObjectName(QString::fromUtf8("bp"));
        bp->setGeometry(QRect(630, 200, 113, 20));
        label_7 = new QLabel(MedicalForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(620, 270, 91, 16));
        label_3 = new QLabel(MedicalForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 200, 111, 21));
        label_5 = new QLabel(MedicalForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 240, 91, 20));
        height = new QLineEdit(MedicalForm);
        height->setObjectName(QString::fromUtf8("height"));
        height->setGeometry(QRect(320, 160, 113, 20));
        height->setClearButtonEnabled(false);
        pulse = new QLineEdit(MedicalForm);
        pulse->setObjectName(QString::fromUtf8("pulse"));
        pulse->setGeometry(QRect(330, 240, 113, 20));
        allergies = new QLineEdit(MedicalForm);
        allergies->setObjectName(QString::fromUtf8("allergies"));
        allergies->setGeometry(QRect(570, 290, 211, 111));
        label_4 = new QLabel(MedicalForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(510, 200, 111, 21));
        label_6 = new QLabel(MedicalForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(230, 270, 251, 21));
        glucose = new QLineEdit(MedicalForm);
        glucose->setObjectName(QString::fromUtf8("glucose"));
        glucose->setGeometry(QRect(330, 200, 113, 20));
        label = new QLabel(MedicalForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(530, 160, 47, 13));
        Add = new QPushButton(MedicalForm);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setGeometry(QRect(490, 430, 75, 23));

        retranslateUi(MedicalForm);

        QMetaObject::connectSlotsByName(MedicalForm);
    } // setupUi

    void retranslateUi(QDialog *MedicalForm)
    {
        MedicalForm->setWindowTitle(QCoreApplication::translate("MedicalForm", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("MedicalForm", "HEIGHT", nullptr));
        label_7->setText(QCoreApplication::translate("MedicalForm", "ENTER ALLERGIES", nullptr));
        label_3->setText(QCoreApplication::translate("MedicalForm", "GLUCOSE LEVEL", nullptr));
        label_5->setText(QCoreApplication::translate("MedicalForm", "PULSE RATE", nullptr));
        label_4->setText(QCoreApplication::translate("MedicalForm", "BLOOD PRESSURE", nullptr));
        label_6->setText(QCoreApplication::translate("MedicalForm", "ENTER YOUR MEDICAL HISTORY", nullptr));
        label->setText(QCoreApplication::translate("MedicalForm", "WEIGHT", nullptr));
        Add->setText(QCoreApplication::translate("MedicalForm", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MedicalForm: public Ui_MedicalForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDICALFORM_H
