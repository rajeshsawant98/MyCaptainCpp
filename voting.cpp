/*
C++ program to check if a person is eligible to vote or not.
*/

#include<iostream>
using namespace std;

class Person
{
    private:
    int age;

    public:
    void setAge()
    {
        int a;
        cout<<"Enter The Age: "<<endl;
        cin>>a;

        if(a>=0 && a<=120)
        {
            age=a;
        }
        else
        {
            cout<<"Wrong Age Entered!!!"<<endl;
            exit(0);
        }
    }

    int getAge()
    {
        return age;
    }

    char validity()
    {
        if(age>=18)
        { return 'Y'; }
        else
        {
            return 'N';
        }
    }
};

int main()
{
    Person p1;
    p1.setAge();

    cout<<endl;
    cout<<"Age of the Person: "<<p1.getAge()<<endl;
    cout<<"Is the Person eligible for Voting ?: "<<p1.validity()<<endl;
    
}

