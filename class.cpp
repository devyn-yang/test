#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box {
    public:
        Box() :l(0) , b(0) , h(0) {}       
        Box(const int l1,const int b1,const int h1) : l(l1) ,b(b1) , h(h1) {}
        Box(const Box &b1) {
            l = b1.l;
            b = b1.b;
            h = b1.h;
        }

        int getLength() {
            return l;
        }

        int getBreadth() {
            return b;
        }
        
        int getHeight() {
            return h;
        }

        long long CalculateVolume() {
            long long volume = l * b * h;
            return volume;
        }

        bool operator <(const Box &box1) {
            if (this->l < box1.l 
                || (this->b < box1.b && this->l == box1.l)
                || (this->h < box1.h && this->b == box1.b && this->l == box1.l))
                return true;
            else 
                return false;
        }
        

        

    private:
        int l;
        int b;
        int h;

};
ostream& operator<<(ostream & out ,  Box & B) {
            out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
            return out;
        };


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
