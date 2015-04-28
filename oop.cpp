// 1. Write a C++ program to find the number of vowel characters in the given character array using pointer arithmetic


// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
// 	char text[100];
// 	char *p;
// 	int i = 0 ;
// 	char ch;
// 	int vowelCount = 0 ;

// 	p = text;

// 	cout << "Enter the text: "<<endl;
// 	cin.get(text,100);

// 	for ( i = 0 ; i < strlen(text) ; i++ )
// 	{
// 		ch = tolower(*(p + i )) ;
// 		if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
// 		{
// 			vowelCount++;
// 		}
// 	} 

// 	cout << "The number of vowels in the text is : " ;
// 	cout << vowelCount << endl;

// 	return 0;
// }

// 2. Write a program in c++ to print a number in reverse order. Use functions with return type and without return type.

// #include <iostream>
// #include <string.h>
// #include <math.h>
// using namespace std;
// void reverseWithoutReturn(int);
// int reverseWithReturn(int);

// int reverseNumber[10];
// int main()
// {
// 	int number;
// 	int i;

// 	cout <<"Enter the number: "<<endl;

// 	cin >> number ;

// 	cout << "Output using function without return: ";
// 	reverseWithoutReturn(number);

// 	cout << "Output using function with return: ";
// 	int numberReverse = reverseWithReturn(number);
// 	cout << numberReverse <<endl;
// 	return 0;
// }

// void reverseWithoutReturn( int number)
// {
// 	while ( number )
// 	{
// 		cout << number % 10;
// 		number = number / 10;
// 	}
// 	cout << endl;
// }

// int reverseWithReturn( int number )
// {
// 	int i = 0 ;
// 	int reverseNumber[10];
// 	int numberReverse;
// 	while ( number )
// 	{
// 		reverseNumber[i++] =  number % 10;
// 		number = number / 10;
// 	}

// 	int j = 0 ;
// 	int k = 0 ;
// 	for ( j = i - 1 ; j >= 0 ; j-- )
// 	{
// 		numberReverse = numberReverse + reverseNumber[k] * pow(10,j);
// 		k++;
// 	}
// 	return numberReverse;
// }

// 3. Write a C++ program to perform various arithmetic operations such as addition, subtraction, multiplication, modulus and division
// using inline function.

// #include <iostream>
// #include <stdio.h>


// using namespace std;



// class ArithMeticOperations
// {
// 	public:

// 		inline int addition(int a, int b)
// 		{
// 			return (a + b);
// 		};
// 	public:

// 		inline int subtraction(int a, int b)
// 		{
// 			return (a - b);
// 		};
// 	public:

// 		inline int multiplication(int a, int b)
// 		{
// 			return (a * b);
// 		};
// 	public:

// 		inline int modulus(int a, int b)
// 		{
// 			return (a % b);
// 		};
// 	public:

// 		inline int division(int a, int b)
// 		{
// 			return (a / b);
// 		};
// };


// int main()
// {
// 	int a,b;

// 	cout << "Enter the numbers a and b" << endl;
// 	cin >> a;
// 	cin >> b;

// 	ArithMeticOperations ao;

// 	int add = ao.addition(a,b);

// 	cout << "Addition is : " ;
// 	cout << add;
// 	cout<<endl;

// 	int sub = ao.subtraction(a,b);

// 	cout << "subtraction is : " ;
// 	cout << sub;
// 	cout<<endl;

// 	int mul = ao.multiplication(a,b);

// 	cout << "multiplication is : " ;
// 	cout << mul;
// 	cout<<endl;

// 	int div = ao.division(a,b);

// 	cout << "division is : " ;
// 	cout << div;
// 	cout<<endl;

// 	int Mod = ao.modulus(a,b);

// 	cout << "Modulus is : " ;
// 	cout << Mod;
// 	cout<<endl;
// }

// 4. Create a class for counting the objects created and destroyed 
// within various block using constructors and destructors.


// #include <iostream>
// #include <stdio.h>
// using namespace std;

// class Counting
// {

// public :

//  static int created;
//  static int destroyed;

// public:
// 	Counting()
// 	{
// 		created++;
// 	};
// 	~Counting()
// 	{
// 		destroyed++;
// 	};

// 	/* data */
// };

// int Counting::created = 0 ;
// int Counting::destroyed = 0 ;

// int main()
// {
// 	Counting count1;
// 	Counting count2;
// 	Counting count3;

