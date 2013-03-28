/*
 * File:   LocalBot.cpp
 * Author: Andrew Sorensen
 */

#include "LocalBot.h"

#include <stdio.h>
#include <time.h>
#include <signal.h>

#include <stdlib.h>
#include <string>
#include <vector>
#include <cstddef>
#include <iostream>

using namespace std;

vector<IRCConnection> _ircConnections;

LocalBot::LocalBot() {
    this->_preInit().init()._postInit();
}

LocalBot::LocalBot(const LocalBot& orig) {
}

LocalBot::~LocalBot() {
}

LocalBot LocalBot::_preInit() {
    return *this;
}

LocalBot LocalBot::init() {
    this->_startupTime = time(NULL);

    struct sigaction sighandlers [1];

    sighandlers[0].sa_handler = LocalBot::handleSignal;
    sigemptyset(&sighandlers[0].sa_mask);
    sighandlers[0].sa_flags = 0;

    int handledSignals [5] = {
        SIGINT,
        SIGABRT,
        SIGTERM,
        SIGILL,
        SIGSEGV,
    };

    for (int i = 0; i < sizeof (handledSignals); i++) {
        sigaction(handledSignals[i], &sighandlers[0], 0);
    }

    this->connectTo();

    return *this;
}

LocalBot LocalBot::_postInit() {
    return *this;
}

void LocalBot::connectTo() {
    this->_connect("172.16.1.163", 6667);
}

void LocalBot::_connect(const string& server, int port) {
    Connection c;
    IRCConnection ic;

    cout << "test: [" << ((int) _ircConnections.size()) << "]" << endl;

    //    vector<IRCConnection> connections;
    ic.connection = c;


    //    connections.push_back(ic);

    _ircConnections.push_back(ic);

    cout << "test: [" << ((int) _ircConnections.size()) << "]" << endl;


    //    int size = (int) this->_ircConnections.size();
}

void LocalBot::handleSignal(int signo) {
    switch (signo) {
        case SIGINT:
            exit(0);
            break;
        case SIGABRT: case SIGTERM:
            /* Do something */
        case SIGILL:
            /* Do something */
            break;
        case SIGSEGV:
            /* Do something */
            break;
        case SIGURG:
            /* Do something */
            break;
        case SIGUSR1: case SIGUSR2:
            /* Do something */
            break;
        default:
            break;
    }
}
