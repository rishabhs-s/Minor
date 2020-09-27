#ifndef SYMPTOM_H
#define SYMPTOM_H

#include <QDialog>

namespace Ui {
class Symptom;
}

class Symptom : public QDialog
{
    Q_OBJECT

public:
    explicit Symptom(QWidget *parent = nullptr);
    ~Symptom();

private slots:
    void on_symptomcheck_clicked();

private:
    Ui::Symptom *ui;
};

#endif // SYMPTOM_H
