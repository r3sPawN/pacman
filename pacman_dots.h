#ifndef PACMAN_DOTS_H
#define PACMAN_DOTS_H
#include <QGraphicsItem>
#include <QVector>
#include <QDebug>
#include <QPainter>

class Pacman_dots :public QGraphicsItem
{
public:
    Pacman_dots();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *options, QWidget *widget);
    void generateDots();
    QVector<QPoint> getdotCoordinates();
private:
    QVector<QPoint>dot_coordinates;
    QPainter *painter;
    QPixmap dots_img;
};

#endif // PACMAN_DOTS_H
