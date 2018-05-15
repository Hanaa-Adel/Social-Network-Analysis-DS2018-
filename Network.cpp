#include "User.h"
#include"Network.h"

using namespace std ;
//Network::Network(){};//default conestructor
Network:: Network() {
 count = 0;
 }
void Network::  readFile(string textname)  //dynamically allocate memory and storing each product line into the dynamic memory array
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
	  

	 dataRecord.push_back(tempPerson);
 
//	 cout<<tempPerson.getName()<<" ";
   if( infile.eof() ) break;
 }
  cout<<endl;
  for(int i=0;i<dataRecord.size();i++)
	  cout<<dataRecord[i].getId()<<" ";
   //  dataRecord.addToBst(tree);
 }
void Network:: write_data(string file_name)
{
	ofstream outfile;
   //ofstream outfile ;
	 outfile.open (file_name);
	// for (int i=0;i<dataRecord.size();i++)
	 for(map<int,Users> ::iterator im = dataRecord.begin(); im != dataRecord.end(); im++)
		// outfile<<dataRecord[i].getId()<<" "<<dataRecord[i].getName()<<" "<<dataRecord[i].getBirth()<<" "<<dataRecord[i].getPassword()<<endl;
			outfile<<im->first<<" "<<im->second.getName()<<" "<<im->second.getBirth()<<" "<<im->second.getPassword()<<endl;
}
void Network:: write_data2(string file_name)
{
	ofstream outfile;
   //ofstream outfile ;
	 outfile.open (file_name);
	 for (map< string, string >::iterator im = ToLogIn.begin(); im != ToLogIn.end(); im++)
		 outfile<<im->first<<" "<<im->second<<endl;

}

//void Network:: add_user (Users Netuser){}
Users Network::getcaseone()
     {
         
         string name;
		 string name1;
		 string name2;
         string password;
         int    birthYear;
         int    id;
         
         cout << "ID : ";
         cin.ignore();
		 cin>>id;
		 cout << "First Name: ";
		 cin>>name1;
		 cout << "Last Name: ";
		 cin>>name2;
         cout << "Password : ";
         cin>>password;
		 cout << "Birth Year : ";
		 cin>>birthYear;
	     name =name1+" "+name2;
		 Users tempPerson(id, name,password ,birthYear);
         return tempPerson;
     }

void Network:: userMenu(int name, string password) {
 
	system("Color F9");

 bool options = true;
 Users temp;  Users other; Users temporary; vector<Users *> tempFriends;
 
 //temporary.setName(name);
 //temp = tree.search(temporary);
 //while (true)
 {
	  if(dataRecord.find(name) != dataRecord.end())
		{ 
		/*	int Id=dataRecord[name].getId;
			string Name=dataRecord[name].getName;
			string Password=dataRecord[name].getPassword;
			int Birth=dataRecord[name].getBirth;*/
			//temp(Id,Name,Password,Birth);
			temp.setName(dataRecord[name].getName());
			temp.setBirth(dataRecord[name].getBirth());
			temp.setId(dataRecord[name].getId());
			temp.setPassword(dataRecord[name].getPassword());
			system("pause");
		//break;
	    }
 }
 if(dataRecord.find(name)==dataRecord.end())
	{ 
		cout<<"error";
		system("pause");
 }
 if(temp.getPassword() != password){
 cout << "Incorrect Username and Password" << endl;
 system("pause");
 return;
 }
 
 while(options == true) {
	 system("CLS");	
	 cout << endl;
	 cout << "*******************  "<< temp.getName() << " Profile" << " *******************************" << endl;
     cout << "* " <<  setw(37) << " Choose an option from below" << setw(34)  << "*" << endl;
					cout << "* " << setw(25) << "1. Add a friend" << setw(47) << " * " << endl;
					cout << "* " << setw(30) << "2. Show your friends" << setw(42) << " * " << endl;
					cout << "* " << setw(26) << "3. Show newsfeed" << setw(46) << " * " << endl;
					cout << "* " << setw(19) << "4. Logout" << setw(52) << " *" << endl;
					cout << "* " << setw(33) << "[Choose Your Option] : ";
					int option;
					 int friendName;
                   //  string message;
                 //     string pressKey;
                      bool friendFound = false;
                  //   string status = " ";
                      cin >> option;
                 cout << "*****************************************************************************" << endl;
                    	system("CLS");	
                        switch(option) {
                     case 1 : cout << "Which friend would you like to add" << endl;
                            cin.ignore();
							cin>>friendName;
							if(dataRecord.find(friendName) != dataRecord.end())
	                          	{ 
		
									other.setName(dataRecord[friendName].getName());
									other.setBirth(dataRecord[friendName].getBirth());
									other.setId(dataRecord[friendName].getId());
									other.setPassword(dataRecord[friendName].getPassword());
			                         system("pause");
		                             //break;
	                               }
							if(dataRecord.find(friendName)==dataRecord.end())
                                	{ 
                                 		cout<<"Person does not exist in the database" <<endl;
	                                	system("pause");
										break;
                                    }
							 else {
								 temp.add_friend(other);
                              friendFound = true;
							  system("pause");  
							  break;
							 }
								
					 case 2:
									
					temp.friendslist();
					system("pause");
					break;
					case 4 :
                     options = false;
                          break;

					}

}
 if(options == false){
 cout << "You've been logged out." << endl;
 
 system("pause");
 return;
 }
 }
// }
//int Network::add_connection(int userId,int friendId){} //returns "1" if connected is done and "0" otherwise(if any of them is invalid)

//int Network::remove_connection (int userId, int friendId){} //returns "1" if connected is done and "0" otherwise(if any of them is invalid)

	//int Network::get_id (string name){} //take the user name and return its id or 0 if this name is invalid

//string Network::get_name (int id){}

//list<string> Network::get_friends( string name){} // find all fiends of that user

//list<string> Network::get_groups(string name){} //find all groups whiche joined by that user

//list<Posts> Network::get_posts(string name){} // find all posts of that user