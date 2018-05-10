#include"User.h"
#include <ostream>
#include <fstream>
using namespace std;

void main ()
{
	Users m;
	Users n;
	Users g;
	string name , password ;
	int id , birthyear;
	//	m.setName("marina");
	cin >>id>> name>>password>>birthyear;
	m.setName(name);
	m.setId(id);
	m.setPassword(password);
	m.setBirth(birthyear);

	n.setName("mira");
	n.setId(1);
	n.setPassword("11");
	n.setBirth(2005);

	g.setName("totot");
	g.setId(2);
	g.setPassword("55");
	g.setBirth(1994);

	cout << m.getName()<<" "<<m.getId()<<" "<<m.getPassword()<<" "<<m.getBirth()<<endl;
	m.add_friend(n);
	m.add_friend(g);
//	m.remove_friend(g);
	int b =m.get_friendsNumber();
	cout << b << endl;
	//vector<string> testfriends;
	//testfriends = m.friendslist();
	 m.friendslist();
	/*for(int i=0;i<testfriends.size();i++)
		cout<<testfriends[i]<<" ";*/
	cout<<endl;
	
//	operator >> (cout, m);
	//cin>>m.User_id<<

/*	this-> User_id;        //to be unique user like the user name or the email which must be unique
	this-> User_name;
	this-> User_password;
	this-> User_birthYear;*/
}