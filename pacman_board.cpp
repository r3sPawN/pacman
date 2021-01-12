#include "pacman_board.h"
#include "ui_pacman_board.h"
#include "pacman.h"
#include "pacman_dots.h"

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
    Pacman_dots *dots = new Pacman_dots;
    dots->generateDots();
    QVectorIterator<QPoint> hasPoints(dots->getdotCoordinates());
    while(hasPoints.hasNext()){
       Pacman_dots *dot = new Pacman_dots;
       dot->setPos(hasPoints.next().x(), hasPoints.next().y());
       pacman_scene->addItem(dot);
    }

    icon->setFlag(QGraphicsItem::ItemIsFocusable);
    icon->setFocus();
    pacman_scene->addItem(icon);


    ui->graphicsView->setScene(pacman_scene);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), pacman_scene, SLOT(advance()));
    timer->start(200);

}

pacman_board::~pacman_board()
{
    delete ui;
}
