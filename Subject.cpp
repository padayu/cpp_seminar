#include "Subject.h"

void Subject::addObserver(Observer* observer) {
    _observers.push_back(observer);
}

void Subject::removeObserver(Observer* observer) {
    auto inclusion= std::find(_observers.begin(), _observers.end(), observer);
    if (inclusion != _observers.end())
        _observers.erase(inclusion);
}

void Subject::notify(Event eventType, int64_t data) {
    for (auto observer: _observers) {
        observer->onNotify(eventType, data);
    }
}