// 	cout << "Numbers of object created: " ;
// 	cout << count2.created;
// 	cout << endl;

// 	// Counting count1;
// 	// Counting count2;
// 	// Counting count3;

// 	count1.~Counting();

// 	cout << "Numbers of object destroyed: " ;
// 	cout << count2.destroyed;
// 	cout << endl;


// }

// 5. Write a C++ program to create three objects for a class named pntr_obj with data members such as roll_no
// & name. Create a member function set_data() for setting the data values and print() member function to print
// which object has invoked it using this pointer.

// #include <iostream>
// #include <stdio.h>

// using namespace std;



// class pntr_obj	
// {
// 	private:
// 		int roll_no;
// 		string name;

// 	public:

// 		void set_data(int roll_no,string name)
// 		{
// 			this->roll_no = roll_no;
// 			this->name = name ;
// 		};

// 		void print()
// 		{
// 			cout << "Roll number is: ";
// 			cout << this->roll_no;
// 			cout << endl;
			
// 			cout << "Student name  is: ";
// 			cout << this->name;
// 			cout << endl;
// 			cout << endl;

// 		};
// };


// int main()
// {
// 	pntr_obj obj1;
// 	pntr_obj obj2;
// 	pntr_obj obj3;

// 	obj1.set_data(1,"Shahjahan");
// 	obj2.set_data(2,"Zishan");
// 	obj3.set_data(3,"Raghib");


// 	obj1.print();
// 	obj2.print();
// 	obj3.print();
	
// }

// 6. Write a C++ program to implement virtual function ( Polymorphism ) by creating a base class c_polygon 
// which has  virtual function area(). Two classes c_rectangle and c_triangle derived from c_polygon and
//  they have area() to calculate and return the area of rectangle and triangle respectively.

// what is a virtual function?
// In object-oriented programming, a virtual function or virtual method is a function or method
//  whose behavior can be overridden within an inheriting class by a function with the same signature. 
// This concept is an important part of the polymorphism portion of object-oriented programming (OOP).


// #include <iostream>
// #include <stdio.h>
// #include <math.h>

// using namespace std;


// class c_polygon
// {

// 	public:

// 		virtual void area()
// 		{
// 			cout << "I am from c_polygon";
// 		};
// };


// class c_rectangle : public c_polygon
// {
// 	public:
// 		void area(int a,int b)
// 		{
// 			cout << "The area of the rectangle is : ";
// 			cout << a * b <<endl;
// 		};
// };

// class c_triangle : public c_polygon
// {
// 	private:
// 		float s;
// 		float area_of_trinagle;

// 	public:

// 		void area(int a,int b,int c)
// 		{
// 			s = (a + b + c) / 2 ;
// 			cout << "The area of the triangle is: " << endl;
// 			cout << sqrt( s * ( s - a ) * ( s - b ) * ( s - c ) )<<endl;

// 		};
// };

// int main()
// {
// 	c_triangle triangle;
// 	c_rectangle rectangle;

// 	triangle.area(5,4,3);
// 	rectangle.area(5,4);

// }

// 7. Write a C++ program to count the number of persons inside a bank, by increasing count whenever a person
// enters a bank , using an increment (++) operator overloading function, and decrease the count whenever a person
// leaves the bank, using a decrement (--) operator overloading function inside the class.

// #include <iostream>
// #include <stdio.h>
// #include <stdlib.h>


// using namespace std;

// class Overload
// {
// 	public:
// 		int operator ++(int count)
// 		{
// 			count = count + 1 ;
// 			return count;
// 		};
// 		int operator --(int count)
// 		{
// 			count = count - 1 ;
// 			return count;
// 		};
// };

// int main()
// {
// 	int number_of_persons = 0 ;
// 	char choice;
// 	while ( 1 )
// 	{
// 		cout << "Enter your choice : 1. Enters ( E ) 2. Leaves ( L ) 3. Exit( X ) 4. Print (P) ."<<endl;
	
// 		cin >> choice;

// 		switch ( choice )
// 		{
// 			case 'E' :
// 				number_of_persons = ++(number_of_persons);
// 				cout << "Total number of person in bank is: ";
// 				cout << number_of_persons;
// 				cout << endl;
// 				break;
// 			case 'L' : 
// 				number_of_persons= --(number_of_persons);
// 				cout << "Total number of person in bank is: ";
// 				cout << number_of_persons;
// 				cout << endl;
// 				break;
// 			case 'P' :
// 				cout << "Total number of person in bank is: ";
// 				cout << number_of_persons;
// 				cout << endl;
// 				break;

