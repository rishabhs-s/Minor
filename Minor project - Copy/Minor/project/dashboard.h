#ifndef DASHBOARD_H
#define DASHBOARD_H
#include "update.h"
#include "retrieve.h"

#include <QDialog>

namespace Ui {
class Dashboard;
}

class Dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void on_update_clicked();

    void on_view_clicked();

private:
    Ui::Dashboard *ui;
    Update *updaterec;
    Retrieve *retrieverec;
};

#endif // DASHBOARD_H
