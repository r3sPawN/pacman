#ifndef PACMAN_H
#define PACMAN_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QTimer>
#include <QString>
#include <QKeyEvent>
#include <QPixmap>
#include <QImage>


class pacman : public QGraphicsItem
{
public:
    pacman();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *options, QWidget *widget);
    void keyPressEvent( QKeyEvent * event );
    void setDirection(int dir);
    int getDirection();
    void advance(int phase);

private:
    QPixmap directionUp_1, directionUP_2, pacman_roundImg;
    QPixmap directionDown_1, directionDown_2;
    QPixmap directionLeft_1, directionLeft_2;
    QPixmap directionRight_1, directionRight_2;
    qreal speed;
    int animation_state;
    int direction;
};

#endif // PACMAN_H
