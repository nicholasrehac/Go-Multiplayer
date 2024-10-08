#include "gameboardwidget.h"

GameBoardWidget::GameBoardWidget(QWidget *parent)
    : QFrame{parent} {
    placeholderImage = QImage("goBoard.png");
}

void GameBoardWidget::paintEvent(QPaintEvent * e) {
    QPainter p(this);
    p.drawImage(
        QRect(0,0,this->width(),this->height()),
        placeholderImage,
        QRect(0,0,placeholderImage.width(),placeholderImage.height())
        );
}
