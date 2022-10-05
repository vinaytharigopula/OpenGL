#include "myglwidget.h"

#include <QPainter>
#include <QPaintEvent>
#include <QTimer>

MyGLWidget::MyGLWidget(QWidget* parent): QOpenGLWidget(parent)
{


    img=QImage("F:/Qtprogramming/OpenGL/QtOpenGL/Tutorials/HelloOpenGL/images.jpeg");
    img=img.scaled(20,20,Qt::KeepAspectRatio);

}

void MyGLWidget::updatePolygon(){

}

void MyGLWidget::updatePoint(){

    P.setX(rand()%1400);
    P.setY(rand()%500);

    qDebug()<<" New Point"<<P;

    //update();

}
void MyGLWidget::paintEvent(QPaintEvent* e)
{
    QPainter paint(this);

//    auto size = this->size();
//    auto offset = 4;

    paint.setBrush(Qt::white);

    qDebug()<<" paint";

//    P.setX(rand()%1400);
//    P.setY(rand()%500);

    for(int i=1;i<100000;i++){
        updatePoint();

       paint.drawImage(P,img);
    }



    //paint.drawEllipse(0, 0, size.width()-offset, size.height()-offset);

}
