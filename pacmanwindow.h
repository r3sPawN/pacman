#ifndef PACMANWINDOW_H
#define PACMANWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class pacmanWindow; }
QT_END_NAMESPACE

class pacmanWindow : public QMainWindow
{
    Q_OBJECT

public:
    pacmanWindow(QWidget *parent = nullptr);
    ~pacmanWindow();

private slots:
    void on_pushButtonPlay_clicked();

private:
    Ui::pacmanWindow *ui;
    QGraphicsScene *pacman_scene;
    QGraphicsView *view;
    QTimer *timer;
};
#endif // PACMANWINDOW_H
