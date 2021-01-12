#include "pacman_dots.h"

Pacman_dots::Pacman_dots()
{

}

QRectF Pacman_dots::boundingRect() const
{
    return QRect(40, 40, 20, 20);
}

void Pacman_dots::paint(QPainter *painter, const QStyleOptionGraphicsItem *options, QWidget *widget)
{
    dots_img = QPixmap(QRect(0,0,3,3).size());
    dots_img.fill(Qt::transparent);
    painter->begin(&dots_img);
    painter->setRenderHint(QPainter::Antialiasing);
    painter->setPen(Qt::NoPen);
    painter->setBrush(Qt::white);
    painter->drawEllipse(0,0,3,3);
}

void Pacman_dots::generateDots()
{
    QPoint current_coordinates;

    for(int map_w = 0; map_w < 500 - 1; map_w++){
        for(int map_h =0; map_h < 500 - 1; map_h++){
            current_coordinates.setX(map_w);
            current_coordinates.setY(map_h);

            if(map_w % 10 == 0 && map_h % 10 == 0) {
                if(current_coordinates.x() > 0)
                    dot_coordinates.push_front(current_coordinates);
              //  qDebug() << current_coordinates;
            }
        }
    }
}

QVector<QPoint> Pacman_dots::getdotCoordinates()
{
    return dot_coordinates;
}
