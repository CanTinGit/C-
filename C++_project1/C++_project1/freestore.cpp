#include "resourceclass.h"
#include <string>

using std::string;

void main() 
{
	{
		Resource localResource("local");
		string localstring = localResource.GetName();
	}

	Resource* pResource = new Resource("create with new");
	string newstring = pResource->GetName();
	int j = 3;
	delete pResource;

	string string3 = pResource->GetName();
}