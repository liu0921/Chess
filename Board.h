#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include"Stone.h"
class Board : public QWidget
{
    Q_OBJECT
public:
    explicit Board(QWidget *parent = 0);

    void paintEvent(QPaintEvent *);

    Stone  _s[32];
    int _r; /*棋子的半径*/
    QPoint center(int row, int col);
    QPoint center(int id);
    void drawStone(QPainter& painter ,int id);

signals:

public slots:
};

#endif // BOARD_H
