using namespace std;

template <typename T>
class Triangle
{
	protected:
		T a,b,c;
		
	public:
		Triangle()
			{a = b = c = 2;}	
		
		Triangle (T a, T b, T c)
		{
			if(a+b>c and a+c>b and b+c>a)
			{
				this->a = a;
				this->b = b;
				this->c = c;
			}
			else
			{
				cout << "Error(Constr): not exist\n";
			}
		}
		
		~Triangle()
		{
			cout << "\ndestruction compiled " << this << "\n"; 
		}
		
		void seta(T i){a = i;}
		void setb(T i){b = i;}
		void setc(T i){c = i;}
		
		int geta(){return a;}
		int getb(){return b;} 
		int getc(){return c;}
		
		void show()
		{
			cout << "Triange sides: "<< a << " " << b << " " << c << "\n";
		}
		
		virtual void change()
		{
			int i = -1;	T temp = 0;
			while(i)
			{
				switch(i)
				{
					case 1:
						cout << "Enter the count: ";
						cin >> temp;
						if(temp+b>c and temp+c>b and b+c>temp)
						{
							a = temp;
							i = -1;
						}
						else 
						{
							cout << "Triangle not exist. Change side -a-\n";
							i = 1;
						}
						break;
						
					case 2:
						cout << "Enter the count: ";
						cin >> temp;
						if(temp+a>c and temp+c>a and a+c>temp)
						{
							b = temp;
							i = -1;
						}
						else 
						{
							cout << "Triangle not exist. Change side -b-\n";
							i = 2;
						}
						break;
						
					case 3:
						cout << "Enter the count: ";
						cin >> temp;
						if(temp+b>a and temp+a>b and b+a>temp)
						{
							c = temp;
							i = -1;
						}
						else 
						{
							cout << "Triangle not exist. Change side -c-\n";
							i = 3;
						}
						break;	
					
					case 4:
						T x,y,z;
						cout << "Enter the counts: ";
						cin >> x >> y >> z;
						if(z+y>x and z+x>y and y+x>z)
						{
							a=x; b=y; c=z;
							i = -1;
						}
						else
						{
							cout << "Triangle not exist. Change sides\n";
							i = 4;
						}
						break;
					
					default:
						cout <<"\nCurrent sides: " <<  a << "  " << b 
							<< "  " << c << endl << "\nEnter 1 to change first side\nEnter 2 to change second side\n"
							<< "Enter 3 to change third side\nEnter 4 to change all sides\nEnter 0 to exit\nThe choice:\t";
						cin >> i; cout << endl;
						break;
				}
			}
		}
		
		virtual int prmtr()
		{
			return a+b+c;
		}
		
		virtual float sqr()
		{
			float p = (a+b+c)/2;
			return sqrt(p*(p-a)*(p-b)*(p-c));
		}
		
		virtual float radius()
		{
			float p = (a+b+c)/2;	
			return 2*sqrt(p*(p-a)*(p-b)*(p-c))/(a+b+c);
		}
		
		virtual float Radius()
		{
			float p = (a+b+c)/2;
			return 1.0*a*b*c/(4*(sqrt(p*(p-a)*(p-b)*(p-c))));
		}
};
