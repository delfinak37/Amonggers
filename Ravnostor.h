using namespace std;

template <typename T>
class Ravnostor : public Triangle<T>
{
	public:
		//Ravnostor(T a, T b, T c):Triangle<T>(a,b,c){}
		
		void change()		
		{
			cout << "Enter the side of an equilateral triangle: ";
			T i;	cin >> i;
			Triangle<T>::a = Triangle<T>::b = Triangle<T>::c = i;
		}
		
		float radius()
		{
			float p = (Triangle<T>::a+Triangle<T>::b+Triangle<T>::c)/2;	
			return 2*sqrt(p*(p-Triangle<T>::a)*(p-Triangle<T>::b)*(p-Triangle<T>::c))/(Triangle<T>::a+Triangle<T>::b+Triangle<T>::c);
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

