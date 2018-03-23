#include "krankenhaus.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Krankenhaus w;
    w.show();

    return a.exec();
}
