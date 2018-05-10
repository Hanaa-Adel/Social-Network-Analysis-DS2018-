#include "User.h"

using namespace std;

Users::Users()
{
	{
	 User_id =0;        //to be unique user like the user name or the email which must be unique
	 User_name=" ";
	//this-> User_password=User_password;
	 User_password=" ";
	 User_birthYear= ' ';
} //parameterized constructor

}//default constructor

Users::Users(int User_id, string User_name, string User_password, int User_birthYear)
{
	this-> User_id=User_id;        //to be unique user like the user name or the email which must be unique
	this-> User_name=User_name;
	//this-> User_password=User_password;
	this-> User_password=User_password;
	this-> User_birthYear=User_birthYear;
} //parameterized constructor

 
void Users:: setId(int User_id )   //1 id
{
	this-> User_id = User_id;
}

int Users:: getId()
{
	return User_id;
}


void Users:: setName(string User_name )  //2 name
{
	this-> User_name = User_name;
}

string Users:: getName()
{
	return User_name;
}


void Users:: setPassword(string User_password ) //3 password
{
	this-> User_password = User_password;
}

string Users:: getPassword()
{
	return User_password;
}

void Users:: setBirth(int User_birthYear) //4 birth year
{
	this-> User_birthYear = User_birthYear;
	
}

int Users:: getBirth()
{
	return User_birthYear;
}

/*istream& operator >> (istream& is, Users c)
{
	is >> c.User_name;
//is>> c.Green;
//is>> c.Blue;
return is;
}
ostream& operator << (ostream& os,Users c)
{
	os << c.getName();
//is>> c.Green;
//is>> c.Blue;
return os;
}
*/
void Users:: add_friend(Users &friend_name)
{
	if (&friend_name == this)
    {
        cout << "You cannot add yourself." <<  endl;
        return;
    }
	// list<string>::iterator i;
	for (int i =0; i < User_friends.size(); i++ ) {
		//Users g;
		if (User_friends[i]->User_name == friend_name.User_name) {
            cout << "You cannot add the same friend twice." <<  endl;
            return  ;
        }
    }
	
    User_friends.push_back(&friend_name);
    friend_name.User_friends.push_back(this);
    cout << User_name << " and " << friend_name.User_name << " are now friend " <<  endl;
	/*for(int i=0;i<User_friends.size();i++)
		cout<<User_friends[i]->User_id<<" ";*/
   // setStatus(name + " and " + friendName.name + " are now friend ");
} // add a friend to user
void Users:: remove_friend(Users &Friend_name)
{
	 if (&Friend_name == this)
    {
        cout << "You cannot delete yourself." <<  endl;
        return;
    }
    for (int i = 0; i < User_friends.size(); i++ ) {
        if (User_friends[i]->User_name == Friend_name.User_name) {
            User_friends.erase(User_friends.begin() + i);
            Friend_name.remove_friend(*this);
            return  ;
        }
    }
    cout << User_name << " and " << Friend_name.User_name << " are no longer friends." <<  endl;
	
} //remove friend
int Users:: get_friendsNumber()
{
	return User_friends.size();
} // get number

//void Users ::add_post(Posts post) {}
//int Users:: get_postsNumber(){}

//void Users:: join_group(Netgroups groupName){}
//void Users:: remove_group(Netgroups groupName){}
	
void Users:: friendslist ()
{
	vector <string> check;
	for(int i=0;i<User_friends.size();i++)
		//check[i]=User_friends[i]->User_name;
		//User_friends.push_back()
		cout<<User_friends[i]->User_id<<" ";
	/*
	for (int i=0;i<User_friends.size();i++)
	{
		string g;
		User_friends[i]->User_name =g;
		check[i]=g;
		//User_friends.push_back(check[i]);
	//	check[i]=User_friends[i];
	}*/
	//return check;
}