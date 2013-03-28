/*
 * File:   Connection.h
 * Author: Andrew Sorensen
 */

#ifndef CONNECTION_H
#define	CONNECTION_H

#include <string>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
using namespace std;

#define OUT_OF_FILE_DESCRIPTORS -1

class Connection {
public:
    Connection();
    Connection(const Connection& orig);
    virtual ~Connection();

    Connection create();
    int connectTo(char*, int);
private:
    addrinfo* resolveDns(string);
};

#endif	/* CONNECTION_H */

