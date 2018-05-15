#include <iostream>
#include <ostream>
#include <fstream>

#include"User.h"
#include "Network.h"
using namespace std;
/*
void  readFile(string textname)  //dynamically allocate memory and storing each product line into the dynamic memory array
 {
	 int     id;
     string  name1;
	 string  name2;
     string password;
	 int    birthYear;
	//map<int,Users> dataRecord;
	 vector<Users> dataRecord;
 ifstream infile;
 infile.open(textname);
 if(!infile)

            {
                        cout << "While opening a file an error is encountered" << endl;
            }
            else
            {
                        cout << "File is successfully opened" << endl;
            }
 //while(!infile.eof())
  while(true)
 {
	  
 	  infile>>id;
	  infile>>name1;
	  infile>>name2;
	 // string name ;
	  infile>>birthYear;
	  infile>>password;
	  string name =name1+" "+name2;
	 Users tempPerson(id,name,password,birthYear);
	  
	/* tempPerson.setName(name1,name2);
	  tempPerson.setBirth(birthYear);
	  tempPerson.setId(id);
	  tempPerson.setPassword(password);*/
	// dataRecord.push_back(tempPerson);
 //dataRecord.push_back(tempPerson);
 //dataRecord[id]=tempPerson;
 //this->dataRecord.push_back(tempPerson);
 //count++;
	// cout<<tempPerson;
	/* cout<<tempPerson.getName()<<" ";
   if( infile.eof() ) break;
 }
  cout<<endl;
  for(int i=0;i<dataRecord.size();i++)
	  cout<<dataRecord[i].getId()<<" ";
   //  dataRecord.addToBst(tree);
 }
*/


void main ()
{
	Network menu;
   menu.readFile("users_small.txt");
   
     while(true) {
        int option;
        cout << "\n*************************************************************************\n";
        cout << "*                 Welcome to the Social Network                         *" << endl;
        cout << "*                                                                       *" << endl;
        cout << "*                  [1] Sign Up                                          *" << endl;
        cout << "*                  [2] Login                                            *" << endl;
        cout << "*                  [3] Exit                                             *" << endl;
        cout << "*                                                                       *" << endl;
        cout << "*     [Select Menu] : "; cin >> option;
        cout << "\n*************************************************************************\n";
        system("CLS");
		//char check='a';
		int check =0;
        if(option ==1) {
			Users temporary;
			
			
            temporary = menu.getcaseone();
			//for(int i=0;i<menu.dataRecord.size();i++)
			menu.dataRecord[temporary.getId()]=temporary;
            //menu.tree.insert(menu.dataRecord.search(temporary));
            cout << "Thank you for choosing our Social Network " + temporary.getName() <<endl;
			//cout<<menu.dataRecord.size();
			menu.write_data("the users.txt");
			menu.ToLogIn[temporary.getName()]=temporary.getPassword();
			menu.write_data2("log in data.txt");
			
			//check++;
        }

		
		 if(option == 2){
        for(int i = 0; i < 3; i ++) {
			     system("CLS");
			    system("Color F0");
            cout << "\n*************************************************************************\n";
            cout << "*           Welcome to the Social Network                               *" << endl;
            cout << "*                                                                       *" << endl;
            cout << "*                                                                       *" << endl;
            string name;
			int id;
            string password;
            cout << "*           Username: "; cin.ignore();cin>> id;
            cout << "*                                                                       *" << endl;
            cout << "*           Password: "; cin>>password;
            cout << "*                                                                       *" << endl;
            cout << "*                                                                       *" << endl;
            cout << "*************************************************************************" << endl;
			system("CLS");
            if(name != "admin")
				menu.userMenu(id, password);
            /*else
                menu.adminMenu(menu, password);*/
			else
				return;
            
        }
		 if (option==3) {
            break;
        }
		   /* for (int i=0; i<menu.dataRecord.size();i++)
				cout<<menu.dataRecord[i].getName();*/

	 }
}

	/*
	Users m;
	Users n;
	Users g;
	string name1,name2 , password ;
	int id , birthyear;
	//	m.setName("marina");

	n.setName("a","b");
	n.setId(1);
	n.setPassword("11");
	n.setBirth(2005);

	g.setName("b","a");
	g.setId(2);
	g.setPassword("55");
	g.setBirth(1994);
	/*
	cin >>id>> name>>password>>birthyear;
	m.setName(name);
	m.setId(id);
	m.setPassword(password);
	m.setBirth(birthyear);
	*//*
	ifstream infile ("users_small.txt");
	if(!infile)

            {
                        cout << "While opening a file an error is encountered" << endl;
            }
            else
            {
                        cout << "File is successfully opened" << endl;
            }
	vector <Users>test;
	Users nodeName;
   while(true)
  {
	 // int num;
	  //infile >> nodeName;
	  infile>>id;
	  infile>>name1;
	  infile>>name2;
	  infile>>birthyear;
	  infile>>password;
	  test.push_back(nodeName);
	  nodeName.setName(name1,name2);
	  nodeName.setBirth(birthyear);
	  nodeName.setId(id);
	  nodeName.setPassword(password);
	  if( infile.eof() ) break;
	  //int i=0;
	  //ToBeSorted[i]=num;
	 // i++;
	  
	 //ToBeSorted.push_back(num);
	//  cout<<ToBeSorted(i);
	  cout<<id<<" "<<name1<<" "<<name2<<" "<<birthyear<<" "<<password<<endl;
  }


   ofstream out("test1.txt");
   out<<"a"<<" "<<"b"<<" "<<"c"<<" "<<"d"<<" "<<"e";
//   cout << n.getName()<<" "<<n.getId()<<" "<<n.getPassword()<<" "<<n.getBirth()<<endl;
	//m.add_friend(n);
	//m.add_friend(g);
//	m.remove_friend(g);
	int b =m.get_friendsNumber();
	//cout << b << endl;
	//vector<string> testfriends;
	//testfriends = m.friendslist();
	 //m.friendslist();
	/*for(int i=0;i<testfriends.size();i++)
		cout<<testfriends[i]<<" ";*/
	//cout<<endl;
	
//	operator >> (cout, m);
	//cin>>m.User_id<<

/*	this-> User_id;        //to be unique user like the user name or the email which must be unique
	this-> User_name;
	this-> User_password;
	this-> User_birthYear;*/
}