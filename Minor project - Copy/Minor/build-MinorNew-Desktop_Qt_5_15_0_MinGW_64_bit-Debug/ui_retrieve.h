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
    QGroupBox *groupBox_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *medical;
    QLabel *allergies;
    QLabel *height;
    QLabel *weight;
    QLabel *glucose;
    QLabel *bp;
    QLabel *pulse;
    QLabel *label_8;
    QLineEdit *username;

    void setupUi(QDialog *Retrieve)
    {
        if (Retrieve->objectName().isEmpty())
            Retrieve->setObjectName(QString::fromUtf8("Retrieve"));
        Retrieve->resize(1175, 717);
        groupBox = new QGroupBox(Retrieve);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(100, 40, 861, 511));
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
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 280, 861, 181));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 60, 91, 21));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(510, 70, 71, 21));
        medical = new QLabel(groupBox_2);
        medical->setObjectName(QString::fromUtf8("medical"));
        medical->setGeometry(QRect(160, 10, 231, 151));
        allergies = new QLabel(groupBox_2);
        allergies->setObjectName(QString::fromUtf8("allergies"));
        allergies->setGeometry(QRect(590, 10, 231, 151));
        height = new QLabel(groupBox);
        height->setObjectName(QString::fromUtf8("height"));
        height->setGeometry(QRect(320, 50, 111, 31));
        weight = new QLabel(groupBox);
        weight->setObjectName(QString::fromUtf8("weight"));
        weight->setGeometry(QRect(310, 100, 111, 31));
        glucose = new QLabel(groupBox);
        glucose->setObjectName(QString::fromUtf8("glucose"));
        glucose->setGeometry(QRect(320, 150, 111, 31));
        bp = new QLabel(groupBox);
        bp->setObjectName(QString::fromUtf8("bp"));
        bp->setGeometry(QRect(320, 190, 111, 31));
        pulse = new QLabel(groupBox);
        pulse->setObjectName(QString::fromUtf8("pulse"));
        pulse->setGeometry(QRect(310, 230, 111, 31));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(150, 20, 81, 20));
        username = new QLineEdit(groupBox);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(280, 20, 113, 22));

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
        medical->setText(QCoreApplication::translate("Retrieve", "6", nullptr));
        allergies->setText(QCoreApplication::translate("Retrieve", "7", nullptr));
        height->setText(QCoreApplication::translate("Retrieve", "1", nullptr));
        weight->setText(QCoreApplication::translate("Retrieve", "2", nullptr));
        glucose->setText(QCoreApplication::translate("Retrieve", "3", nullptr));
        bp->setText(QCoreApplication::translate("Retrieve", "4", nullptr));
        pulse->setText(QCoreApplication::translate("Retrieve", "5", nullptr));
        label_8->setText(QCoreApplication::translate("Retrieve", "username", nullptr));
        username->setPlaceholderText(QCoreApplication::translate("Retrieve", "enter username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Retrieve: public Ui_Retrieve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETRIEVE_H
