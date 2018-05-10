#ifndef USERS_H
#define USERS_H

#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <map>
#include <vector>
#include <sstream>
#include <ostream>
#include "Netgroups.h"
#include "Posts.h"
#include"Network.h"


using namespace std;

class Users 
{
private:
	int User_id;        //to be unique user like the user name or the email which must be unique
	string User_name;
	string User_password;
	int User_birthYear;

	map<int,string> user_password;
	map<int,string> User_identity; // take the id and the name of the user to be a unique user

//	list<string>User_friends;
	vector <Users *> User_friends;
	list<int>User_friendId;

	//list<Posts>User_post;

	list<string>User_groups;

public:
		//friend istream& operator >> (istream& is, Users c);
		//friend ostream& operator << (ostream& os,Users c);
	Users();
	//~Users();

	Users(int User_id, string User_name, string User_password, int User_birthYear);

	void setName(string User_name );
	void setId(int User_id );
	void setPassword(string User_password );
	void setBirth(int User_birthYear);

   string getName();
   int    getId();
   string getPassword();
   int    getBirth();

    void add_friend(Users &friend_name);
	void remove_friend(Users &Friend_name);
	int  get_friendsNumber();
	void friendslist ();

//	void add_post(Posts post);
	int get_postsNumber();

//	void join_group(Netgroups groupName);
//	void remove_group(Netgroups groupName);
	

};

#endif

