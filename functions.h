#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

using namespace std;

const int MAX_MODULES = 10;
const int MAX_GROUPS = 5;
const int MAX_SLOTS_PER_GROUP = 5;
const int MAX_TP = 20;

struct TimeSlot {
    int day;
    int startTime;
    int duration;
};

struct module {
    string name;
    int numLectGroups;
    int numLecPerWeek;
    int numPracs;
    int numTuts;
    bool lecCompulsory;
    bool tutCompulsory;

    TimeSlot lectures[MAX_GROUPS][MAX_SLOTS_PER_GROUP];  // each struct = a group and will have to have arrays for each group in here
    int numLectSlots[MAX_GROUPS]; 

    TimeSlot pracs[MAX_TP];
    int numPracSlots;

    TimeSlot tuts[MAX_TP];
    int numTutSlots;

};

void timetableCreator(string &timetable, module allModules, int numModules);

#endif