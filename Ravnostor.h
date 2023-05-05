using namespace std;

template <typename T>
class Ravnostor : public Triangle<T>
{
	public:		
		void change()		
		{
			int k = 1;	
			while(k!=0)
			{
				cout <<"\nCurrent sides: " <<  Triangle<T>::a << "  " << Triangle<T>::b 
								<< "  " << Triangle<T>::c << endl;
				cout << "Enter the side of an equilateral triangle: ";
				T i;	cin >> i; 
				if(i > 0)
				{
					Triangle<T>::a = Triangle<T>::b = Triangle<T>::c = i;
					k = 0;
				}
				else 
				{
					cout << "Denied! Triangle not exist. Change side\n\n";
				}
			}
		}
		
		double radius()
		{
			return 1.0*Triangle<T>::a / 2 / sqrt(3);
		}
		
		double Radius()
		{
			return Triangle<T>::a / sqrt(3);
		}
		
		double sqr()
		{
			return Triangle<T>::a * Triangle<T>::a * sqrt(3) / 4;
		}
};

