#include "myglwidget.h"

#include <QPainter>
#include <QPaintEvent>

MyGLWidget::MyGLWidget(QWidget* parent): QOpenGLWidget(parent)
{

}

void MyGLWidget::paintEvent(QPaintEvent* e)
{
    QPainter paint(this);

    auto size = this->size();
    auto offset = 4;

    paint.setBrush(Qt::white);

    paint.drawEllipse(0, 0, size.width()-offset, size.height()-offset);

}