// 			case 'X' :
// 				exit(EXIT_SUCCESS);
// 			default :
// 				cout << "Enter a correct choice."<< endl;
// 				break;
// 		}
// 	}
// 	return 0;
// }

// 8. Write a C++ program to create two objects of a class called company and add their data members using 
// an operator overloaded function for '+' operator and '-' operator.

// #include<iostream>
// using namespace std;

// class company{

// int d;

// public:
// company(){d=0;}
// company(int value){
// d=value;
// }
// void getdata()
// {
//     cout<<"enter value :\n";
//     cin>>d;
// }
// int value(){
// return d;
// }

// company operator+(company x)
// {
//     return company(d+x.d);
// }


// company operator-(company x)
// {
//     return company(d-x.d);
// }



// };


// int main()
// {
// company c1,c2,c3;

// c2.getdata();
// c3.getdata();

// c1=c2+c3;
// cout<<"sum is : "<<c1.value()<<endl;
// c1=c2-c3;
// cout<<"difference  is : "<<c1.value()<<endl;

// return 0;
// }

// 9.Program to create a class matrix and overload +,- operatorto perform matrix addition and subtraction.

// #include<iostream>
// #include<math.h>
// using namespace std;
// #define n 3
// class matrix
// 	{
// 			int mat[100][100];
// 		public:
// 			void set_data();
// 			matrix operator+(matrix mat2);
// 			matrix operator-(matrix mat2);
// 			void Display();
// 	};

// void matrix::set_data()
// 	{
// 		int i,j;
// 		for(i=0;i<n;i++)
// 		{
// 			for(j=0;j<n;j++)
// 			{
// 				cin>>mat[i][j];
// 			}
// 		}
// 	}

// matrix matrix::operator+(matrix mat2)
// 	{
// 		int i,j;
// 		//matrix mat3;
// 		for(i=0;i<n;i++)
// 		{
// 			for(j=0;j<n;j++)
// 			{
// 				mat[i][j]=mat[i][j]+mat2.mat[i][j];
// 			}
// 		}
// 		return *this;
// 	}

// matrix matrix::operator-(matrix mat2)
// 	{
// 		int i,j;
// 		for(i=0;i<n;i++)
// 		{
// 			for(j=0;j<n;j++)
// 			{
// 				mat[i][j]=mat[i][j]-mat2.mat[i][j];
// 			}
// 		}
// 		return *this;
// 	}

// void  matrix::Display(){
	
// 		int i,j;
// 		//matrix mat3;
// 		for(i=0;i<n;i++)
// 		{
// 			for(j=0;j<n;j++)
// 			{
// 				cout<<mat[i][j]<<"  ";
// 			}
// 			cout<<"\n\n";
// 		}
	
// 	}

// int main()
// {
// 	matrix mat1,mat2,mat3;
// 	while(1)
// 	{	
// 		cout<<"enter first matrix\n";
// 		mat1.set_data();
	
// 		cout<<"enter second matrix\n";
// 		mat2.set_data();
	
// 		cout<<"enter your choice :\n1.addition\n2.subtraction\n";
// 		int c;
	
// 		cin>>c;
// 		switch(c)
// 		{
// 			case 1:mat3=mat1+mat2;
// 				mat3.Display();
// 				break;

// 			case 2:mat3=mat1-mat2;
// 				mat3.Display();
// 				break;

// 			default:cout<<"enter correct choice\n";
// 		}
// 	}
// 	return 0;
// }


// 10. Program to accept five different numbers by creating a class called friendfunc1 and friendfunc2
//  taking  2and 3 arg respectively and calculate the average of these numbers by passing object of class 
//  to friend function

// #include<iostream>
// #include<cstdlib>
// #include<cstring>

// using namespace std;

// class friendfunc2;

// class friendfunc1
// {
//     int a1,a2;

//     public:
//     friendfunc1(int x,int y)
//     {
//         a1=x;
//         a2=y;
//     }

//     friend float average(friendfunc1 f1,friendfunc2 f2);
// };


// class friendfunc2
// {
//     int a1,a2,a3;

//     public:
//     friendfunc2(int x,int y,int z)
//     {
//         a1=x;
//         a2=y;
//         a3=z;
//     }

