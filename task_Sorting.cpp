#include<iostream>

using namespace std;
 class Student
{
private:
    int id;
    float cgpa;
    string name;
    int credit_completed;
public :
    Student (int i, float cg , string n, int credit)
    {
        id = i;
        cgpa = cg;
        name = n;
        credit_completed = credit;
    }

   void show_details()
   {

  cout<<"\nEnter Name: ";
  cin>>name;
  cout<<"Enter ID: ";
  cin>>id;
   cout<<"Enter CGPA: ";
  cin>>cgpa;
  cout<<" Enter Student Credit Completed: ";
  cin>>credit_completed;
       cout<<"Student Name: "<<name;

       cout<<"  Student ID: "<<id;

       cout<<"  Student CGPA: "<<cgpa;

       cout<<"  Student Credit Completed: "<<credit_completed;

 }
};
int main ()
{



    Student st1(0,0.0,"",0);
    Student st2(0,0.0,"",0);
    Student st3(0,0.0,"",0);
    Student st4(0,0.0,"",0);
    Student st5(0,0.0,"",0);

    st1.show_details();
    st2.show_details();
    st3.show_details();
    st4.show_details();
    st5.show_details();


return 0;
}
