using namespace std;

template <typename T>
class Ravnostor : public Triangle<T>
{
	public:		
		void change()		
		{
			cout << "Enter the side of an equilateral triangle: ";
			T i;	cin >> i;
			Triangle<T>::a = Triangle<T>::b = Triangle<T>::c = i;
		}
		
		float radius()
		{
			return Triangle<T>::a / 2 / sqrt(3);
		}
		
		float Radius()
		{
			return Triangle<T>::a / sqrt(3);
		}
		
		float sqr()
		{
			return Triangle<T>::a * Triangle<T>::a * sqrt(3) / 4;
		}
};

