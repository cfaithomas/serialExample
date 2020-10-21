//
// Created by eric on 21/10/2020.
//

#include "Presenter.h"


Presenter::Presenter() {
    serial=new QSerialPort();
}

void Presenter::init() {
serial->setPortName("/dev/ttyACM0"); //definition du port sur lequel est branché l'arduino
serial->setBaudRate(QSerialPort::Baud9600); //définition de la vitesse de transmission
serial->setDataBits(QSerialPort::Data8); //codage sur 8bits
serial->setParity(QSerialPort::NoParity); //pas de parité
serial->setStopBits(QSerialPort::OneStop); //un bit de stop
serial->setFlowControl(QSerialPort::NoFlowControl); //pas de controle de flux
serial->open(QIODevice::ReadWrite);
if(serial->isOpen())
{
    qDebug("Le port USB est ouvert");
} else
    qDebug("Echec de l'ouverture du port");
}

void Presenter::sendData(int value) {
char *towrite;
*towrite=value;
serial->write(towrite);
}
