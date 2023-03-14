//
// Created by AmazedAlloy on 14/03/2023.
//

#include "Bug.h"

Bug::Bug(){
    this->id = getNewId();
}

int Bug::getNewId() {
    return Bug::id++;
}

bool Bug::isWayBlocked() {

}