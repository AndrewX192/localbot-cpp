/*
 * File:   LocalBot.h
 * Author: Andrew Sorensen
 */

#ifndef LOCALBOT_H
#define	LOCALBOT_H

#include "Connection.h"
#include <vector>
#include <string>

using namespace std;

class LocalBot {
public:
    LocalBot();
    LocalBot(const LocalBot& orig);
    virtual ~LocalBot();

    void connectTo();

    static void handleSignal(int signal);

protected:
    LocalBot init();

    LocalBot _preInit();
    LocalBot _postInit();
private:
    int startupTime;
    vector<Connection> ircConnection;



    void connect(const string& server, int port);
};

#endif	/* LOCALBOT_H */

