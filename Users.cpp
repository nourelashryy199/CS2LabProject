#include <Users.h>

Doctor ourDoctors[100];
Nurse ourNurses[100];
Patient ourPatients[100];

void initializeUsersData() {

    ourDoctors[0].name = "Nour";
    ourDoctors[0].specialization = "Cardiology";
    ourDoctors[0].id = "01001";
    ourDoctors[0].password = "nour";
    ourDoctors[0].assistant = "Mostafa";


    ourNurses[0].name = "Mostafa";
    ourNurses[0].id = "02001";
    ourNurses[0].password = "mostafa";
    ourNurses[0].assistantTo = "Nour";


    ourPatients[0].name = "John Doe";
    ourPatients[0].age = 35;
    ourPatients[0].id = "03001";
    ourPatients[0].password = "johndoe";
    ourPatients[0].bloodtype = "AB+";
    ourPatients[0].weight = 75.5;
    ourPatients[0].diet = "Balanced diet";
}
