#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <iostream>
#include <QDebug>
using namespace  std;

class MyClass : public QObject {
    Q_OBJECT

public:
    MyClass(QObject* parent = nullptr) : QObject(parent) {
        //vanha syntaksi
        //connect(this, SIGNAL(mySignal()), this, SLOT(mySlot()));
        //uusi versio
        connect(this, &MyClass::mySignal, this, &MyClass::mySlot);
    }

    void raiseMySignal()
    {
        emit mySignal();
    }

signals:
    void mySignal();

public slots:
    void mySlot();
};

#endif // MYCLASS_H

