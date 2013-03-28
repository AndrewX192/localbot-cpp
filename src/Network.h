/* 
 * File:   Network.h
 * Author: Andrew Sorensen
 *
 */

#ifndef NETWORK_H
#define	NETWORK_H

#include <vector>

using namespace std;

#include "spec/ircrfc1459.h"
#include "Channel.h"

class Network {
public:
    Network() {
        name  = new char[NAME_MAX_LENGTH];
        nick  = new char[NICK_MAX_LENGTH];
        ident = new char[IDENT_MAX_LENGTH];
    }
    Network(string name);
    Network(const Network& orig);
    virtual ~Network();
    void setName(char*); 
    void setNick(char*);
    void setIdent(char*);
    
    // channel management
    bool hasChannel(Channel ptr);
    void addChannel(Channel);
    Network getChannel(char *name);
    vector<Channel> getChannels();
    Network removeChannel(char *name);
    
private:
    vector<Channel> channels;
    char* name;
    char* nick;
    char* ident;
};

#endif	/* NETWORK_H */

