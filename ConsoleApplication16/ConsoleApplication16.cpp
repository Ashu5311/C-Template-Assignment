/* q1. #include<iostream>
using namespace std;
class myclass
{
	int num;
public:
	myclass()
	{

	}

	myclass(int k)
	{
		num = k;
	}
	template<class t>
	void display(t arg)
	{
		cout << endl << arg << endl;
	}
};
int main()
{
	myclass  m1(10);
	m1.display(25);

} */

/* q2. #include<iostream>
using namespace std;
template<class t>
class myclass
{
private:
	t num;
public:
	myclass(t a)
	{
		num = a;
	}
	void disp()
	{
		cout << endl << num << endl;
	}
	int size()
	{
		return sizeof(num);
	}
};
int main()
{
	myclass <int>m1(90);
	m1.disp();
	cout << m1.size() << endl;
}
*/

/* q3.#include<iostream>
using namespace std;
template<class type1,class type2,class type3>
class myclass
{
private:
	type1 a;
	type2 b;
	type3 c;
public:
	myclass(type1 a, type2 b, type3 c)
	{
		this->a = a;
		this->b = b;
		this->c = c;

	}
	void displ()
	{
		cout << endl << a << endl << b << endl << c;
	}
};
int main()
{
	myclass<int,char,double>m1(5, 'A', 4.5);
	m1.displ();

} */

/* q4. #include<iostream>
using namespace std;
template<class t1,class t2,class t3>
class myclass
{
private:
	t1 a;
	t2 b;
	t3 c;
public:
	void set1(t1 a)
	{
		this->a = a;
	}
	void set2(t2 b)
	{
		this->b = b;
	}
	void set3(t3 c)
	{
		this->c = c;
	}
	t1 get()
	{
		return a;
	}
	t2 get1()
	{
		return b;
	}
	t3 get2()
	{
		return c;
	}

	
};
int main()
{
	myclass<int, char, double>m1;
	m1.set1(10);
	m1.set2('a');
	m1.set3(4.5);
	cout << m1.get() << endl;
	cout << m1.get1() << endl;
	cout << m1.get2() << endl;



} */

/* q5. #include<iostream>
using namespace std;
class emp
{
private:
	int data = 100;
public:
	template<class t1>
	void displ(t1 a)
	{
		cout << endl << a << endl;
	}
	friend ostream& operator<<(ostream&, emp&);


};
ostream& operator<<(ostream& a, emp& b)
{
	cout << b.data << endl;
	return a;
}
int main()
{
	emp e1;
	cout << e1 << endl;
	e1.displ(100);
	e1.displ('A');
	e1.displ(4.5);
	
} */

 /* q6.#include<iostream>
using namespace std;
class Myclass
{
private:
public:

	template<class t1>
	void displ(t1* arg)
	{
		cout << *arg << endl;
	}
	void displ(int* a)
	{
		cout << *a << endl;
	}

};
int main()
{
	Myclass m1;
	int num = 100;
	char ch = 'A';
	double d = 5.6;
	m1.displ(&d);
	m1.displ(&ch);
	m1.displ(&num);

} */
