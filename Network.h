/* 
 * File:   Network.h
 * Author: Andrew Sorensen
 *
 */

#ifndef NETWORK_H
#define	NETWORK_H

#include <vector>

using namespace std;

/*
 * Constants for maximum length
 */
#define NICK_MAX_LENGTH 31
#define NAME_MAX_LENGTH 
#define IDENT_MAX_LENGTH 11

class Network {
public:
    Network() {
        name  = new char[NAME_MAX_LENGTH];
        nick  = new char[NICK_MAX_LENGTH];
        ident = new char[IDENT_MAX_LENGTH];
    }
    Network(const Network& orig);
    virtual ~Network();
    Network setName(char*); 
    Network setNick(char*);
    Network setIdent(char*);
    
    // channel management
    bool hasChannel(Channel* ptr);
    Network addChannel(Channel* ptr);
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

