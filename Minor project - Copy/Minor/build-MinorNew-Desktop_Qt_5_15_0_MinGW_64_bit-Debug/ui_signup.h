/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *first;
    QLabel *label_2;
    QLineEdit *last;
    QLabel *label_3;
    QLineEdit *email;
    QLabel *label_4;
    QLineEdit *password;
    QLabel *label_5;
    QLineEdit *age;
    QPushButton *signup;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName(QString::fromUtf8("Signup"));
        Signup->resize(725, 598);
        Signup->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(Signup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Signup);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        first = new QLineEdit(Signup);
        first->setObjectName(QString::fromUtf8("first"));

        verticalLayout->addWidget(first);

        label_2 = new QLabel(Signup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        last = new QLineEdit(Signup);
        last->setObjectName(QString::fromUtf8("last"));

        verticalLayout->addWidget(last);

        label_3 = new QLabel(Signup);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        email = new QLineEdit(Signup);
        email->setObjectName(QString::fromUtf8("email"));

        verticalLayout->addWidget(email);

        label_4 = new QLabel(Signup);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        password = new QLineEdit(Signup);
        password->setObjectName(QString::fromUtf8("password"));
        password->setFrame(true);
        password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(password);

        label_5 = new QLabel(Signup);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        age = new QLineEdit(Signup);
        age->setObjectName(QString::fromUtf8("age"));

        verticalLayout->addWidget(age);

        signup = new QPushButton(Signup);
        signup->setObjectName(QString::fromUtf8("signup"));

        verticalLayout->addWidget(signup);


        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Signup", "First Name", nullptr));
        label_2->setText(QCoreApplication::translate("Signup", "Last Name", nullptr));
        label_3->setText(QCoreApplication::translate("Signup", "Email", nullptr));
        label_4->setText(QCoreApplication::translate("Signup", "password", nullptr));
        label_5->setText(QCoreApplication::translate("Signup", "Age", nullptr));
        signup->setText(QCoreApplication::translate("Signup", "signup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
