#ifndef POSTS_H
#define POSTS_H

#include "User.h"

using namespace std;

class Posts
{
private:
	bool Is_Like ;

	list<Posts> liked_Posts;
	
public:

	Posts();
	Posts (bool Like);

	Users get_user();

	int get_Number_of_likes();

	Netgroups get_group();


};


#endif