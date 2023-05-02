#include <iostream>
#include <cmath>
#include "Triangle.h"
#include "Ravnostor.h"
#include "Ravnobed.h"
#include "Right.h"
using namespace std;

int main()
{
	int i = -1;
	while(i) {
	
	switch(i)
	{
		case 1:
		{
			cout << "Chosen: int\n\n";
			Triangle<int> tr;
			Ravnostor<int> rs;
			Ravnobed<int> rb;
			Right<int> pu;
			int k = -1;
			while(k)
			{
				switch(k) 
				{ 
					case 1:
						{
						tr.change();
						k = -1;
						break;
						}
						
					case 2:
						{
						rs.change();
						k = -1;
						break;
						}
						
					case 3:
						{
						rb.change();
						k = -1;
						break;
						}
						
					case 4:
						{
						pu.change();
						k = -1;
						break;
						}
						
					default:
						{
						cout << "Choose your triangle:\n1 - Random\n2 - Ravnostor\n3 - Ravnobed\n4 - Right\n0 - to exit\n";
						cin >> k; cout << endl;
						if(k == 0)
						{
							i = 0;
						}
						break;
						}
				 }
			}
			i = -1;
			break;
		}
		
		default:
		{
			cout << "Choose type of numbers:\n 1 - int\n 2 - float\n 3 - double\n 0 - to exit\n";
			cin >> i;
			break;
		}
	}
	}

}

