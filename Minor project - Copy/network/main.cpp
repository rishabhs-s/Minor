#include <QApplication>

#include "chatdialog.h"  //dashboard

#include <QtCore/QSettings>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ChatDialog dialog; //dashboard on assitant click
    dialog.show(); //on assitant click
    return app.exec();
}
