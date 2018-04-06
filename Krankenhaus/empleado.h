#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <QWidget>

namespace Ui {
class Empleado;
}

class Empleado : public QWidget
{
    Q_OBJECT

public:
    explicit Empleado(QWidget *parent = 0);
    ~Empleado();

private slots:
    void on_regresar_4_clicked();

private:
    Ui::Empleado *ui;
};

#endif // EMPLEADO_H
