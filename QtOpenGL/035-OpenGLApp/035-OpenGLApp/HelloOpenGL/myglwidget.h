#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QWidget>
#include <QOpenGLWidget>

// forward declaration
class QPaintEvent;

class MyGLWidget : public QOpenGLWidget
{
    Q_OBJECT
public:
    MyGLWidget(QWidget* parent = nullptr);

    void paintEvent(QPaintEvent* e);
};

#endif // MYGLWIDGET_H
