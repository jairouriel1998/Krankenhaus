#ifndef PEOPLE_H
#define PEOPLE_H

#include <QWidget>
#include "pacientes.h"
#include "controller.h"

namespace Ui {
class People;
}

class People : public QWidget
{
    Q_OBJECT

public:
    explicit People(QWidget *parent = 0);
    ~People();

    pacientes currentPerson;
    controller *control;
    QList<pacientes> list;
    int totalRecord;
    int currentIndex;
    void populateRecord();
    void populateUI();

signals:
private slots:
    void on_siguiente_clicked();
    void on_anterior_clicked();
    void on_regresar_clicked();
    void on_editar_clicked();
    void on_eliminar_clicked();
    void on_nuevo_clicked();

private:
    Ui::People *ui;
};

#endif // PEOPLE_H