//     friend float average(friendfunc1 f1,friendfunc2 f2);
// };

// float average(friendfunc1 f1, friendfunc2 f2)
// {
//     return float((f1.a1 + f1.a2 + f2.a1 + f2.a2 + f2.a3))/float(5);
// }

// int main()
// {
//     friendfunc1 obj1(3,6);
//     friendfunc2 obj2(3,4,2);

//     float ans=average(obj1,obj2);

//     cout<<"Average: "<<ans<<endl;
// }

// 11. Program to accept student details such as name and 3 different marks by get_data 
// method and display the name and average of marks using display() method.Define a friend 
// class for calculating the average of marks using method mark_avg().

// #include<iostream>
// #include<math.h>
// using namespace std;

// class student
// {
// 	int sub1,sub2,sub3;
// 	char stu_name[100];
// 	public:
//  		void get_data();
// 		friend float mark_avg(student s);	
// 		void Display();
// };
	

// void student::get_data()
// {
// 	cout<<"\nenter name : ";
// 	cin>>stu_name;
// 	cout<<"\nenter maths number : ";
// 	cin>>sub1;
// 	cout<<"\nenter science number : ";
// 	cin>>sub2;
// 	cout<<"\nenter english number : ";
// 	cin>>sub3;
// }

// float mark_avg(student s)
// 	{
// 		return float((s.sub1+s.sub2+s.sub3))/float(3);
// 	}

// void student::Display()
// 	{
// 		cout<<"\nName of student : "<<stu_name;
// 		cout<<"\nAverage marks : "<<mark_avg(*this)<<"\n";
		
// 	}

// int main()
// 	{
// 		student s1,s2;
// 		s1.get_data();
// 		s1.Display();

// 		s2.get_data();
// 		s2.Display();
// 		return 0;
// 	}

// 12. Write a program in C++ to overload delete and new operator.

// #include<iostream>
// #include<stdlib.h>
// #include<malloc.h>
// using namespace std;

// class loc{
//     private:
//         int longitude,latitude;
//     public:
//         loc(){
//             longitude = latitude = 0;
//         }
//         loc(int lg,int lt){
//             longitude -= lg;
//             latitude -= lt;
//         }
//         void show(){
//             // cout << "longitude" << endl;
//             // cout << "latitude" << endl;
//         }
//         void* operator new(size_t size);
//         void operator delete(void* p);
//         void* operator new[](size_t size);
//         void operator delete[](void* p);
// };

// void* loc :: operator new(size_t size){
//     void* p;
//     cout << "In overloaded new" << endl;
//     p = malloc(size);
//     cout << "size :" << size << endl;
//     if(!p){
//         bad_alloc ba;
//         throw ba;
//     }
//     return p;
// }

// void loc :: operator delete(void* p){
//     cout << "In delete operator" << endl;   
//     free(p);
// }

// void* loc :: operator new[](size_t size){
//     void* p;
//     cout << "In overloaded new[]" << endl;
//     p = malloc(size);
//     cout << "size :" << size << endl;
//     if(!p){
//         bad_alloc ba;
//         throw ba;
//     }
//     return p;
// }

// void loc :: operator delete[](void* p){
//     cout << "In delete operator - array" << endl;   
//     free(p);
// }

// int main(){
//     loc *p1,*p2;
//     int i;
//     cout << "sizeof(loc)" << sizeof(loc) << endl;
//     try{
//         p1 = new loc(10,20);
//     }
//     catch (bad_alloc ba){
//         cout << "Allocation error for p1" << endl;
//         return 1;
//     }
//     try{
//         p2 = new loc[10];
//     }
//     catch(bad_alloc ba){
//         cout << "Allocation error for p2" << endl;
//         return 1;
//     }
//     p1->show();
//     for(i = 0;i < 10;i++){
//         p2[i].show();
//     }
//     delete p1;
//     delete[] p2;
//     return 0;
// }

// 13. WRITE A PROGRAM TO EXPLAIN CLASS TEMPLATE BY CREATING A TEMPLATE T 
// FOR A CLASS NAME PAIR HAVING TWO DATA MEMBERS OF TYPE T WHICH ARE INPUTTED BY
// A CONSTRUCTOR AND A MEMBER FUNCTION GET-MAX() RETURN THE GREATEST OF TWO NUMBER TO MAIN.

