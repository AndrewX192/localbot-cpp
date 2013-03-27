/*
 * File:   Connection.cpp
 * Author: Andrew Sorensen
 */

#include "Connection.h"
#include <sys/socket.h>
#include <stdio.h>

Connection::Connection() {
}

Connection::Connection(const Connection& orig) {
}

Connection::~Connection() {
}

Connection Connection::create() {
    int fileDescriptor = socket(AF_INET, SOCK_STREAM, 0);

    return *this;

}

int Connection::connect() {
    int connection;
    
    connection = socket(AF_INET, SOCK_STREAM, 0);

    return 0;
}