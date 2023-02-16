#ifndef SEMINARHSE_OBSERVER_H
#define SEMINARHSE_OBSERVER_H
#include "Event.h"
#include <cinttypes>

class Observer {
public:
    virtual ~Observer() {}
    virtual void onNotify(Event eventType, int64_t data) = 0;
};


#endif //SEMINARHSE_OBSERVER_H
