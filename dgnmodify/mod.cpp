#include <iostream>
#include "dgnlib.h"
using namespace std;
int main(int argc, char ** argv){
	DGNHandle hdgn;
	DGNElemCore *psElement;
	const char *pszFilename = NULL;


	pszFilename = "C:/Users/chunlei.hou/Documents/Visual Studio 2013/Projects/dll/dgn/e4.dgn";
	hdgn = DGNOpen(pszFilename, FALSE);
	if (hdgn == NULL)
		exit(1);

	while ((psElement = DGNReadElement(hdgn)) != NULL)
	{
		if (psElement->type == 5){

			cout << psElement->type << endl;

		}


		DGNFreeElement(hdgn, psElement);
	}





	DGNClose(hdgn);
	return 0;


}
