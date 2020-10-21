//
// Created by eric on 21/10/2020.
//

#ifndef SERIALEXAMPLE_PRESENTER_H
#define SERIALEXAMPLE_PRESENTER_H


#include <QtSerialPort/QSerialPort>

class Presenter {

    QSerialPort *serial;
public:
    Presenter();

    void init();
    void sendData(int value);
};


#endif //SERIALEXAMPLE_PRESENTER_H
