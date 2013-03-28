/*
 * File:   Connection.cpp
 * Author: Andrew Sorensen
 */

#include "Connection.h"
#include <sys/socket.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <errno.h>

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

int Connection::connect(char* server, int port) {
    int connection;
    
    connection = socket(AF_INET, SOCK_STREAM, 0);
    
    if (connection < 0) {
        // Error opening socket
        return OUT_OF_FILE_DESCRIPTORS;
    }
    
    addrinfo* a = resolveDns(server);
    
    int result = connect(connection, a, a->ai_addrlen);
    
    if (result < 0) {
        return errno;
    }
    
    return connection;
}

/**
 * Performs a DNS forward lookup.
 * 
 * @param hostname the hostname to lookup.
 * 
 * @return 
 */
addrinfo* resolveDns(char* hostname) {
    addrinfo* result;
    getaddrinfo(hostname, NULL, NULL, &result);
    
    if (result == NULL) {
        // could not find address.
    }
    
    return result;
}