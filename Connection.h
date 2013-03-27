/*
 * File:   Connection.h
 * Author: Andrew Sorensen
 */

#ifndef CONNECTION_H
#define	CONNECTION_H

class Connection {
public:
    Connection();
    Connection(const Connection& orig);
    virtual ~Connection();

    Connection create();
    int connect();
private:

};

#endif	/* CONNECTION_H */

