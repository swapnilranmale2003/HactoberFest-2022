# HactoberFest-2022
//i've use online cpp compiler
#include<iostream>
using namespace std;
class rectangle
{
    public:
    float length;
    float width;
    float area;
    void get_input()
    {
        cout<<"Enter length of rectangle: ";
        cin>>length;
        cout<<"Enter width of rectangle: ";
        cin>>width;
    }
    void show_result()
    {
        area=length*width;
        cout<<"Area of rectangle is "<<area<<endl;
    }

};
int main()
{
    rectangle obj;
    obj.get_input();
    obj.show_result();
    return 0;
}
