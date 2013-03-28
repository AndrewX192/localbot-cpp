/* 
 * File:   User.h
 * Author: Andrew Sorensen
 */

#ifndef USER_H
#define	USER_H

#include "spec/ircrfc1459.h"

#include <string>
using namespace std;

class User {
public:
    User();
    User(const User& orig);
    virtual ~User();
    void setName(string name);
    string getName();
    void setHostname(string hostname);
    string getHostname();
    void setIdent(string ident);
    string getIdent();
private:
    string name;
    string nickname;
    string hostname;
    string ident;
};

#endif	/* USER_H */
