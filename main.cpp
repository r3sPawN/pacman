#include "pacmanwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pacmanWindow w;
    w.show();
    return a.exec();
    a.setWindowIcon(QIcon(":/new/icon/img/icon.ico"));
}
