#ifndef PACMAN_H
#define PACMAN_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QTimer>
#include <QString>
#include <QKeyEvent>


class pacman : public QGraphicsItem
{
public:
    pacman();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *options, QWidget *widget);
    void keyPressEvent( QKeyEvent * event );
private:
    qreal speed;
};

#endif // PACMAN_H