// #include <iostream>

// using namespace std;

// template <class Shahjahan>

// class Max
// {
// 	Shahjahan a,b;

// public:

// 	Max(Shahjahan x,Shahjahan y)
// 	{
// 		a = x  ;
// 		b = y  ;

// 		// cout << a ;
// 	}

// 	Shahjahan get_Max()
// 	{
// 		if ( a > b )
// 		{
// 			return a;
// 		}
// 		return b;
// 	}
// };

// int main()
// {
// 	Max<int> integ(15,20);
	
// 	cout << "Maximum of 15 and 20 from user is : "<< integ.get_Max() << endl;
// 	return 0;
// }

// Q.15 : WRITE A PROGRAM IN C++ TO OVERLOAD CIN AND COUT STREAM OPERATORS TO INPUT AND DISPLAY
// OBJECTS OF A CLASS STUDENT WHICH CONTAINS STUDENT DETAILS LIKE NAME,CLASS,ROLL_NO ETC.

// #include<iostream>
// using namespace std;
// class Shahjahan
// {
//     protected:
// 	char name[50];
// 	int cls,rollno,age;
// 	public:
// 		friend istream & operator >>(istream &din ,Shahjahan &a)
// 		{
// 			cout<<"\nEnter Your name :";
// 			din>>a.name;
// 			cout<<"\nEnter your class :";
// 			din>>a.cls;
// 			cout<<"\nEnter your rollno :";
// 			din>>a.rollno;
// 			cout<<"\nEnter your age :";
// 			din>>a.age;
// 			return din;
// 		}
// 		friend ostream &operator<<(ostream &dout ,Shahjahan &a)
// 		{
// 			dout<<"\nYour name :"<<a.name;
// 			dout<<"\nyour class :"<<a.cls;
// 			dout<<"\nyour rollno :"<<a.rollno;
// 			dout<<"\nyour age :"<<a.age;
// 			return dout;
// 		}
// };
// int main()
// {
// 	Shahjahan a;
// 	cin>>a;
// 	cout<<a;
// 	return 0;
// }

// 16. WRITE A CLASS 3D WHICH INHERITS ANOTHER CLASS 2D , 
// FOR 3 CALCULATION USING THESE CLASSES DEFINE ANY TWO POINTS IN 
// 3D SPACE AND FIND THE DISTANCE BETWEEN THEM. THE FORMULA FOR FINDING DISTANCE 
// BETWEEN ANY TWO POINTS IN 3D SPACE IS :
// DISTANCE  = SQUAREROOT(xd*xd+yd*yd+zd*zd);
// Where xd=x2-x1 , yd=y2-y1 and zd=z2-z1.

// #include <iostream>
// #include <math.h>

// using namespace std;

// class twoD
// {
// 	protected:
// 		int x1,y1,x2,y2;
// };

// class threeD : public twoD
// {
// 	protected:
// 		int z1,z2;

// 	public :
// 		void getValue()
// 		{
// 			cout << "Enter the value of x1,x2,y1,y2 and z1, z2: "<<endl;
// 			cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2 ;
			
// 		}

// 		void calculateDistance()
// 		{
// 			cout << "The distance is :" <<sqrt(((x2-x1) * (x2-x1) ) +( (y2-y1) * (y2-y1) ) +((z2-z1) * (z2-z1) )) << endl;

// 		}
// };

// int main()
// {
// 	threeD threed;

// 	threed.getValue();
// 	threed.calculateDistance();

// 	return 1;
// }


// 17. Write a program in C++ which acts as a contact manager. It saves the content of a file,and 
// retrieve them when asked by the user. Modules of the program include: Add, Delete, Search & save.

// #include <fstream>
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// void add_contact()
// {
// 	string name;
// 	string mobile_no;

// 	cout << "Enter name: " <<endl;
// 	cin >> name;
// 	cout << "Enter mobile_no: " << endl;
// 	cin >> mobile_no;

// 	ofstream myfile;

// 	myfile.open("shah.txt",ios::app | ios :: out );

// 	myfile  << name << endl << mobile_no <<endl ;

// 	myfile.close();
// }

// void delete_contact()
// {
// 	string name,line;

// 	cout << "Give the name to be deleted: " <<endl;

// 	cin >> name;

// 	ifstream myfile;

// 	ofstream temp;

// 	myfile.open("shah.txt");

// 	temp.open("temp.txt");

