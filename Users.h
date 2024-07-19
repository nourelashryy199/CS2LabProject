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
    QString workingDays;
    QString workingHours;
    QString hoursFrom;
    QString hoursTo;
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
    QString dob;
    QString phone;
    QString emergencyContact;
    QString medicalRecord;
    QString condition;
    QString surgeries;
    QString allergies;
    QString familyHistory;
    QString diagnosis;
    QString prognosis;
    QString medication;
    QString frequency;
    QString treatmentPlan;
};

struct Admin{
    QString name;
    QString id;
    QString password;
};

extern Doctor ourDoctors[100];
extern Nurse ourNurses[100];
extern Patient ourPatients[100];
extern Admin ourAdmins[100];


extern int doctorsCount;
extern int nursesCount;
extern int patientsCount;
extern int adminsCount;


void initializeUsersData();  // Add this line

#endif // USERS_H
