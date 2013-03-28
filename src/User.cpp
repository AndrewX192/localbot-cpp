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

void User::setName(string name) {
    this->name = name;
}

string User::getName() {
    return this->name;
}

void User::setHostname(string nick) {
    this->hostname = nick;
}

string User::getHostname() {
    return this->hostname;
}

void User::setIdent(string ident) {
    this->ident = ident;
}