// 	while ( getline(myfile,line))
// 	{
// 		if ( line != name )
// 		{
// 			temp << line << endl;
// 		}
// 		else
// 		{
// 			cout << "The name was present and deleted successfully.";
// 			getline(myfile,line);
// 			getline(myfile,line);
// 		}
// 	}

// 	myfile.close();
// 	temp.close();

// 	remove("shah.txt");

// 	rename("temp.txt","shah.txt");

// }

// int search_contact()
// {
// 	string name,line;

// 	cout << "Enter the name to be searched: " << endl;

// 	cin >> name;

// 	ifstream myfile;

// 	myfile.open("shah.txt");

// 	while ( getline(myfile,line))
// 	{
// 		if ( line == name)
// 		{
// 			cout << "Search successful!. The name is found."<< endl;
// 			return 1;
// 		}
// 	}
// 	cout << "Search unsuccessful. Name is not found .";
// 	return 0;
// }

// int main()
// {
	
// 	int choice;

// 	while (1)
// 	{
// 		cout << "\nMENU\n" <<endl;

// 		cout << "1. Add 2. Delete 3. Search 4. Exit"<<endl;
// 		cout << "Enter your choice: " <<endl;

// 		cin >> choice;

// 		switch(choice)
// 		{
// 			case 1: 
// 				add_contact();
// 				break;
// 			case 2: 
// 				delete_contact();
// 				break;
// 			case 3:
// 				search_contact();
// 				break;

// 			case 4:
// 				exit(1);
// 			default:
// 				cout<< "Please Enter a correct choice.";
// 				break;
// 		}
// 	}


// }

// 18.  WRITE A BASE CLASS THAT ASKS THE USER A COMPLEX NUMBER AND A DERIVED CLASS THAT 
// ADDS A COMPLEX NUMBER OF ITS OWN TO THAT OF THE BASE CLASS . FINALLY MAKE A THIRD CLASS 
// THAT IS FRIEND OF
//  THE DERIVED CLASS AND CALCULATE THE DIFFERENCE OF BASE COMPLEX NUMBER AND ITS OWN NUMBER.

// #include <iostream>
// using namespace std;

// class comp1{
//     protected:
//         int c1real, c1imag;
// };

// class comp2 : public comp1
// {
//     int creal2, cimag2,re1,im1;
//     public:
//         void add();
//         void read()
//         {
//             cout << "Enter the real and imaginary parts of 1st no and 2nd no :" << endl;
//             cin >> c1real >> c1imag >> creal2 >> cimag2;
//         }
//         friend class third;
// };

// void comp2::add()
// {
//     re1 = c1real + creal2;
//     im1 = c1imag + cimag2;
//     cout<<"\nAdded complex number : "<<re1<<" + "<<im1<<"i";
// }

// class third
// {
//     int real2, img2;
//     public:
//         void sub(comp2 obj);

// };

// void third::sub(comp2 obj)
// {
//     real2 = obj.c1real - obj.creal2;
//     img2 = obj.c1imag - obj.cimag2;
//     cout<<"\nSubtracted complex number : "<<real2<<" + "<<img2<<"i";
// }

// int main()
// {

//     cout<<"Complex number is x+iy" <<endl;
//     comp2 sobj;
//     sobj.read();
//     sobj.add();
//     third tobj;
//     tobj.sub(sobj);
// }

// 18. WRITE THREE DERIVED CLASSES INHERITING FUNCTIONALITY OF THE BASE CLASS
//  PERSON (IT'S MEMBER FUNCTION SHOULD ASK NAME AND AGE) AND WITH ADDED UNIQUE FEATURES 
// OF STUDENT, EMPLOYEE AND FUNCTIONALITY TO ASSIGN, CHANGE, DELETE RECORDS OF
//  STUDENT AND EMPLOYEE. MAKE ONE MEMBER FUNCTION FOR PRINTING ADDRESS OF OBJECT CLASSES
//   BOTH BASE AND DERIVED USING THIS POINTER. CREATE 
// TWO OBJECTS OF BASE CLASS AND DERIVED CLASS EACH AND PRINT ADDRESSES OF INDIVIDUAL OBJECTS.
class Person
{
	protected:
		string name;
		int age;
	void get()
	{
		cout << "Enter the name: " << endl;

		cin >> name;

		cout << "Enter the age: " <<endl;

		cin >> age;
	}	
};

