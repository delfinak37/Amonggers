#include <iostream>
#include <cmath>
#include "Triangle.h"
#include "Ravnostor.h"
#include "Ravnobed.h"
#include "Right.h"
using namespace std;

int main()
{
	//Triangle<unsigned> tr,rs,rb,pu;
	
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
			switch(k) 
			{ 
				case 1:
					cout << "case 1\n";
					
				case 2:
					cout << "case 2\n";
					
				case 3:
					cout << "case 3\n";
					
				case 4:
					cout << "case 4\n";
				default:
					{
					cout << "Choose your triangle:\n1 - Random\n2 - Ravnostor\n3 - Ravnobed\n4 - Right\n";
					cin >> k;
					}
			}
			
			
			/*
			cout << "\n===========================\nshow\n===========================\n\n";
			tr.show(); rs.show(); rb.show(); pu.show();
			
			cout << "\n============================\nchange\n============================\n\n";
			tr.change(); rs.change(); rb.change(); pu.change();
			
			cout << "\n";
			tr.show(); rs.show(); rb.show(); pu.show();
			
			cout << "\n============================\nprmtr\n============================\n\n";
			cout << tr.prmtr() << "\t" << rs.prmtr() << "\t" << rb.prmtr() << "\t" << pu.prmtr() << "\n";
			
			cout << "\n============================\nsqr\n============================\n\n";
			cout << round(tr.sqr()*100)/100 << "\t" << round(rs.sqr()*100)/100 << "\t" << round(rb.sqr()*100)/100 << "\t" << round(pu.sqr()*100)/100 << "\n";
			
			cout << "\n============================\nradius\n============================\n\n";
			cout << round(tr.radius()*100)/100 << "\t" << round(rs.radius()*100)/100 << "\t" << round(rb.radius()*100)/100 << "\t" << round(pu.radius()*100)/100 << "\n";
			
			cout << "\n============================\nRadius\n============================\n\n";
			cout << round(tr.Radius()*100)/100 << "\t" << round(rs.Radius()*100)/100 << "\t" << round(rb.Radius()*100)/100 << "\t" << round(pu.Radius()*100)/100 << "\n";
			
			cout << "\n\n\n\n";
			*/
			
			i = 0;

			break;
		}
		
		case 2:
		{
			cout << "Chosen: float\n\n";
			Triangle<float> tr;
			Ravnostor<float> rs;
			Ravnobed<float> rb;
			Right<float> pu;
			
			cout << "\n===========================\nshow\n===========================\n\n";
			tr.show(); rs.show(); rb.show(); pu.show();
			
			cout << "\n============================\nchange\n============================\n\n";
			tr.change(); rs.change(); rb.change(); pu.change();
			
			cout << "\n";
			tr.show(); rs.show(); rb.show(); pu.show();
			
			cout << "\n============================\nprmtr\n============================\n\n";
			cout << tr.prmtr() << "\t" << rs.prmtr() << "\t" << rb.prmtr() << "\t" << pu.prmtr() << "\n";
			
			cout << "\n============================\nsqr\n============================\n\n";
			cout << round(tr.sqr()*100)/100 << "\t" << round(rs.sqr()*100)/100 << "\t" << round(rb.sqr()*100)/100 << "\t" << round(pu.sqr()*100)/100 << "\n";
			
			cout << "\n============================\nradius\n============================\n\n";
			cout << round(tr.radius()*100)/100 << "\t" << round(rs.radius()*100)/100 << "\t" << round(rb.radius()*100)/100 << "\t" << round(pu.radius()*100)/100 << "\n";
			
			cout << "\n============================\nRadius\n============================\n\n";
			cout << round(tr.Radius()*100)/100 << "\t" << round(rs.Radius()*100)/100 << "\t" << round(rb.Radius()*100)/100 << "\t" << round(pu.Radius()*100)/100 << "\n";
			
			cout << "\n\n\n\n";
			
			i = 0;
			
			break;
		}
			
		case 3:
		{
			cout << "Chosen: double\n\n";
			Triangle<double> tr;
			Ravnostor<double> rs;
			Ravnobed<double> rb;
			Right<double> pu;
			
			cout << "\n===========================\nshow\n===========================\n\n";
			tr.show(); rs.show(); rb.show(); pu.show();
			
			cout << "\n============================\nchange\n============================\n\n";
			tr.change(); rs.change(); rb.change(); pu.change();
			
			cout << "\n";
			tr.show(); rs.show(); rb.show(); pu.show();
			
			cout << "\n============================\nprmtr\n============================\n\n";
			cout << tr.prmtr() << "\t" << rs.prmtr() << "\t" << rb.prmtr() << "\t" << pu.prmtr() << "\n";
			
			cout << "\n============================\nsqr\n============================\n\n";
			cout << round(tr.sqr()*100)/100 << "\t" << round(rs.sqr()*100)/100 << "\t" << round(rb.sqr()*100)/100 << "\t" << round(pu.sqr()*100)/100 << "\n";
			
			cout << "\n============================\nradius\n============================\n\n";
			cout << round(tr.radius()*100)/100 << "\t" << round(rs.radius()*100)/100 << "\t" << round(rb.radius()*100)/100 << "\t" << round(pu.radius()*100)/100 << "\n";
			
			cout << "\n============================\nRadius\n============================\n\n";
			cout << round(tr.Radius()*100)/100 << "\t" << round(rs.Radius()*100)/100 << "\t" << round(rb.Radius()*100)/100 << "\t" << round(pu.Radius()*100)/100 << "\n";
			
			cout << "\n\n\n\n";
			
			i = 0;
			
			break;
		}
			
		default:
		{
			cout << "Chosee type of numbers:\n 1 - int\n 2 - float\n 3 - double\n";
			cin >> i;
			break;
		}
	}
	}
	
	
	/* Эта байда снизу - для проверки нужна была. Оставила, чтоб если кто захочет тоже смог проверить.
	
	Triangle<int> T1(3,4,5);
	Ravnobed<int> T2;
	Ravnostor<int> T3;
	Right<int> T4;
	T4.change();
	cout<<"sqr - "<<T1.sqr()<<"\tradius - "<<T1.radius()<<"\tRadius - "<<T1.Radius()<<"\nsqr - "<<T4.sqr()<<"\tradius - "<<T4.radius()<<"\tRadius - "<<T4.Radius()<<"\n";
	T1.show(); T2.show(); T3.show(); T4.show();
	*/
}

