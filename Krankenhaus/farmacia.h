#ifndef FARMACIA_H
#define FARMACIA_H

#include <QWidget>

namespace Ui {
class Farmacia;
}

class Farmacia : public QWidget
{
    Q_OBJECT

public:
    explicit Farmacia(QWidget *parent = 0);
    ~Farmacia();

private slots:
    void on_regresar_clicked();

private:
    Ui::Farmacia *ui;
};

#endif // FARMACIA_H
