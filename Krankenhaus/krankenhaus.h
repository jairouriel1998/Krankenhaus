#ifndef KRANKENHAUS_H
#define KRANKENHAUS_H

#include <QMainWindow>

namespace Ui {
class Krankenhaus;
}

class Krankenhaus : public QMainWindow
{
    Q_OBJECT

public:
    explicit Krankenhaus(QWidget *parent = 0);
    ~Krankenhaus();

private:
    Ui::Krankenhaus *ui;
};

#endif // KRANKENHAUS_H
