/* 
 * File:   User.h
 * Author: Andrew Sorensen
 */

#ifndef USER_H
#define	USER_H

#include "ircrfc1459.h"

#include <string>
using namespace std;

class User {
public:
    User();
    User(const User& orig);
    virtual ~User();
    User setName(string name);
    string getName();
    User setHostname(string hostname);
    string getHostname();
    User setIdent(string ident);
    string getIdent();
private:
    string name;
    string nickname;
    string hostname;
    string ident;
};

#endif	/* USER_H */
