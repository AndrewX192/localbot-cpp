/* 
 * File:   User.cpp
 * Author: Andrew Sorensen
 * 
 */

#include "User.h"

User::User() {
}

User::User(const User& orig) {
}

User::~User() {
}

User::setName(string name) {
    this->name = name;
}

User::getName() {
    return this->name;
}

User::setHostname(string nick) {
    this->hostname = nick;
}

User::getHostname() {
    return this->hostname;
}

User::setIdent(string ident) {
    this->ident = ident;
}