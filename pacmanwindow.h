#ifndef PACMANWINDOW_H
#define PACMANWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class pacmanWindow; }
QT_END_NAMESPACE

class pacmanWindow : public QMainWindow
{
    Q_OBJECT

public:
    pacmanWindow(QWidget *parent = nullptr);
    ~pacmanWindow();

private:
    Ui::pacmanWindow *ui;
};
#endif // PACMANWINDOW_H
