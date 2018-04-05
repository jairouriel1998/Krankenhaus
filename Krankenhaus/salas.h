#ifndef SALAS_H
#define SALAS_H

#include <QWidget>

namespace Ui {
class salas;
}

class salas : public QWidget
{
    Q_OBJECT

public:
    explicit salas(QWidget *parent = 0);
    ~salas();

private:
    Ui::salas *ui;
};

#endif // SALAS_H
