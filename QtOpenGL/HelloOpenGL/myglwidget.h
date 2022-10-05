#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QWidget>
#include <QDebug>
#include <QOpenGLWidget>
#include <QTimer>


// forward declaration
class QPaintEvent;

class MyGLWidget : public QOpenGLWidget
{
    Q_OBJECT
public:
    MyGLWidget(QWidget* parent = nullptr);

    void paintEvent(QPaintEvent* e);
private slots:
    void updatePolygon();
    void updatePoint();

private:
    QPoint P;
    QImage img;
};

#endif // MYGLWIDGET_H
