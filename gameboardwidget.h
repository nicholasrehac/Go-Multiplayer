#ifndef GAMEBOARDWIDGET_H
#define GAMEBOARDWIDGET_H

#include <QWidget>
#include <QFrame>
#include <QPaintEvent>
#include <QPainter>
#include <QImage>
#include <QGraphicsWidget>

class GameBoardWidget : public QFrame
{
    Q_OBJECT

    QImage placeholderImage;

public:
    explicit GameBoardWidget(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent * e);

signals:
};

#endif // GAMEBOARDWIDGET_H
