#include"header.h"
int main()
{
    bool v(string,string);
    cout<<"How many user need to using system";
    int n;
    cin>>n;
    while(n)
    {
        login l1;
        cout<<"           *****Welcome , in my system*****"<<endl<<endl;
        cout<<"Select one of the following choices :"<<endl;
        cout<<"1- Sine Up"<<endl;
        cout<<"2- Register"<<endl<<endl;;
        int choices;
        cin>>choices;
        if(choices==1)
        {
            string name,password;
            cout<<"Name :"<<endl;
            cin>>name;
            cout<<"password :"<<endl;
            cin>>password;
            while(password.size()!=8)
            {
              cout<<"password :"<<endl;
              cin>>password;
            }
            if(!l1.vaild(name,password))
            {
              continue;
            }
        }
        else
        {
            cin>>l1;
        }
        cout<<"If you want log out !!!"<<endl;
        cout<<"Yes / No"<<endl;
        string y_or_n;
        cin>>y_or_n;
        if(y_or_n=="Yes")
        {
            cout<<"Exit"<<endl<<endl;
            n--;
        }
        else
        {
            cout<<"We are happy for your steel "<<endl<<endl;
            n--;
        }
    }
    return 0;
}
