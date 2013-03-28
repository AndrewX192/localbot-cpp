/* 
 * File:   Channel.h
 * Author: Andrew Sorensen
 */

#ifndef CHANNEL_H
#define	CHANNEL_H

#include <vector>
using namespace std;

class Channel {
public:
    Channel();
    Channel(const Channel& orig);
    virtual ~Channel();
    Channel addMembers(vector<User>);
    int getSize();
    bool isEmpty();
    bool containsMember();
private:
    char* name;
    char* topic;
    vector<char> modes;
    
};

#endif	/* CHANNEL_H */

