//
// Created by hukq1 on 2018/12/19.
//

#ifndef THUCAL_VEVENTREPEAT_H
#define THUCAL_VEVENTREPEAT_H

#include <string>
#include <sstream>
#include "Caltime.h"
#include "Vevent.h"

struct RruleNode {
    std::string FREQ;
    int COUNT;
};

struct time {
    std::string TZID;
    Caltime STIME;
};

struct VeventRepeat : public Vevent {
    RruleNode RRULE;

    struct time DTSTART, DTEND;

    /**
     * 通过字符串初始化
     * @param s 字符串
     */
    VeventRepeat(char *s);

    /**
     * 默认初始化函数
     */
    VeventRepeat();
};


#endif //THUCAL_VEVENTREPEAT_H
