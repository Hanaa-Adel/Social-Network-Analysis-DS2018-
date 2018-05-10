#include "User.h"


using namespace std ;



Netgroups::Netgroups()
{
	group_id=0;
	group_name=" ";

} //default conestructor
Netgroups::Netgroups(string group_name)
{
	this ->group_name=group_name;
}
