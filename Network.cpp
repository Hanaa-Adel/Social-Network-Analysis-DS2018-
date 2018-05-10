#include "User.h"
#include"Network.h"

using namespace std ;
Network::Network(){};//default conestructor

void Network:: add_user (Users Netuser){}

int Network::add_connection(int userId,int friendId){} //returns "1" if connected is done and "0" otherwise(if any of them is invalid)

int Network::remove_connection (int userId, int friendId){} //returns "1" if connected is done and "0" otherwise(if any of them is invalid)

	//int Network::get_id (string name){} //take the user name and return its id or 0 if this name is invalid

string Network::get_name (int id){}

list<string> Network::get_friends( string name){} // find all fiends of that user

list<string> Network::get_groups(string name){} //find all groups whiche joined by that user

list<Posts> Network::get_posts(string name){} // find all posts of that user