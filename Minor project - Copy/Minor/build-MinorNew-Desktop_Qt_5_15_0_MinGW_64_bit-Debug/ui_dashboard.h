/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QTextBrowser *textBrowser;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *update;
    QPushButton *view;
    QPushButton *symptom;
    QPushButton *assistant;
    QLabel *image;

    void setupUi(QDialog *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName(QString::fromUtf8("Dashboard"));
        Dashboard->resize(1250, 750);
        Dashboard->setBaseSize(QSize(0, 0));
        textBrowser = new QTextBrowser(Dashboard);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(100, 70, 541, 611));
        verticalLayoutWidget = new QWidget(Dashboard);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(820, 70, 241, 621));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        update = new QPushButton(verticalLayoutWidget);
        update->setObjectName(QString::fromUtf8("update"));

        verticalLayout->addWidget(update);

        view = new QPushButton(verticalLayoutWidget);
        view->setObjectName(QString::fromUtf8("view"));

        verticalLayout->addWidget(view);

        symptom = new QPushButton(verticalLayoutWidget);
        symptom->setObjectName(QString::fromUtf8("symptom"));

        verticalLayout->addWidget(symptom);

        assistant = new QPushButton(verticalLayoutWidget);
        assistant->setObjectName(QString::fromUtf8("assistant"));

        verticalLayout->addWidget(assistant);

        image = new QLabel(Dashboard);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(200, 120, 341, 231));

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QDialog *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\" bgcolor=\"#fdfcdc\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:10px; margin-right:10px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:600; color:#9e2a2b; vertical-align:sub;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:600; color:#9e2a2b; vertical-align:sub;\"><br /"
                        "></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:600; color:#9e2a2b; vertical-align:sub;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:600; color:#9e2a2b; vertical-align:sub;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:600; color:#9e2a2b; vertical-align:sub;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:600; color:#9e2a2b; vertical-align:sub;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt"
                        "-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:600; color:#9e2a2b; vertical-align:sub;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:600; color:#9e2a2b; vertical-align:sub;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#9e2a2b; vertical-align:sub;\">Hello..!</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; color:#9e2a2b; vertical-align:sub;\">Health Manager is all set to assist you. Lets get started by viewing your medical  records a"
                        "nd  give them an update if required.Also help yourselves to find a professional help from our medical team.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; font-style:italic; color:#9e2a2b; vertical-align:sub;\">&quot;STAY HEALTHY&quot;</span></p></body></html>", nullptr));
        update->setText(QCoreApplication::translate("Dashboard", "Update Records", nullptr));
        view->setText(QCoreApplication::translate("Dashboard", "View Records", nullptr));
        symptom->setText(QCoreApplication::translate("Dashboard", "Symptom Check", nullptr));
        assistant->setText(QCoreApplication::translate("Dashboard", "Assistant", nullptr));
        image->setText(QCoreApplication::translate("Dashboard", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
