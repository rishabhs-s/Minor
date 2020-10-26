/********************************************************************************
** Form generated from reading UI file 'update.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_H
#define UI_UPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Update
{
public:
    QGroupBox *groupBox;
    QPushButton *Updaterec;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *weight;
    QLineEdit *glucose;
    QLineEdit *bp;
    QLineEdit *pulse;
    QGroupBox *groupBox_2;
    QLineEdit *medical_history;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *allergies;
    QPushButton *show;
    QLineEdit *height;
    QLineEdit *username;
    QLabel *label_8;

    void setupUi(QDialog *Update)
    {
        if (Update->objectName().isEmpty())
            Update->setObjectName(QString::fromUtf8("Update"));
        Update->resize(1142, 749);
        groupBox = new QGroupBox(Update);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(130, 80, 861, 511));
        Updaterec = new QPushButton(groupBox);
        Updaterec->setObjectName(QString::fromUtf8("Updaterec"));
        Updaterec->setGeometry(QRect(390, 460, 93, 28));
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
        weight = new QLineEdit(groupBox);
        weight->setObjectName(QString::fromUtf8("weight"));
        weight->setGeometry(QRect(320, 110, 113, 22));
        glucose = new QLineEdit(groupBox);
        glucose->setObjectName(QString::fromUtf8("glucose"));
        glucose->setGeometry(QRect(320, 150, 113, 22));
        bp = new QLineEdit(groupBox);
        bp->setObjectName(QString::fromUtf8("bp"));
        bp->setGeometry(QRect(320, 200, 113, 22));
        pulse = new QLineEdit(groupBox);
        pulse->setObjectName(QString::fromUtf8("pulse"));
        pulse->setGeometry(QRect(320, 250, 113, 22));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 280, 861, 181));
        medical_history = new QLineEdit(groupBox_2);
        medical_history->setObjectName(QString::fromUtf8("medical_history"));
        medical_history->setGeometry(QRect(120, 10, 251, 161));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 60, 91, 21));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(510, 70, 71, 21));
        allergies = new QLineEdit(groupBox_2);
        allergies->setObjectName(QString::fromUtf8("allergies"));
        allergies->setGeometry(QRect(570, 10, 271, 161));
        show = new QPushButton(groupBox);
        show->setObjectName(QString::fromUtf8("show"));
        show->setGeometry(QRect(450, 10, 93, 28));
        height = new QLineEdit(groupBox);
        height->setObjectName(QString::fromUtf8("height"));
        height->setGeometry(QRect(320, 60, 113, 22));
        username = new QLineEdit(groupBox);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(320, 10, 113, 22));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(150, 10, 71, 21));

        retranslateUi(Update);

        QMetaObject::connectSlotsByName(Update);
    } // setupUi

    void retranslateUi(QDialog *Update)
    {
        Update->setWindowTitle(QCoreApplication::translate("Update", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Update", "Update", nullptr));
        Updaterec->setText(QCoreApplication::translate("Update", "Update", nullptr));
        label->setText(QCoreApplication::translate("Update", "Height", nullptr));
        label_2->setText(QCoreApplication::translate("Update", "Weight", nullptr));
        label_3->setText(QCoreApplication::translate("Update", "Glucose Level", nullptr));
        label_4->setText(QCoreApplication::translate("Update", "Blood pressure", nullptr));
        label_5->setText(QCoreApplication::translate("Update", "Pulse rate", nullptr));
        groupBox_2->setTitle(QString());
        label_6->setText(QCoreApplication::translate("Update", "Medical History", nullptr));
        label_7->setText(QCoreApplication::translate("Update", "Allergies", nullptr));
        show->setText(QCoreApplication::translate("Update", "show", nullptr));
        label_8->setText(QCoreApplication::translate("Update", "username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Update: public Ui_Update {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_H
