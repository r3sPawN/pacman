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
    switch (direction) {
        case 0: //left direction
            if(animation_state < 2){
                QBrush brush;
                brush.setTexture(directionLeft_1.scaled(20, 20, Qt::IgnoreAspectRatio,Qt::SmoothTransformation ));
                painter->fillRect(this->boundingRect(), brush);
                painter->drawRect(this->boundingRect());
            }
            else if(animation_state < 4){
                QBrush brush;
                brush.setTexture(directionLeft_2.scaled(20, 20 , Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
                painter->fillRect(this->boundingRect(), brush);
                painter->drawRect(this->boundingRect());
            }
            else if(animation_state < 6) {
                QBrush brush;
                brush.setTexture(pacman_roundImg.scaled(20, 20 , Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
                painter->fillRect(this->boundingRect(), brush);
                painter->drawRect(this->boundingRect());
            }
        break;
        case 1: //right direction
            if(animation_state < 2){
                QBrush brush;
                brush.setTexture(directionRight_1.scaled(20, 20, Qt::IgnoreAspectRatio,Qt::SmoothTransformation ));
                painter->fillRect(this->boundingRect(), brush);
                painter->drawRect(this->boundingRect());
            }
            else if(animation_state < 4){
                QBrush brush;
                brush.setTexture(directionRight_2.scaled(20, 20 , Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
                painter->fillRect(this->boundingRect(), brush);
                painter->drawRect(this->boundingRect());
            }
            else if(animation_state < 6) {
                QBrush brush;
                brush.setTexture(pacman_roundImg.scaled(20, 20 , Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
                painter->fillRect(this->boundingRect(), brush);
                painter->drawRect(this->boundingRect());
            }
            break;
        case 2: //up direction
            if(animation_state < 2){
                QBrush brush;
                brush.setTexture(directionUp_1.scaled(20, 20, Qt::IgnoreAspectRatio,Qt::SmoothTransformation ));
                painter->fillRect(this->boundingRect(), brush);
                painter->drawRect(this->boundingRect());
            }
            else if(animation_state < 4){
                QBrush brush;
                brush.setTexture(directionUP_2.scaled(20, 20 , Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
                painter->fillRect(this->boundingRect(), brush);
                painter->drawRect(this->boundingRect());
            }
            else if(animation_state < 6) {
                QBrush brush;
                brush.setTexture(pacman_roundImg.scaled(20, 20 , Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
                painter->fillRect(this->boundingRect(), brush);
                painter->drawRect(this->boundingRect());
            }
            break;
            case 3: //up direction
            if(animation_state < 2){
                QBrush brush;
                brush.setTexture(directionDown_1.scaled(20, 20, Qt::IgnoreAspectRatio,Qt::SmoothTransformation ));
                painter->fillRect(this->boundingRect(), brush);
                painter->drawRect(this->boundingRect());
            }
            else if(animation_state < 4){
                QBrush brush;
                brush.setTexture(directionDown_2.scaled(20, 20 , Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
                painter->fillRect(this->boundingRect(), brush);
                painter->drawRect(this->boundingRect());
            }
            else if(animation_state < 6) {
                QBrush brush;
                brush.setTexture(pacman_roundImg.scaled(20, 20 , Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
                painter->fillRect(this->boundingRect(), brush);
                painter->drawRect(this->boundingRect());
            }
            break;

     }
}

void pacman::keyPressEvent(QKeyEvent *event)
{

    if( event->key() == Qt::Key_Left )
     {
         setDirection(0);
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

    switch (getDirection()) {
        case 0:
             setPos(x() - 5, y());
        break;
        case 1:
             setPos(x() + 5 , y());
        break;
        case 2:
             setPos(x(), y() - 5);
        break;
        case 3:
             setPos(x(), y() + 5);
        break;
        }

    if(animation_state>3 ){
        animation_state=0;
    }else{
        animation_state++;
    }

}
