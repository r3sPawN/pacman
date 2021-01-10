#include "pacman.h"
#include "QDebug"

pacman::pacman()
{
    animation_state = 0;
    direction = 0;
    int startX = 250;
    int startY = 380;
    setPos(mapToParent(startX, startY));
    //load all images for pacman
    directionDown_1.load(":/new/pachead/img/pacdown1.png");
    directionDown_2.load(":/new/pachead/img/pacdown2.png");
    pacman_roundImg.load(":/new/pachead/img/pacround.png");

    directionUp_1.load(":/new/pachead/img/pacup1.png");
    directionUP_2.load(":/new/pachead/img/pacup2.png");

    directionLeft_1.load(":/new/pachead/img/pacleft1.png");
    directionLeft_2.load(":/new/pachead/img/pacleft2.png");


    directionRight_1.load(":/new/pachead/img/pacright1.png");
    directionRight_2.load(":/new/pachead/img/pacright2.png");

}

QRectF pacman::boundingRect() const // bound the size of the pacman icon
{
    return QRect(40,40,20,20);
}

void pacman::paint(QPainter *painter, const QStyleOptionGraphicsItem *options, QWidget *widget)
{
//    switch (direction) {
//        case 1: //left direction
//            if(animation_state < 1){

//            else if(animation_state < 2){
//                QBrush brush;
//                brush.setTexture(directionRight_1.scaled(20, 20 , Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
//                painter->fillRect(this->boundingRect(), brush);
//                painter->drawRect(this->boundingRect());
//            }
//            else if(animation_state < 3) {
//                QBrush brush;
//                brush.setTexture(pacman_roundImg.scaled(20, 20 , Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
//                painter->fillRect(this->boundingRect(), brush);
//                painter->drawRect(this->boundingRect());
//            }
//    }
    QBrush brush;
    brush.setTexture(directionLeft_1.scaled(20, 20 ));
    painter->fillRect(this->boundingRect(), brush);
    painter->drawRect(this->boundingRect());


}

void pacman::keyPressEvent(QKeyEvent *event)
{
    qDebug() <<  direction ;
    if( event->key() == Qt::Key_Left )
     {
         setDirection(0);
         setPos(x() - 10, y());
     }

    if( event->key() == Qt::Key_Right )
     {
         setDirection(1);
     }

    if( event->key() == Qt::Key_Up )
     {
           setDirection(2);
     }

    if( event->key() == Qt::Key_Down )
     {
           setDirection(3);
    }
}



void pacman::setDirection(int dir) //direction setter
{
    direction = dir;
}

int pacman::getDirection() //direction getter
{
    return direction;

}

void pacman::advance(int phase)
{

    setPos(x() - 10, y());
    if(animation_state>3 ){
        animation_state=0;
    }else{
        animation_state++;
    }

}
