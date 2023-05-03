using namespace std;


template <typename T>
class Right : public Triangle<T>
{
	public:
		void change()		
		{
			int i = -1;
			while(i)
			{
				cout <<"\nCurrent sides: " <<  Triangle<T>::a << "  " << Triangle<T>::b 
							<< "  " << Triangle<T>::c << endl;
				cout << "Enter the sides of an right triangle: ";
				T s1,s2,s3; cin >> s1 >> s2 >> s3;
				if(pow(s1,2)+pow(s2,2)==pow(s3,2) or
					pow(s2,2)+pow(s3,2)==pow(s1,2) or
						pow(s3,2)+pow(s1,2)==pow(s2,2))
						{
							Triangle<T>::a = s1; Triangle<T>::b = s2; Triangle<T>::c = s3;
							i = 0;
						}
				else 
				{
					cout << "Denied! Right triangle not exist. Change sides\n\n";
				}
			}
		}
		
		double radius()
		{
			if ((Triangle<T>::a > Triangle<T>::b) and (Triangle<T>::a > Triangle<T>::c)) return (Triangle<T>::b + Triangle<T>::c - Triangle<T>::a)/2;
			if ((Triangle<T>::b > Triangle<T>::a) and (Triangle<T>::b > Triangle<T>::c)) return (Triangle<T>::a + Triangle<T>::c - Triangle<T>::b)/2;
			if ((Triangle<T>::c > Triangle<T>::b) and (Triangle<T>::c > Triangle<T>::a)) return (Triangle<T>::b + Triangle<T>::a - Triangle<T>::c)/2;
		}
		
		double Radius()
		{
				if ((Triangle<T>::a > Triangle<T>::b) and (Triangle<T>::a > Triangle<T>::c)) return 1.0 * Triangle<T>::a/2;
				if ((Triangle<T>::b > Triangle<T>::a) and (Triangle<T>::b > Triangle<T>::c)) return 1.0 * Triangle<T>::b/2;
				if ((Triangle<T>::c > Triangle<T>::b) and (Triangle<T>::c > Triangle<T>::a)) return 1.0 * Triangle<T>::c/2;
		}
		
		double sqr()
		{
			if ((Triangle<T>::a > Triangle<T>::b) and (Triangle<T>::a > Triangle<T>::c)) return Triangle<T>::b * Triangle<T>::c / 2;
			if ((Triangle<T>::b > Triangle<T>::a) and (Triangle<T>::b > Triangle<T>::c)) return Triangle<T>::a * Triangle<T>::c / 2;
			if ((Triangle<T>::c > Triangle<T>::b) and (Triangle<T>::c > Triangle<T>::a)) return Triangle<T>::b * Triangle<T>::a / 2;
		}
};


