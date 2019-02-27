

#include "../List.h"

bool circularList(List<int>* root)
{
	List<int>* slowPtr = root;
	List<int>* fastPtr = root->next;
	while (slowPtr && fastPtr && fastPtr->next)
	{		
		slowPtr = slowPtr->next;
		fastPtr = fastPtr->next->next;
		if (slowPtr == fastPtr)
		{
			return true;
		}
	}
	return false;
}