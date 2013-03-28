/* 
 * File:   Network.cpp
 * Author: Andrew Sorensen
 */

#include "Network.h"

Network::Network(char* name) {

}

Network::Network(const Network& orig) {
}

Network::~Network() {
}

/**
 * Sets the name of the network.
 * 
 * @param name the name of the network
 * 
 * @return 
 */
Network::setName(char* name) {
    this->name = name;
}

/**
 * Sets the nickname to use on the network.
 * 
 * @param nick the nick to use on the network.
 * 
 * @return 
 */
Network::setNick(char* nick) {
    this->nick = nick;
}

/**
 * Sets the ident to use on the network.
 * 
 * @param ident the ident to use on the network
 * 
 * @return 
 */
Network::setIdent(char* ident) {
    this->ident = ident;
}

/**
 * Returns whether or not the channel is on this network
 * 
 * @param ptr the channel to check
 * 
 * @return 
 */
Network::hasChannel(Channel* ptr) {
    return false;
}

/**
 * Adds a channel to the network.
 * 
 * @param ptr the channel to add
 * 
 * @return 
 */
Network::addChannel(Channel* ptr) {
    this->channels[this->channels.size()] = ptr;
}