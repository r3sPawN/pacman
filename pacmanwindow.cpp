#include "pacmanwindow.h"
#include "ui_pacmanwindow.h"
#include "pacman.h"

pacmanWindow::pacmanWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::pacmanWindow)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(640, 480));
}

pacmanWindow::~pacmanWindow()
{
    delete ui;
}


void pacmanWindow::on_pushButtonPlay_clicked()
{
    /*pacman_scene = new QGraphicsScene();
    pacman_scene->setSceneRect(0, 0, 600, 600);
    QPixmap background(":/new/level/img/PacmanLevel-1.png");
    pacman_scene->setBackgroundBrush(background.scaled(600, 600 , Qt::IgnoreAspectRatio,Qt::SmoothTransformation));

    pacman *icon = new pacman;
    icon->setFlag(QGraphicsItem::ItemIsFocusable);
    icon->setFocus();
    pacman_scene->addItem(icon);

    view = new QGraphicsView(pacman_scene);
    view->show();
    hide(); // hide mainwindow
    */
}
