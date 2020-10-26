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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MedicalForm
{
public:
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *weight;
    QLineEdit *bp;
    QLabel *label_2;
    QLineEdit *pulse;
    QLabel *label_5;
    QLineEdit *glucose;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_3;
    QLineEdit *height;
    QLineEdit *allergies;
    QLineEdit *medical_history;
    QPushButton *Add;
    QLineEdit *lineEdit;

    void setupUi(QDialog *MedicalForm)
    {
        if (MedicalForm->objectName().isEmpty())
            MedicalForm->setObjectName(QString::fromUtf8("MedicalForm"));
        MedicalForm->resize(1044, 534);
        gridLayoutWidget_2 = new QWidget(MedicalForm);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(180, 60, 751, 381));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 7, 0, 1, 1);

        weight = new QLineEdit(gridLayoutWidget_2);
        weight->setObjectName(QString::fromUtf8("weight"));

        gridLayout_2->addWidget(weight, 2, 1, 1, 1);

        bp = new QLineEdit(gridLayoutWidget_2);
        bp->setObjectName(QString::fromUtf8("bp"));

        gridLayout_2->addWidget(bp, 7, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        pulse = new QLineEdit(gridLayoutWidget_2);
        pulse->setObjectName(QString::fromUtf8("pulse"));

        gridLayout_2->addWidget(pulse, 6, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 6, 0, 1, 1);

        glucose = new QLineEdit(gridLayoutWidget_2);
        glucose->setObjectName(QString::fromUtf8("glucose"));

        gridLayout_2->addWidget(glucose, 4, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 8, 0, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 9, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        height = new QLineEdit(gridLayoutWidget_2);
        height->setObjectName(QString::fromUtf8("height"));
        height->setClearButtonEnabled(false);

        gridLayout_2->addWidget(height, 1, 1, 1, 1);

        allergies = new QLineEdit(gridLayoutWidget_2);
        allergies->setObjectName(QString::fromUtf8("allergies"));

        gridLayout_2->addWidget(allergies, 9, 1, 1, 1);

        medical_history = new QLineEdit(gridLayoutWidget_2);
        medical_history->setObjectName(QString::fromUtf8("medical_history"));

        gridLayout_2->addWidget(medical_history, 8, 1, 1, 1);

        Add = new QPushButton(MedicalForm);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setGeometry(QRect(470, 470, 185, 28));
        lineEdit = new QLineEdit(MedicalForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 20, 113, 22));

        retranslateUi(MedicalForm);

        QMetaObject::connectSlotsByName(MedicalForm);
    } // setupUi

    void retranslateUi(QDialog *MedicalForm)
    {
        MedicalForm->setWindowTitle(QCoreApplication::translate("MedicalForm", "Medical Records", nullptr));
        label_4->setText(QCoreApplication::translate("MedicalForm", "BLOOD PRESSURE", nullptr));
        weight->setPlaceholderText(QCoreApplication::translate("MedicalForm", "in kg", nullptr));
        bp->setPlaceholderText(QCoreApplication::translate("MedicalForm", "in mmHg", nullptr));
        label_2->setText(QCoreApplication::translate("MedicalForm", "HEIGHT", nullptr));
        pulse->setPlaceholderText(QCoreApplication::translate("MedicalForm", "in bpm", nullptr));
        label_5->setText(QCoreApplication::translate("MedicalForm", "PULSE RATE", nullptr));
        glucose->setPlaceholderText(QCoreApplication::translate("MedicalForm", "in mg/dl", nullptr));
        label_6->setText(QCoreApplication::translate("MedicalForm", "ENTER YOUR MEDICAL HISTORY", nullptr));
        label->setText(QCoreApplication::translate("MedicalForm", "WEIGHT", nullptr));
        label_7->setText(QCoreApplication::translate("MedicalForm", "ENTER ALLERGIES", nullptr));
        label_3->setText(QCoreApplication::translate("MedicalForm", "GLUCOSE LEVEL", nullptr));
        height->setPlaceholderText(QCoreApplication::translate("MedicalForm", "in cm", nullptr));
        allergies->setPlaceholderText(QCoreApplication::translate("MedicalForm", "Allergies", nullptr));
        medical_history->setPlaceholderText(QCoreApplication::translate("MedicalForm", "Medical History", nullptr));
        Add->setText(QCoreApplication::translate("MedicalForm", "Add", nullptr));
        lineEdit->setText(QCoreApplication::translate("MedicalForm", "Medical Records", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MedicalForm: public Ui_MedicalForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDICALFORM_H
