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
			float p = (Triangle<T>::a+Triangle<T>::b+Triangle<T>::c)/2;	
			//return 2*sqrt(p*(p-Triangle<T>::a)*(p-Triangle<T>::b)*(p-Triangle<T>::c))/(Triangle<T>::a+Triangle<T>::b+Triangle<T>::c);
			return sqrt(((p - Triangle<T>::a) * (p - Triangle<T>::b) * (p - Triangle<T>::c)) / p);
		}
		
		float Radius()
		{
			//return 1.0*Triangle<T>::a*Triangle<T>::b*Triangle<T>::c/(4*(Triangle<T>::a+Triangle<T>::b+Triangle<T>::c));
			if (Triangle<T>::a == Triangle<T>::b) return pow(Triangle<T>::a,2) / sqrt(4 * pow(Triangle<T>::a,2) - pow(Triangle<T>::c,2));
			if (Triangle<T>::a == Triangle<T>::c) return pow(Triangle<T>::a,2) / sqrt(4 * pow(Triangle<T>::a,2) - pow(Triangle<T>::b,2));
			if (Triangle<T>::c == Triangle<T>::b) return pow(Triangle<T>::b,2) / sqrt(4 * pow(Triangle<T>::b,2) - pow(Triangle<T>::a,2));
		}
		
		float sqr()
		{
			//float p = (2*Triangle<T>::a + Triangle<T>::c) / 2;
			//return sqrt(p*(p-Triangle<T>::a)*(p-Triangle<T>::b)*(p-Triangle<T>::c));
			if (Triangle<T>::a == Triangle<T>::b) return Triangle<T>::c * sqrt(4 * pow(Triangle<T>::a,2) - pow(Triangle<T>::c,2)) / 4;
			if (Triangle<T>::a == Triangle<T>::c) return Triangle<T>::b * sqrt(4 * pow(Triangle<T>::a,2) - pow(Triangle<T>::b,2)) / 4;
			if (Triangle<T>::c == Triangle<T>::b) return Triangle<T>::a * sqrt(4 * pow(Triangle<T>::b,2) - pow(Triangle<T>::a,2)) / 4;
		}
};

