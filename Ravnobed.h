using namespace std;


template <typename T>
class Ravnobed : public Triangle<T>
{
	public:
		void change()		
		{
			int i = -1;
			while(i)
			{
				cout << "Enter the sides of an isosceles triangle: ";
				int s1,s2; cin >> s1 >> s2;
				if(s1+s1>s2)
				{
					Triangle<T>::a = Triangle<T>::b = s1; Triangle<T>::c = s2;
					i = 0;
				}
				else 
				{
					cout << "Denied! Isosceles triangle not exist. Change sides\n\n";
				}
			}
		}
		
		float radius()
		{
			//float p = (Triangle<T>::a+Triangle<T>::b+Triangle<T>::c)/2;	
			//return 2*sqrt(p*(p-Triangle<T>::a)*(p-Triangle<T>::b)*(p-Triangle<T>::c))/(Triangle<T>::a+Triangle<T>::b+Triangle<T>::c);
			if (Triangle<T>::a == Triangle<T>::b) return Triangle<T>::c / 2 * sqrt((2 * Triangle<T>::a - Triangle<T>::c) / (2 * Triangle<T>::a + Triangle<T>::c));
			if (Triangle<T>::a == Triangle<T>::c) return Triangle<T>::b / 2 * sqrt((2 * Triangle<T>::a - Triangle<T>::b) / (2 * Triangle<T>::a + Triangle<T>::b));
			if (Triangle<T>::c == Triangle<T>::b) return Triangle<T>::a / 2 * sqrt((2 * Triangle<T>::b - Triangle<T>::a) / (2 * Triangle<T>::b + Triangle<T>::a));
		}
		
		float Radius()
		{
			return 1.0*Triangle<T>::a*Triangle<T>::b*Triangle<T>::c/(4*(Triangle<T>::a+Triangle<T>::b+Triangle<T>::c));
		}
		
		float sqr()
		{
			float p = 3*Triangle<T>::a/2;
			return sqrt(p*(p-Triangle<T>::a)*(p-Triangle<T>::b)*(p-Triangle<T>::c));
		}
};

