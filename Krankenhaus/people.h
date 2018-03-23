#ifndef PEOPLE_H
#define PEOPLE_H

#include <QWidget>

namespace Ui {
class People;
}

class People : public QWidget
{
    Q_OBJECT

public:
    explicit People(QWidget *parent = 0);
    ~People();

private slots:
    void on_regresar_clicked();

private:
    Ui::People *ui;
};

#endif // PEOPLE_H
