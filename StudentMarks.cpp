#include<iostream>
 using  namespace std;
 class Internal_marks
 {
    protected:
    int i_marks;
    public:
     void get_Internalmarks()
    {
        cout<<"enter the internal marks"<< endl;
        cin>> i_marks;
    }
     void put_Internalmarks()
    {
        cout<< "internal marks are="<< i_marks << endl;
        
    }

 };
 class External_marks
 {
    protected:
    int e_marks;
    public:
    void get_Externalmarks()
    {
        cout<<"enter the external marks"<< endl;
        cin>> e_marks;
    }
    void put_Externalmarks()
    {
        cout<<" External marks are ="<<e_marks<< endl;

    }
 
 };
 class student:public Internal_marks,  public External_marks
 {
    int roll;
     char name[30];
    int total_marks;
    public:
    void find_total()
    {
        cout<< "enter the rollno. and name of the student"<< endl;
        cin>> roll;
        cin>>name;
        get_Internalmarks();
        get_Externalmarks();
        total_marks= i_marks+ e_marks;
        cout<< roll;
        cout<< name;
        put_Internalmarks();
        put_Externalmarks();
        cout<< " total marks are "<<"="<< total_marks;
    }

 };
 int main()
 {
    student s;
    s.find_total();
    
 }