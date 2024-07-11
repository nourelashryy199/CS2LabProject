#ifndef USERS_H
#define USERS_H

#include <QString>

struct Nurse;

struct Doctor {
    QString specialization;
    QString name;
    QString id;
    QString password;
    QString assistant;
};

struct Nurse {
    QString assistantTo;
    QString name;
    QString id;
    QString password;
};

struct Patient {
    QString name;
    int age;
    QString id;
    QString password;
    QString bloodtype;
    double weight;
    QString diet;
};

extern Doctor ourDoctors[100];
extern Nurse ourNurses[100];
extern Patient ourPatients[100];

#endif // USERS_H
