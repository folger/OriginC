#include <origin.h>

void recursiveListFolder(Folder& folder, int nLevel)
{
	string strPadding(' ', 4 * nLevel);
	printf("%s%s\n", strPadding, folder.GetName());
	
	++nLevel;
	foreach ( Folder subFol in folder.Subfolders )
	{
		recursiveListFolder(subFol, nLevel);
	}
}

void ListFolderTree()
{
	int nLevel = 0;
	recursiveListFolder(Project.RootFolder, nLevel);
}