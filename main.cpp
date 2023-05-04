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
	while(i) 
	{
		switch(i)
		{
			case 1:
			{
				cout << "\nChosen: int\n";
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
							cout << "prmtr\t|sqr\t|radius\t|Radius\t|\n================================\n" << tr.prmtr() << "\t|" << round(tr.sqr()*100)/100 <<
							"\t|" << round(tr.radius()*100)/100 << "\t|" << round(tr.Radius()*100)/100 << "\t|\n\n";
							k = -1;
							break;
						}
						
						case 2:
						{
							rs.change();
							cout << "\n";
							rs.show();
							cout << "\nprmtr\t|sqr\t|radius\t|Radius\t|\n================================\n" << rs.prmtr() << "\t|" << round(rs.sqr()*100)/100 <<
							"\t|" << round(rs.radius()*100)/100 << "\t|" << round(rs.Radius()*100)/100 << "\t|\n\n";
							k = -1;
							break;
						}
						
						case 3:
						{
							rb.change();
							cout << "\n";
							rb.show();
							cout << "\nprmtr\t|sqr\t|radius\t|Radius\t|\n================================\n" << rb.prmtr() << "\t|" << round(rb.sqr()*100)/100 <<
							"\t|" << round(rb.radius()*100)/100 << "\t|" << round(rb.Radius()*100)/100 << "\t|\n\n";
							k = -1;
							break;
						}
						
						case 4:
						{
							pu.change();
							cout << "\n";
							pu.show();
							cout << "\nprmtr\t|sqr\t|radius\t|Radius\t|\n================================\n" << pu.prmtr() << "\t|" << round(pu.sqr()*100)/100 <<
							"\t|" << round(pu.radius()*100)/100 << "\t|" << round(pu.Radius()*100)/100 << "\t|\n\n";
							k = -1;
							break;
						}
						
						default:
						{
							
							cout << "Choose your triangle:\n1 - Random\n2 - Ravnostor\n3 - Ravnobed\n4 - Right\n0 - to exit\n";
							cin >> k; cout << "\n";
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
			
			case 2:
			{
				cout << "Chosen: float\n\n";
				Triangle<float> tr;
				Ravnostor<float> rs;
				Ravnobed<float> rb;
				Right<float> pu;
				int k = -1;
				while(k)
				{
					switch(k) 
					{ 
						case 1:
						{
							tr.change();
							cout << "prmtr\t|sqr\t|radius\t|Radius\t|\n================================\n" << tr.prmtr() << "\t|" << round(tr.sqr()*100)/100 <<
							"\t|" << round(tr.radius()*100)/100 << "\t|" << round(tr.Radius()*100)/100 << "\t|\n\n";
							k = -1;
							break;
						}
						
						case 2:
						{
							rs.change();
							cout << "\nprmtr\t|sqr\t|radius\t|Radius\t|\n================================\n" << rs.prmtr() << "\t|" << round(rs.sqr()*100)/100 <<
							"\t|" << round(rs.radius()*100)/100 << "\t|" << round(rs.Radius()*100)/100 << "\t|\n\n";
							k = -1;
							break;
						}
						
						case 3:
						{
							rb.change();
							cout << "\nprmtr\t|sqr\t|radius\t|Radius\t|\n================================\n" << rb.prmtr() << "\t|" << round(rb.sqr()*100)/100 <<
							"\t|" << round(rb.radius()*100)/100 << "\t|" << round(rb.Radius()*100)/100 << "\t|\n\n";
							k = -1;
							break;
						}
						
						case 4:
						{
							pu.change();
							cout << "\nprmtr\t|sqr\t|radius\t|Radius\t|\n================================\n" << pu.prmtr() << "\t|" << round(pu.sqr()*100)/100 <<
							"\t|" << round(pu.radius()*100)/100 << "\t|" << round(pu.Radius()*100)/100 << "\t|\n\n";
							k = -1;
							break;
						}
						
						default:
						{
							
							cout << "Choose your triangle:\n1 - Random\n2 - Ravnostor\n3 - Ravnobed\n4 - Right\n0 - to exit\n";
							cin >> k; cout << "\n";
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
			
			case 3:
			{
				cout << "Chosen: double\n\n";
				Triangle<double> tr;
				Ravnostor<double> rs;
				Ravnobed<double> rb;
				Right<double> pu;
				int k = -1;
				while(k)
				{
					switch(k) 
					{ 
						case 1:
						{
							tr.change();
							cout << "prmtr\t|sqr\t|radius\t|Radius\t|\n================================\n" << tr.prmtr() << "\t|" << round(tr.sqr()*100)/100 <<
							"\t|" << round(tr.radius()*100)/100 << "\t|" << round(tr.Radius()*100)/100 << "\t|\n\n";
							k = -1;
							break;
						}
						
						case 2:
						{
							rs.change();
							cout << "\nprmtr\t|sqr\t|radius\t|Radius\t|\n================================\n" << rs.prmtr() << "\t|" << round(rs.sqr()*100)/100 <<
							"\t|" << round(rs.radius()*100)/100 << "\t|" << round(rs.Radius()*100)/100 << "\t|\n\n";
							k = -1;
							break;
						}
						
						case 3:
						{
							rb.change();
							cout << "\nprmtr\t|sqr\t|radius\t|Radius\t|\n================================\n" << rb.prmtr() << "\t|" << round(rb.sqr()*100)/100 <<
							"\t|" << round(rb.radius()*100)/100 << "\t|" << round(rb.Radius()*100)/100 << "\t|\n\n";
							k = -1;
							break;
						}
						
						case 4:
						{
							pu.change();
							cout << "\nprmtr\t|sqr\t|radius\t|Radius\t|\n================================\n" << pu.prmtr() << "\t|" << round(pu.sqr()*100)/100 <<
							"\t|" << round(pu.radius()*100)/100 << "\t|" << round(pu.Radius()*100)/100 << "\t|\n\n";
							k = -1;
							break;
						}
						
						default:
						{
							
							cout << "Choose your triangle:\n1 - Random\n2 - Ravnostor\n3 - Ravnobed\n4 - Right\n0 - to exit\n";
							cin >> k; cout << "\n";
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
			cout << "Choose type of numbers:\n1 - int\n2 - float\n3 - double\n0 - to end\n";
			cin >> i;
			break;
		}
	}
	}

}

