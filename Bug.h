//
// Created by AmazedAlloy on 14/03/2023.
//

#ifndef UNTITLED_BUG_H
#define UNTITLED_BUG_H

#include <memory>

using namespace std;

class Bug {
private:
    static inline int id = 0;
    enum direction {North, South, East, West};
    int size;
    bool alive;
    static int getNewId();
public:
    Bug();
    virtual void move() = 0;
    bool isWayBlocked();

};


#endif //UNTITLED_BUG_H
