#ifndef SEMINARHSE_SUBJECT_H
#define SEMINARHSE_SUBJECT_H
#include "Observer.h"
#include "Event.h"
#include <vector>
#include <cinttypes>

class Subject {
private:
    std::vector<Observer*> _observers;
    void notify(Event eventType, int64_t data);
public:
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
};


#endif //SEMINARHSE_SUBJECT_H
