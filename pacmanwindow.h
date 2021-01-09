#ifndef PACMANWINDOW_H
#define PACMANWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QDebug>
#include <QPixmap>
#include <pacman_board.h>

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
    pacman_board *pac_b;
};
#endif // PACMANWINDOW_H
