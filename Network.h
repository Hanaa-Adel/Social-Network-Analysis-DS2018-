#ifndef NETWORK_H
#define NETWORK_H
//#include "NEW_LinkedList"
#include "User.h"
 #include <iomanip>
using namespace std;

class Users;
class Network
{
private:
//	list <Users> Netusers;
	//list <string> Ufriends;
	//map<int,Users> dataRecord;
	//vector<Users*> dataRecord;
public:
	map<string,string> ToLogIn;
	//vector<Users>dataRecord;
	map<int,Users> dataRecord;
 //BinarySearchTree<person> tree;
 int count;

	Network();
	void readFile(string textname);
	void write_data(string file_name);
	void write_data2(string file_name);
	void write_data3(string file_name);
//	void add_user (Users Netuser);
	Users getcaseone();
	void userMenu(int name, string password);
	int add_connection(int userId,int friendId); //returns "1" if connected is done and "0" otherwise(if any of them is invalid)

	int remove_connection (int userId, int friendId); //returns "1" if connected is done and "0" otherwise(if any of them is invalid)

	//int get_id (string name); //take the user name and return its id or 0 if this name is invalid

	string get_name (int id);

	list<string> get_friends( string name); // find all fiends of that user

	//list<string> get_groups(string name); //find all groups whiche joined by that user

	//list<Posts> get_posts(string name); // find all posts of that user
};

#endif