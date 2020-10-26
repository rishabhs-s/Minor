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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Retrieve
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label;
    QLabel *weight;
    QPushButton *Retrieverec;
    QLabel *height;
    QLineEdit *username;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *bp;
    QHBoxLayout *horizontalLayout;
    QLabel *medical;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *allergies;
    QLabel *pulse;
    QLabel *glucose;
    QPushButton *okay;

    void setupUi(QDialog *Retrieve)
    {
        if (Retrieve->objectName().isEmpty())
            Retrieve->setObjectName(QString::fromUtf8("Retrieve"));
        Retrieve->resize(1150, 636);
        groupBox = new QGroupBox(Retrieve);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 30, 911, 461));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        weight = new QLabel(groupBox);
        weight->setObjectName(QString::fromUtf8("weight"));

        gridLayout->addWidget(weight, 5, 1, 1, 1);

        Retrieverec = new QPushButton(groupBox);
        Retrieverec->setObjectName(QString::fromUtf8("Retrieverec"));

        gridLayout->addWidget(Retrieverec, 0, 2, 1, 1);

        height = new QLabel(groupBox);
        height->setObjectName(QString::fromUtf8("height"));

        gridLayout->addWidget(height, 4, 1, 1, 5);

        username = new QLineEdit(groupBox);
        username->setObjectName(QString::fromUtf8("username"));

        gridLayout->addWidget(username, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 9, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        bp = new QLabel(groupBox);
        bp->setObjectName(QString::fromUtf8("bp"));

        gridLayout->addWidget(bp, 7, 1, 1, 5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        gridLayout->addLayout(horizontalLayout, 0, 4, 1, 1);

        medical = new QLabel(groupBox);
        medical->setObjectName(QString::fromUtf8("medical"));

        gridLayout->addWidget(medical, 9, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 10, 0, 1, 1);

        allergies = new QLabel(groupBox);
        allergies->setObjectName(QString::fromUtf8("allergies"));

        gridLayout->addWidget(allergies, 10, 1, 1, 1);

        pulse = new QLabel(groupBox);
        pulse->setObjectName(QString::fromUtf8("pulse"));

        gridLayout->addWidget(pulse, 8, 1, 1, 2);

        glucose = new QLabel(groupBox);
        glucose->setObjectName(QString::fromUtf8("glucose"));

        gridLayout->addWidget(glucose, 6, 1, 1, 4);

        okay = new QPushButton(Retrieve);
        okay->setObjectName(QString::fromUtf8("okay"));
        okay->setGeometry(QRect(420, 500, 101, 28));

        retranslateUi(Retrieve);

        QMetaObject::connectSlotsByName(Retrieve);
    } // setupUi

    void retranslateUi(QDialog *Retrieve)
    {
        Retrieve->setWindowTitle(QCoreApplication::translate("Retrieve", "Retrieve Records", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Retrieve", "Retrieve", nullptr));
        label_8->setText(QCoreApplication::translate("Retrieve", "Username", nullptr));
        label->setText(QCoreApplication::translate("Retrieve", "Height", nullptr));
        weight->setText(QString());
        Retrieverec->setText(QCoreApplication::translate("Retrieve", "Retrieve", nullptr));
        height->setText(QString());
        username->setPlaceholderText(QCoreApplication::translate("Retrieve", "enter username", nullptr));
        label_2->setText(QCoreApplication::translate("Retrieve", "Weight", nullptr));
        label_6->setText(QCoreApplication::translate("Retrieve", "Medical History", nullptr));
        label_5->setText(QCoreApplication::translate("Retrieve", "Pulse rate", nullptr));
        label_3->setText(QCoreApplication::translate("Retrieve", "Glucose Level", nullptr));
        bp->setText(QString());
        medical->setText(QString());
        label_4->setText(QCoreApplication::translate("Retrieve", "Blood pressure", nullptr));
        label_7->setText(QCoreApplication::translate("Retrieve", "Allergies", nullptr));
        allergies->setText(QString());
        pulse->setText(QString());
        glucose->setText(QString());
        okay->setText(QCoreApplication::translate("Retrieve", "Okay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Retrieve: public Ui_Retrieve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETRIEVE_H
