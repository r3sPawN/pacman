#include "pacman_board.h"
#include "ui_pacman_board.h"
#include "pacman.h"

pacman_board::pacman_board(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pacman_board)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(500, 500));

    pacman_scene = new QGraphicsScene(this);
    pacman_scene->setSceneRect(0, 0, 600, 600);
    //QPixmap background(":/new/level/img/PacmanLevel-1.png");
    //pacman_scene->setBackgroundBrush(background.scaled(500, 500 , Qt::IgnoreAspectRatio,Qt::SmoothTransformation));

    pacman *icon = new pacman;
    icon->setFlag(QGraphicsItem::ItemIsFocusable);
    icon->setFocus();
    pacman_scene->addItem(icon);

    ui->graphicsView->setScene(pacman_scene);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), pacman_scene, SLOT(advance()));
    timer->start(100);

}

pacman_board::~pacman_board()
{
    delete ui;
}
