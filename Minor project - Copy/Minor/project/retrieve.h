#ifndef RETRIEVE_H
#define RETRIEVE_H

#include <QDialog>

namespace Ui {
class Retrieve;
}

class Retrieve : public QDialog
{
    Q_OBJECT

public:
    explicit Retrieve(QWidget *parent = nullptr);
    ~Retrieve();

private:
    Ui::Retrieve *ui;
};

#endif // RETRIEVE_H
