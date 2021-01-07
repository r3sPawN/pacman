#include "pacmanwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pacmanWindow w;
    w.show();
    return a.exec();
}
