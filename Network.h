#ifndef NETWORK_H
#define NETWORK_H

#include "User.h"

using namespace std;

class Network
{
private:
	list <Users> Netusers;
	list <string> Ufriends;
public:
	Network();

	void add_user (Users Netuser);

	int add_connection(int userId,int friendId); //returns "1" if connected is done and "0" otherwise(if any of them is invalid)

	int remove_connection (int userId, int friendId); //returns "1" if connected is done and "0" otherwise(if any of them is invalid)

	//int get_id (string name); //take the user name and return its id or 0 if this name is invalid

	string get_name (int id);

	list<string> get_friends( string name); // find all fiends of that user

	list<string> get_groups(string name); //find all groups whiche joined by that user

	list<Posts> get_posts(string name); // find all posts of that user
};

#endif