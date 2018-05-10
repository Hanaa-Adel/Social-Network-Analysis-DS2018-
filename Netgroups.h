#ifndef NETGROUPS_H
#define NETGROUPS_H

#include "User.h"


using namespace std ;

class Netgroups
{
private:
	int group_id;
	string group_name;
	map<int,string> unique_group; //to make each group unique

	list<Users> group_members;
	list<Posts> group_posts;

public:
	Netgroups();
};

#endif