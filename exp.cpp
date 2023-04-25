#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
class Triangle
{
	protected:
		T ps;
		
	public:	
	Triangle()
	{ps = 4.0;}		
		void seta(T i){ps = i;}
		
		T geta(){return ps;}
		
};

int main()
{
	Triangle<float> p;
	float g = 6.54;
	p.seta(g);
	cout << p.geta();	
}
