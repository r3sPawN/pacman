#include "pacman.h"
#include "QDebug"

pacman::pacman()
{

    int startX = 288;
    int startY = 420;
    setPos(mapToParent(startX, startY));
    setFlag(ItemIsFocusable);
    setFocus();
}

QRectF pacman::boundingRect() const // bound the size of the pacman icon
{
    return QRect(0,0,20,20);
}

void pacman::paint(QPainter *painter, const QStyleOptionGraphicsItem *options, QWidget *widget)
{
    QRectF test = boundingRect();
    QBrush Brush;
    Brush.setTextureImage(QImage(":/new/pachead/img/pacround.png").scaled(20, 20 , Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    painter->fillRect(test, Brush);
    painter->drawRect(test);
}

void pacman::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "pressed";
    if( event->key() == Qt::Key_Left )
     {
          setPos(x() - 10, y());
     }

    if( event->key() == Qt::Key_Right )
     {
          setPos(x() +10, y());
     }

    if( event->key() == Qt::Key_Up )
     {
          setPos(x() , y() - 10);
     }

    if( event->key() == Qt::Key_Down )
     {
          setPos(x() , y() + 10);
     }
}
