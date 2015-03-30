#include "plateau.h"
#include <QGraphicsPixmapItem>
#include <QGraphicsView>


plateau::plateau() : QGraphicsScene()
{
    QGraphicsPixmapItem * mon_item;
    QPixmap * croix = new QPixmap(":/croix.png");
    for(int i; i < 5; i++)
    {
        for(int j; j < 5 ; j++)
        {
            mon_item = new QGraphicsPixmapItem();
            mon_item->setPixmap(* croix);
            mon_item->setPos(i*55, j*55);
            this->addItem(mon_item);
        }
    }
}
