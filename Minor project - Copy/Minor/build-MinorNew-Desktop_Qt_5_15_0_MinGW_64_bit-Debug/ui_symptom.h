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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Symptom
{
public:
    QLabel *txt;
    QPushButton *symptomcheck;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_9;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_10;

    void setupUi(QDialog *Symptom)
    {
        if (Symptom->objectName().isEmpty())
            Symptom->setObjectName(QString::fromUtf8("Symptom"));
        Symptom->resize(1132, 713);
        txt = new QLabel(Symptom);
        txt->setObjectName(QString::fromUtf8("txt"));
        txt->setGeometry(QRect(200, 530, 741, 131));
        symptomcheck = new QPushButton(Symptom);
        symptomcheck->setObjectName(QString::fromUtf8("symptomcheck"));
        symptomcheck->setGeometry(QRect(520, 540, 121, 31));
        groupBox = new QGroupBox(Symptom);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(140, 50, 871, 441));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 60, 281, 331));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_5 = new QCheckBox(widget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        verticalLayout->addWidget(checkBox_5);

        checkBox_7 = new QCheckBox(widget);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        verticalLayout->addWidget(checkBox_7);

        checkBox_9 = new QCheckBox(widget);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));

        verticalLayout->addWidget(checkBox_9);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(470, 60, 281, 331));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox_2 = new QCheckBox(widget1);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_2->addWidget(checkBox_2);

        checkBox_4 = new QCheckBox(widget1);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout_2->addWidget(checkBox_4);

        checkBox_6 = new QCheckBox(widget1);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        verticalLayout_2->addWidget(checkBox_6);

        checkBox_8 = new QCheckBox(widget1);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        verticalLayout_2->addWidget(checkBox_8);

        checkBox_10 = new QCheckBox(widget1);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));

        verticalLayout_2->addWidget(checkBox_10);


        retranslateUi(Symptom);

        QMetaObject::connectSlotsByName(Symptom);
    } // setupUi

    void retranslateUi(QDialog *Symptom)
    {
        Symptom->setWindowTitle(QCoreApplication::translate("Symptom", "Symptom check", nullptr));
        txt->setText(QString());
        symptomcheck->setText(QCoreApplication::translate("Symptom", "CHECK", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Symptom", "Symptom Check", nullptr));
        checkBox->setText(QCoreApplication::translate("Symptom", "HIGH FEVER", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Symptom", "STOMACH PAIN", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Symptom", "LOSS OF APPETITE", nullptr));
        checkBox_7->setText(QCoreApplication::translate("Symptom", "COUGH", nullptr));
        checkBox_9->setText(QCoreApplication::translate("Symptom", "CHEST PAIN", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Symptom", "WEAKNESS", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Symptom", "HEAD ACHE", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Symptom", "CONSTIPATION", nullptr));
        checkBox_8->setText(QCoreApplication::translate("Symptom", "BREATHLESSNESS", nullptr));
        checkBox_10->setText(QCoreApplication::translate("Symptom", "NAUSEA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Symptom: public Ui_Symptom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMPTOM_H
