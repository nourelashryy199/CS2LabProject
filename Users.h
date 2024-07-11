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
    QString age;
    QString gender;
    QString id;
    QString password;
    QString bloodtype;
    QString weight;
    QString height;
    QString diet;
};

extern Doctor ourDoctors[100];
extern Nurse ourNurses[100];
extern Patient ourPatients[100];

extern int doctorsCount;
extern int nursesCount;
extern int patientsCount;

#endif // USERS_H
