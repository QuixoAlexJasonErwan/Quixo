#include "piece.h"

Piece::Piece():QGraphicsPixmapItem()
{
    couleur = PIECE_NEUTRE;
    x = 0;
    y = 0;

}

Piece::Piece(COULEUR_PIECE _couleur, int16_t _x, int16_t _y):QGraphicsPixmapItem()
{
    this->couleur = _couleur;
    this->x = _x;
    this->y = _y;
}

void Piece::mousePressEvent(QGraphicsSceneMouseEvent * event)
{

}

void Piece::mouseMoveEvent(QGraphicsSceneMouseEvent * event)
{

}
