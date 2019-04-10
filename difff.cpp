#include"iostream"

using namespace std;
int choices;
    int choice;
class diff
{
public:


    diff()
    {
        int Qstring;
        cout<<"1.Formula based differentiation"<<endl;
        cout<<"2.Differentiation by parts"<<endl;
        cout<<"3.differentiation by substitution"<<endl;

        cout<<" Enter choice: ";
        cin >>choices;
        cout<<"The choice you have entered is : "<<choices<<endl;
    }
double coeff1;
double exp1;
void fun_derivative()
{
 if (choices ==1)
    {
     cout << "\n\nEnter value of coefficient: ";
     cin >> coeff1;
     cout << "\nEnter value of exponent: ";
     cin >> exp1;

     cout << "\n\nYou entered: "<< coeff1 << "x^" << exp1<< "\n\nYour new derivative is: "<< exp1 * coeff1 << "x^" << exp1 - 1 << endl;
    }
}
   void  differentiation_by_parts()

    {

    }

    void differentiation_by_sub()
    {

    }
};

int main()
{

    diff ob;
    char qw;
    if(choices==1)

    {
     ob.fun_derivative();
    }


    if(choices==2)
    {
         int choice;
        cout<<"choose from the following for learning"<<endl;
        cout<<"1.Trigonometric Function"<<endl;
        cout<<"2.Log Functions"<<endl;
        cout<<"3.Exponential Function"<<endl;
        cin>>choice;

        if(choice==1){
        cout<<endl<<"x.sinx";
        cout<<"d(xsinx)/dx = x.d(sinx)/dx + sinx.(d(x)/dx)"<<endl<<"x.cosx+sinx";
        }
        if(choice==2){
        cout<<endl<<"log(x)";
        cout<<"d(log(x))/dx = 1/x";
        }
        if(choice==3){
            cout<<endl<<"e^(ax) = d(e^(ax))/dx"<<endl<<"= a.e^(ax)";

        }
        ob.differentiation_by_parts();
}
        if(choices==3)
        {
            cout<<"This is an example to show differentiation by substitution method"<<endl;
             cout<<"Find the derivative of y = f(x) = sin (10x2)"<<endl;
             cout<<"Solution:"<<endl;
            cout<<"Given that y = f(x) = sin (10x2)"<<endl;
            cout<<"implying the method of substitution,"<<endl;

            cout<<"let y = sin (a), where a = 10b and b = x2"<<endl;

            cout<<"Therefore,"<<endl;
            cout<<"dydx = dydadadbdbdx"<<endl;
            cout<<"= cos(a)(10)(2x)"<<endl;
            cout<<"= cos(10x2)(10)(2x)"<<endl;
           cout<<" = 20xcos(10x2)";

            ob.differentiation_by_sub();
        }

}
