/********************************************************************************
** Form generated from reading UI file 'retrieve.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETRIEVE_H
#define UI_RETRIEVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Retrieve
{
public:
    QGroupBox *groupBox;
    QPushButton *Retrieverec;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit_6;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_7;

    void setupUi(QDialog *Retrieve)
    {
        if (Retrieve->objectName().isEmpty())
            Retrieve->setObjectName(QString::fromUtf8("Retrieve"));
        Retrieve->resize(1175, 717);
        groupBox = new QGroupBox(Retrieve);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(140, 60, 861, 511));
        Retrieverec = new QPushButton(groupBox);
        Retrieverec->setObjectName(QString::fromUtf8("Retrieverec"));
        Retrieverec->setGeometry(QRect(390, 470, 93, 28));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 60, 55, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 110, 55, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 150, 81, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 200, 91, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 250, 81, 16));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(320, 60, 113, 22));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(320, 110, 113, 22));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(320, 150, 113, 22));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(320, 200, 113, 22));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(320, 250, 113, 22));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 280, 861, 181));
        lineEdit_6 = new QLineEdit(groupBox_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(120, 10, 251, 161));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 60, 91, 21));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(510, 70, 71, 21));
        lineEdit_7 = new QLineEdit(groupBox_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(570, 10, 271, 161));

        retranslateUi(Retrieve);

        QMetaObject::connectSlotsByName(Retrieve);
    } // setupUi

    void retranslateUi(QDialog *Retrieve)
    {
        Retrieve->setWindowTitle(QCoreApplication::translate("Retrieve", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Retrieve", "Retrieve", nullptr));
        Retrieverec->setText(QCoreApplication::translate("Retrieve", "okay", nullptr));
        label->setText(QCoreApplication::translate("Retrieve", "Height", nullptr));
        label_2->setText(QCoreApplication::translate("Retrieve", "Weight", nullptr));
        label_3->setText(QCoreApplication::translate("Retrieve", "Glucose Level", nullptr));
        label_4->setText(QCoreApplication::translate("Retrieve", "Blood pressure", nullptr));
        label_5->setText(QCoreApplication::translate("Retrieve", "Pulse rate", nullptr));
        groupBox_2->setTitle(QString());
        label_6->setText(QCoreApplication::translate("Retrieve", "Medical History", nullptr));
        label_7->setText(QCoreApplication::translate("Retrieve", "Allergies", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Retrieve: public Ui_Retrieve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETRIEVE_H
