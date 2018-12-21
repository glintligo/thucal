//
// Created by hukq1 on 2018/12/19.
//

#ifndef THUCAL_VEVENTREPEAT_H
#define THUCAL_VEVENTREPEAT_H

#include <string>
#include <sstream>
#include "Caltime.h"
#include "Vevent.h"

class VeventRepeat : public Vevent {
public:
    struct RruleNode {
        std::string FREQ;
        int COUNT;
    } RRULE;
    struct time {
        std::string TZID;
        Caltime STIME;
    } DTSTART, DTEND;


public:
    VeventRepeat(char *s);

    VeventRepeat();
};


#endif //THUCAL_VEVENTREPEAT_H
