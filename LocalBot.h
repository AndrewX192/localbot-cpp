/*
 * File:   LocalBot.h
 * Author: Andrew Sorensen
 */

#include "Connection.h"
#include <vector>
#include <string>

using namespace std;

#ifndef LOCALBOT_H
#define	LOCALBOT_H

struct IRCConnection {
    int test;
    Connection connection;
};

class LocalBot {
public:
    LocalBot();
    LocalBot(const LocalBot& orig);
    virtual ~LocalBot();

    void connectTo();

    static void handleSignal(int signal);

protected:
    LocalBot init();
private:
    int _startupTime;

//    vector<IRCConnection> _ircConnections;

    LocalBot _preInit();
    LocalBot _postInit();

    void _connect(const string& server, int port);


};

#endif	/* LOCALBOT_H */

